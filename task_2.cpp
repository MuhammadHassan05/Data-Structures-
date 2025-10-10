//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Stack {
//private:
//    T* arr;       // array to hold stack elements
//    int top;      
//    int maxSize;  
//
//public:
//    Stack() {
//        maxSize = 10;
//        arr = new T[maxSize];
//        top = -1;
//    }
//
//    Stack(int size) {
//        maxSize = size;
//        arr = new T[maxSize];
//        top = -1;
//    }
//
//    // Push function
//    bool Push(T val) {
//        if (IsFull()) {
//            cout << "Stack Overflow! Cannot push " << val << endl;
//            return false;
//        }
//        arr[++top] = val;
//        return true;
//    }
//
//    // Pop function
//    bool Pop(T& val) {
//        if (IsEmpty()) {
//            cout << "Stack Underflow! Cannot pop." << endl;
//            return false;
//        }
//        val = arr[top--];
//        return true;
//    }
//
//    // Top function
//    bool Top(T& val) {
//        if (IsEmpty()) {
//            cout << "Stack is empty! No top element." << endl;
//            return false;
//        }
//        val = arr[top];
//        return true;
//    }
//
//    // IsEmpty function
//    bool IsEmpty() {
//        return (top == -1);
//    }
//
//    // IsFull function
//    bool IsFull() {
//        return (top == maxSize - 1);
//    }
//
//    // Destructor
//    ~Stack() {
//        delete[] arr;
//    }
//};
//
//int main() {
//    Stack<int> s(5);  // stack of size 5
//
//    s.Push(10);
//    s.Push(20);
//    s.Push(30);
//
//    int x;
//    if (s.Top(x))
//        cout << "Top element: " << x << endl;
//
//    while (!s.IsEmpty()) {
//        if (s.Pop(x))
//            cout << "Popped: " << x << endl;
//    }
//
//    s.Pop(x); 
//    return 0;
//}
