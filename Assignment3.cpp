#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

struct Node {
    string keyword;
    vector<string> urls;
    Node* left;
    Node* right;

    Node(string k, string url) {
        keyword = k;
        urls.push_back(url);
        left = right = nullptr;
    }
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, string key, string url) {
        if (node == nullptr)
            return new Node(key, url);

        if (key < node->keyword)
            node->left = insert(node->left, key, url);
        else if (key > node->keyword)
            node->right = insert(node->right, key, url);
        else {
            for (string u : node->urls) {
                if (u == url) return node;
            }
            node->urls.push_back(url);
        }
        return node;
    }

    Node* search(Node* node, string key) {
        if (node == nullptr || node->keyword == key)
            return node;
        if (key < node->keyword)
            return search(node->left, key);
        else
            return search(node->right, key);
    }

public:
    BST() { root = nullptr; }

    void insert(string key, string url) {
        root = insert(root, key, url);
    }

    Node* search(string key) {
        return search(root, key);
    }
};

void toLowerCase(string& s) {
    for (char& c : s)
        c = tolower(c);
}
int main() {
    string filename;
    cout << "Please enter a filename: ";
    getline(cin, filename);

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Could not open file.\n";
        return 0;
    }

    BST tree;
    string line, url, keywords;

    while (getline(file, line)) {
        if (line.empty()) continue; 
        url = line;

        if (!getline(file, keywords)) break;
        stringstream ss(keywords);
        string word;
        while (ss >> word) {
            toLowerCase(word);
            tree.insert(word, url);
        }
    }

    cout << "File loaded successfully.\n";

    while (true) {
        cout << "\nPlease enter a word to search (or type 'exit' to quit): ";
        string query;
        getline(cin, query);
        toLowerCase(query);

        if (query == "exit") break;

        Node* result = tree.search(query);
        if (result == nullptr)
            cout << "No results found.\n";
        else {
            cout << result->urls.size() << " result(s) found\n";
            int i = 1;
            for (string u : result->urls)
                cout << i++ << ". " << u << endl;
        }
    }

    cout << "Goodbye!\n";
    return 0;
}
