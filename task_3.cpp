//#include <iostream>
//using namespace std;
//
//class Deque {
//private:
//    int* arr;
//    int front;
//    int rear;
//    int capacity;
//    int size;
//
//public:
//    Deque(int cap) {
//        capacity = cap;
//        arr = new int[capacity];
//        front = -1;
//        rear = 0;
//        size = 0;
//    }
//
//    bool isFull() {
//        return (size == capacity);
//    }
//
//    bool isEmpty() {
//        return (size == 0);
//    }
//
//    void push(int x) {
//        if (isFull()) {
//            cout << "Deque is full. Cannot push " << x << endl;
//            return;
//        }
//        if (front == -1) {
//            front = 0;
//            rear = 0;
//        }
//        else {
//            front = (front - 1 + capacity) % capacity;
//        }
//        arr[front] = x;
//        size++;
//        cout << x << " pushed at front " << endl;
//    }
//
//    int pop() {
//        if (isEmpty()) {
//            cout << "Deque is empty. Cannot pop " << endl;
//            return -1;
//        }
//        int value = arr[front];
//        front = (front + 1) % capacity;
//        size--;
//        if (size == 0) { 
//            front = -1;
//            rear = 0;
//        }
//        cout << value << " popped from front " << endl;
//        return value;
//    }
//
//    void inject(int x) {
//        if (isFull()) {
//            cout << "Deque is full. Cannot inject " << x << endl;
//            return;
//        }
//        if (front == -1) {
//            front = 0;
//            rear = 0;
//        }
//        else {
//            rear = (rear + 1) % capacity;
//        }
//        arr[rear] = x;
//        size++;
//        cout << x << " injected at rear " << endl;
//    }
//
//    int eject() {
//        if (isEmpty()) {
//            cout << "Deque is empty. Cannot eject " << endl;
//            return -1;
//        }
//        int value = arr[rear];
//        rear = (rear - 1 + capacity) % capacity;
//        size--;
//        if (size == 0) { 
//            front = -1;
//            rear = 0;
//        }
//        cout << value << " ejected from rear " << endl;
//        return value;
//    }
//
//    void printDeque() {
//        if (isEmpty()) {
//            cout << "Deque is empty " << endl;
//            return;
//        }
//        cout << "Deque elements: ";
//        int index = front;
//        for (int i = 0; i < size; i++) {
//            cout << arr[index] << " ";
//            index = (index + 1) % capacity;
//        }
//        cout << endl;
//    }
//};
// 
//int main() {
//    Deque dq(5);
//
//    dq.push(10);
//    dq.inject(20);
//    dq.inject(30);
//    dq.printDeque();
//
//    dq.pop();
//    dq.printDeque();
//
//    dq.push(40);
//    dq.inject(50);
//    dq.printDeque();
//
//    dq.eject();
//    dq.printDeque();
//
//    return 0;
//}
