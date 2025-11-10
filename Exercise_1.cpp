//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Employee {
//    int id;
//    string name;
//    int performance;
//
//    Employee(int i = 0, string n = "", int p = 0) : id(i), name(n), performance(p) {
//    }
//};
//
//struct Node {
//    Employee data;
//    Node* left;
//    Node* right;
//    int height;
//
//    Node(Employee emp) {
//        data = emp;
//        left = right = nullptr;
//        height = 1;
//    }
//};
//
//class AVLTree {
//private:
//    Node* root;
//
//    int getHeight(Node* n) {
//        return (n == nullptr) ? 0 : n->height;
//    }
//
//    int getBalanceFactor(Node* n) {
//        return (n == nullptr) ? 0 : getHeight(n->left) - getHeight(n->right);
//    }
//
//    Node* rightRotate(Node* y) {
//        Node* x = y->left;
//        Node* T2 = x->right;
//
//        // Perform rotation
//        x->right = y;
//        y->left = T2;
//
//        // Update heights
//        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
//        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
//
//        return x;
//    }
//
//    Node* leftRotate(Node* x) {
//        Node* y = x->right;
//        Node* T2 = y->left;
//
//        // Perform rotation
//        y->left = x;
//        x->right = T2;
//
//        // Update heights
//        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
//        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
//
//        return y; 
//    }
//
//    Node* insert(Node* node, Employee emp) {
//        // 1. Normal BST insert
//        if (node == nullptr)
//            return new Node(emp);
//
//        if (emp.id < node->data.id)
//            node->left = insert(node->left, emp);
//        else if (emp.id > node->data.id)
//            node->right = insert(node->right, emp);
//        else {
//            cout << "Duplicate Employee ID not allowed!"<<endl;
//            return node;
//        }
//        // 2. Update height
//        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
//        // 3. Get balance factor
//        int balance = getBalanceFactor(node);
//        // 4. Balance cases
//        // LL
//        if (balance > 1 && emp.id < node->left->data.id)
//            return rightRotate(node);
//
//        // RR
//        if (balance < -1 && emp.id > node->right->data.id)
//            return leftRotate(node);
//
//        // LR
//        if (balance > 1 && emp.id > node->left->data.id) {
//            node->left = leftRotate(node->left);
//            return rightRotate(node);
//        }
//
//        // RL
//        if (balance < -1 && emp.id < node->right->data.id) {
//            node->right = rightRotate(node->right);
//            return leftRotate(node);
//        }
//
//        return node;
//    }
//
//    Node* minValueNode(Node* node) {
//        Node* current = node;
//        while (current->left != nullptr)
//            current = current->left;
//        return current;
//    }
//
//    Node* remove(Node* root, int id) {
//        if (root == nullptr)
//            return root;
//        // BST delete
//        if (id < root->data.id)
//            root->left = remove(root->left, id);
//        else if (id > root->data.id)
//            root->right = remove(root->right, id);
//        else {
//            // Node found
//            if (root->left == nullptr || root->right == nullptr) {
//                Node* temp = root->left ? root->left : root->right;
//
//                if (temp == nullptr) {
//                    temp = root;
//                    root = nullptr;
//                }
//                else
//                    *root = *temp;
//
//                delete temp;
//            }
//            else {
//                Node* temp = minValueNode(root->right);
//                root->data = temp->data;
//                root->right = remove(root->right, temp->data.id);
//            }
//        }
//
//        if (root == nullptr)
//            return root;
//
//        // Update height
//        root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//
//        // Rebalance
//        int balance = getBalanceFactor(root);
//
//        // LL
//        if (balance > 1 && getBalanceFactor(root->left) >= 0)
//            return rightRotate(root);
//
//        // LR
//        if (balance > 1 && getBalanceFactor(root->left) < 0) {
//            root->left = leftRotate(root->left);
//            return rightRotate(root);
//        }
//
//        // RR
//        if (balance < -1 && getBalanceFactor(root->right) <= 0)
//            return leftRotate(root);
//
//        // RL
//        if (balance < -1 && getBalanceFactor(root->right) > 0) {
//            root->right = rightRotate(root->right);
//            return leftRotate(root);
//        }
//
//        return root;
//    }
//
//    void display(Node* node) {
//        if (node == nullptr)
//            return;
//        display(node->left);
//        cout << "ID: " << node->data.id
//            << " | Name: " << node->data.name
//            << " | Performance: " << node->data.performance << endl;
//        display(node->right);
//    }
//
//    void displayInRange(Node* node, int low, int high) {
//        if (node == nullptr)
//            return;
//        if (low < node->data.id)
//            displayInRange(node->left, low, high);
//        if (low <= node->data.id && node->data.id <= high)
//            cout << "ID: " << node->data.id
//            << " | Name: " << node->data.name
//            << " | Performance: " << node->data.performance << endl;
//        if (high > node->data.id)
//            displayInRange(node->right, low, high);
//    }
//
//    Node* search(Node* node, int id) {
//        if (node == nullptr || node->data.id == id)
//            return node;
//        if (id < node->data.id)
//            return search(node->left, id);
//        else
//            return search(node->right, id);
//    }
//
//    int count(Node* node) {
//        if (node == nullptr)
//            return 0;
//        return 1 + count(node->left) + count(node->right);
//    }
//
//    void findHighPerformers(Node* node, int threshold) {
//        if (node == nullptr)
//            return;
//        findHighPerformers(node->left, threshold);
//        if (node->data.performance >= threshold)
//            cout << "ID: " << node->data.id
//            << " | Name: " << node->data.name
//            << " | Score: " << node->data.performance << endl;
//        findHighPerformers(node->right, threshold);
//    }
//
//    void clear(Node*& node) {
//        if (node == nullptr)
//            return;
//        clear(node->left);
//        clear(node->right);
//        delete node;
//        node = nullptr;
//    }
//
//public:
//    AVLTree() {
//        root = nullptr;
//    }
//
//    void insert(Employee emp) {
//        root = insert(root, emp);
//    }
//
//    void remove(int id) {
//        root = remove(root, id);
//    }
//
//    void display() {
//        if (root == nullptr)
//            cout << "No records!!!"<<endl;
//        else
//            display(root);
//    }
//
//    void displayInRange(int low, int high) {
//        displayInRange(root, low, high);
//    }
//
//    void search(int id) {
//        Node* res = search(root, id);
//        if (res)
//            cout << "Found: " << res->data.name << " (Performance: "
//            << res->data.performance << ")"<<endl;
//        else
//            cout << "Employee not found!!!"<<endl;
//    }
//
//    void countEmployees() {
//        cout << "Total Employees: " << count(root) << endl;
//    }
//
//    void findHighPerformers(int threshold) {
//        cout << "High performers (score >= " << threshold << "):"<<endl;
//        findHighPerformers(root, threshold);
//    }
//
//    void clear() {
//        clear(root);
//        cout << "All records cleared!"<<endl;
//    }
//};
//
//int main() {
//    AVLTree tree;
//    int choice;
//
//    do {
//        cout << "\n***** Employee Performance Tracker *****\n";
//        cout << "1. Register New Employee\n";
//        cout << "2. Remove Employee\n";
//        cout << "3. Search Employee\n";
//        cout << "4. Count Total Employees\n";
//        cout << "5. Display All Employees\n";
//        cout << "6. Display Employees in Range\n";
//        cout << "7. Find High Performance Employees\n";
//        cout << "8. Clear Records\n";
//        cout << "9. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            Employee e;
//            cout << "Enter ID: ";
//            cin >> e.id;
//            cout << "Enter Name: ";
//            cin.ignore();
//            getline(cin, e.name);
//            cout << "Enter Performance (0-100): ";
//            cin >> e.performance;
//            tree.insert(e);
//        }
//        else if (choice == 2) {
//            int id;
//            cout << "Enter Employee ID to remove: ";
//            cin >> id;
//            tree.remove(id);
//        }
//        else if (choice == 3) {
//            int id;
//            cout << "Enter Employee ID to search: ";
//            cin >> id;
//            tree.search(id);
//        }
//        else if (choice == 4) {
//            tree.countEmployees();
//        }
//        else if (choice == 5) {
//            tree.display();
//        }
//        else if (choice == 6) {
//            int low, high;
//            cout << "Enter ID range (low high): ";
//            cin >> low >> high;
//            tree.displayInRange(low, high);
//        }
//        else if (choice == 7) {
//            int threshold;
//            cout << "Enter performance threshold: ";
//            cin >> threshold;
//            tree.findHighPerformers(threshold);
//        }
//        else if (choice == 8) {
//            tree.clear();
//        }
//
//    } while (choice != 9);
//
//    cout << "Exiting program...\n";
//    return 0;
//}
