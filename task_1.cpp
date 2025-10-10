//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Node {
//public:
//    T get() { return object; }
//    void set(T object) { this->object = object; }
//    Node* getNext() { return nextNode; }
//    void setNext(Node* nextNode) { this->nextNode = nextNode; }
//
//private:
//    T object;
//    Node* nextNode;
//};
//
//template <typename T>
//class Stack {
//private:
//    Node<T>* top;   // points to top of stack
//    int size;       
//    int maxSize;    
//
//public:
//    Stack() {
//        top = NULL;
//        size = 0;
//        maxSize = 10;
//    }
//    Stack(int size) {
//        top = NULL;
//        this->size = 0;
//        maxSize = size;
//    }
//
//    // Push an element
//    bool Push(const T& val) {
//        if (IsFull()) {
//            cout << "Stack Overflow! Cannot push " << val << endl;
//            return false;
//        }
//
//        Node<T>* newNode = new Node<T>();
//        newNode->set(val);
//        newNode->setNext(top);
//        top = newNode;
//        size++;
//        return true;
//    }
//
//    // Pop an element
//    bool Pop(T& removedVal) {
//        if (IsEmpty()) {
//            cout << "Stack Underflow! Cannot pop." << endl;
//            return false;
//        }
//
//        removedVal = top->get();
//        Node<T>* temp = top;
//        top = top->getNext();
//        delete temp;
//        size--;
//        return true;
//    }
//
//    // Return top element (without removing)
//    bool Top(T& val) {
//        if (IsEmpty()) {
//            cout << "Stack is empty! No top element " << endl;
//            return false;
//        }
//        val = top->get();
//        return true;
//    }
//
//    bool IsEmpty() {
//        return (top == NULL);
//    }
//
//    bool IsFull() {
//        return (size >= maxSize);
//    }
//    ~Stack() {
//        Node<T>* temp;
//        while (top != NULL) {
//            temp = top;
//            top = top->getNext();
//            delete temp;
//        }
//    }
//};
//
//int main() {
//    Stack<int> s(5); 
//    s.Push(10);
//    s.Push(20);
//    s.Push(30);
//
//    int val;
//    if (s.Top(val))
//        cout << "Top element: " << val << endl;
//
//    while (!s.IsEmpty()) {
//        if (s.Pop(val))
//            cout << "Popped element: " << val << endl;
//    }
//
//    s.Pop(val); // test underflow
//    return 0;
//}
