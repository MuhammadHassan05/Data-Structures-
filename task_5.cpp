//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Queue {
//private:
//    stack<int> s1, s2;
//
//public:
//    // Enqueue (Insert element)
//    void enqueue(int x) {
//        s1.push(x);
//    }
//
//    // Dequeue (Remove element)
//    int dequeue() {
//        if (s1.empty() && s2.empty()) {
//            cout << "Queue is empty!\n";
//            return -1;
//        }
//
//        // Move elements to s2 if s2 is empty
//        if (s2.empty()) {
//            while (!s1.empty()) {
//                s2.push(s1.top());
//                s1.pop();
//            }
//        }
//
//        int val = s2.top();
//        s2.pop();
//        return val;
//    }
//
//    // Check if queue is empty
//    bool isEmpty() {
//        return s1.empty() && s2.empty();
//    }
//};
//
//int main() {
//    Queue q;
//    q.enqueue(10);
//    q.enqueue(20);
//    q.enqueue(30);
//
//    cout << "Dequeued: " << q.dequeue() << endl; // 10
//    cout << "Dequeued: " << q.dequeue() << endl; // 20
//
//    q.enqueue(40);
//    cout << "Dequeued: " << q.dequeue() << endl; // 30
//    cout << "Dequeued: " << q.dequeue() << endl; // 40
//
//    q.dequeue(); // empty case
//    return 0;
//}
