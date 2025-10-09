//#include<iostream>
//using namespace std;
//
//class circularqueue {
//private:
//    int* arr;
//    int front;
//    int rear;
//    int capacity;
//    int currentsize;
//
//public:
//    circularqueue(int size) {
//        capacity = size;
//        arr = new int[capacity];
//        front = 0;
//        rear = -1;
//        currentsize = 0;
//    }
//
//    bool isfull() {
//        return (currentsize == capacity);
//    }
//
//    bool isempty() {
//        return (currentsize == 0);
//    }
//
//    void enqueue(int value) {
//        if (isfull()) {
//            cout << "Queue is full. Cannot enqueue " << value << endl;
//            return;
//        }
//        rear = (rear + 1) % capacity; 
//        arr[rear] = value;
//        currentsize++;
//        cout << value << " enqueued." << endl;
//    }
//
//    void dequeue() {
//        if (isempty()) {
//            cout << "Queue is empty. Cannot dequeue" << endl;
//            return;
//        }
//        cout << arr[front] << " dequeued" << endl;
//        front = (front + 1) % capacity; 
//        currentsize--;
//    }
//
//    void printQueue() {
//        if (isempty()) {
//            cout << "Queue is empty" << endl;
//            return;
//        }
//        cout << "Queue elements: ";
//        int index = front;
//        for (int i = 0; i < currentsize; i++) {
//            cout << arr[index] << " ";
//            index = (index + 1) % capacity;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    circularqueue q(5); 
//
//    q.enqueue(10);
//    q.enqueue(20);
//    q.enqueue(30);
//    q.printQueue();
//
//    q.dequeue();
//    q.printQueue();
//
//    q.enqueue(40);
//    q.enqueue(50);
//    q.enqueue(60);
//    q.printQueue();
//
//    q.dequeue();
//    q.printQueue();
//
//    return 0;
//}
