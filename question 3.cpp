//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* prev;
//    Node* next;
//    Node(int val) {
//        data = val;
//        prev = next = NULL;
//    }
//};
//
//class DoublyList {
//public:
//    Node* head;
//    DoublyList() {
//        head = NULL;
//    }
//
//    void insertAtTail(int val) {
//        Node* newNode = new Node(val);
//        if (!head) {
//            head = newNode;
//            return;
//        }
//        Node* temp = head;
//        while (temp->next) 
//            temp = temp->next;
//        temp->next = newNode;
//        newNode->prev = temp;
//    }
//
//    void swap(Node* a, Node* b) {
//        if (!a || !b || a == b) 
//            return;
//
//        if (a->prev) 
//            a->prev->next = b;
//        else 
//            head = b;
//
//        if (b->prev)
//            b->prev->next = a;
//        else 
//            head = a;
//
//        if (a->next)
//            a->next->prev = b;
//
//        if (b->next)
//            b->next->prev = a;
//
//        Node* tempPrev = a->prev;
//        Node* tempNext = a->next;
//
//        a->prev = b->prev;
//        a->next = b->next;
//
//        b->prev = tempPrev;
//        b->next = tempNext;
//    }
//
//    void display() {
//        Node* temp = head;
//        while (temp) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    DoublyList list;
//    int arr[] = { 3, 1, 8, 5, 4, 2, 9, 6, 7, 0 };
//    for (int i = 0; i < 10; i++) list.insertAtTail(arr[i]);
//    cout << "Before: ";
//    list.display();
//    Node* a = list.head->next;              
//    Node* b = list.head->next->next->next->next->next->next->next; 
//    list.swap(a, b);
//    cout << "After swapping 1 and 6: ";
//    list.display();
//
//    return 0;
//}
