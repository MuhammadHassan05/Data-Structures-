//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int val) {
//        data = val;
//        left = right = NULL;
//    }
//};
//
//// Function to insert a new node in BST
//Node* insert(Node* root, int val) {
//    if (root == NULL)
//        return new Node(val);
//
//    if (val < root->data)
//        root->left = insert(root->left, val);
//    else
//        root->right = insert(root->right, val);
//
//    return root;
//}
//
//// Function to trim the BST so that all nodes lie within [low, high]
//Node* trimBST(Node* root, int low, int high) {
//    if (root == NULL)
//        return NULL;
//
//    // If current node is smaller than low, trim the left subtree
//    if (root->data < low)
//        return trimBST(root->right, low, high);
//
//    // If current node is greater than high, trim the right subtree
//    if (root->data > high)
//        return trimBST(root->left, low, high);
//
//    // Otherwise!!! fix both subtrres
//    root->left = trimBST(root->left, low, high);
//    root->right = trimBST(root->right, low, high);
//    return root;
//}
//
//// Inorder traversal 
//void inorder(Node* root) {
//    if (root == NULL)
//        return;
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//int main() {
//    Node* root = NULL;
//    root = insert(root, 3);
//    root = insert(root, 0);
//    root = insert(root, 2);
//    root = insert(root, 1);
//    root = insert(root, 4);
//
//    int low = 1, high = 3;
//
//    cout << "Original BST (Inorder): ";
//    inorder(root);
//    cout << endl;
//
//    root = trimBST(root, low, high);
//
//    cout << "Trimmed BST (Inorder): ";
//    inorder(root);
//    cout << endl;
//
//    return 0;
//}
