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
//// Function to insert node in BST
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
//// Function to create mirror image of BST
//Node* mirrorBST(Node* root) {
//    if (root == NULL)
//        return NULL;
//    Node* newNode = new Node(root->data);
//
//    // Swap left and right recursively
//    newNode->left = mirrorBST(root->right);
//    newNode->right = mirrorBST(root->left);
//
//    return newNode;
//}
//
//// Function to check if two BSTs are similar
//bool areBSTsSimilar(Node* t1, Node* t2) {
//    if (t1 == NULL && t2 == NULL)
//        return true;
//    if (t1 == NULL || t2 == NULL)
//        return false;
//    if (t1->data != t2->data)
//        return false;
//
//    // Check both left and right subtrees
//    return areBSTsSimilar(t1->left, t2->left) && areBSTsSimilar(t1->right, t2->right);
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
//    root = insert(root, 5);
//    root = insert(root, 3);
//    root = insert(root, 8);
//    root = insert(root, 1);
//    root = insert(root, 4);
//    root = insert(root, 9);
//
//    cout << "Original BST (Inorder): ";
//    inorder(root);
//    cout << endl;
//
//    Node* mirror = mirrorBST(root);
//
//    cout << "Mirror BST (Inorder): ";
//    inorder(mirror);
//    cout << endl;
//
//    if (areBSTsSimilar(root, mirror))
//        cout << "Both BSTs are similar "<<endl;
//    else
//        cout << "Both BSTs are NOT similar "<<endl;
//
//    return 0;
//}
