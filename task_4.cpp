//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//
//// Function to reverse first K elements of queue
//void reverseK(queue<int>& q, int k) {
//    if (q.empty() || k <= 0 || k > q.size()) {
//        cout << "Invalid value of K "<<endl;
//        return;
//    }
//
//    stack<int> st;
//
//    // Step 1: Push first K elements into stack
//    for (int i = 0; i < k; i++) {
//        st.push(q.front());
//        q.pop();
//    }
//
//    // Step 2: Pop from stack and push back into queue
//    while (!st.empty()) {
//        q.push(st.top());
//        st.pop();
//    }
//
//    // Step 3: Move remaining (n-k) elements to the back
//    int remaining = q.size() - k;
//    for (int i = 0; i < remaining; i++) {
//        q.push(q.front());
//        q.pop();
//    }
//}
//
//// Utility function to print queue
//void printQueue(queue<int> q) {
//    cout << "Queue: ";
//    while (!q.empty()) {
//        cout << q.front() << " ";
//        q.pop();
//    }
//    cout << endl;
//}
//
//int main() {
//    queue<int> q1;
//    q1.push(1);
//    q1.push(2);
//    q1.push(3);
//    q1.push(4);
//    q1.push(5);
//
//    cout << "Original ";
//    printQueue(q1);
//
//    reverseK(q1, 3);
//
//    cout << "After reversing first 3 elements ";
//    printQueue(q1);
//
//    queue<int> q2;
//    q2.push(10);
//    q2.push(20);
//    q2.push(30);
//    q2.push(40);
//    cout << endl;
//    cout << "Original ";
//    printQueue(q2);
//
//    reverseK(q2, 2); 
//
//    cout << "After reversing first 2 elements ";
//    printQueue(q2);
//
//    return 0;
//}
