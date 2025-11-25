//// ===============================
//// QUESTION 1 – HUFFMAN CODING
//// ===============================
//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//
//struct Node {
//    char ch;
//    int freq;
//    Node* left;
//    Node* right;
//
//    Node(char c, int f) {
//        ch = c;
//        freq = f;
//        left = right = nullptr;
//    }
//};
//
//struct Compare {
//    bool operator()(Node* a, Node* b) {
//        return a->freq > b->freq;
//    }
//};
//
//void printCodes(Node* root, string code) {
//    if (!root) return;
//
//    if (!root->left && !root->right) {
//        cout << root->ch << " : " << code << endl;
//    }
//
//    printCodes(root->left, code + "0");
//    printCodes(root->right, code + "1");
//}
//
//Node* buildHuffman(char chars[], int freq[], int n) {
//    priority_queue<Node*, vector<Node*>, Compare> pq;
//
//    for (int i = 0; i < n; i++)
//        pq.push(new Node(chars[i], freq[i]));
//
//    while (pq.size() > 1) {
//        Node* left = pq.top(); pq.pop();
//        Node* right = pq.top(); pq.pop();
//
//        Node* merged = new Node('\0', left->freq + right->freq);
//        merged->left = left;
//        merged->right = right;
//
//        pq.push(merged);
//    }
//
//    return pq.top();
//}
//
//int main() {
//    char chars[] = { 'A','B','C','D','E','F' };
//    int freq[] = { 5,9,12,13,16,45 };
//
//    Node* root = buildHuffman(chars, freq, 6);
//
//    cout << "Huffman Codes:\n";
//    printCodes(root, "");
//}
