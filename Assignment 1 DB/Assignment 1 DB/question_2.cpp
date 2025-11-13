//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node* prev;
//    Node(int val) {
//        data = val;
//        next = prev = NULL;
//    }
//};
//
//class DLLList {
//private:
//    Node* head;
//    Node* tail;
//public:
//    DLLList() {
//        head = tail = NULL;
//    }
//
//    void insertStart(int val) {
//        Node* newNode = new Node(val);
//        if (!head) {
//            head = tail = newNode;
//        }
//        else {
//            newNode->next = head;
//            head->prev = newNode;
//            head = newNode;
//        }
//    }
//
//    bool RemoveSubList(DLLList& pattern) {
//        if (!pattern.head) 
//            return false;
//
//        Node* start = head;
//
//        while (start) {
//            Node* temp1 = start;
//            Node* temp2 = pattern.head;
//
//            while (temp1 && temp2 && temp1->data == temp2->data) {
//                temp1 = temp1->next;
//                temp2 = temp2->next;
//            }
//
//            if (!temp2) {
//                Node* before = start->prev;
//                Node* after = temp1;
//
//                if (before)
//                    before->next = after;
//                else
//                    head = after;  
//                if (after)
//                    after->prev = before;
//                else
//                    tail = before; 
//
//                return true;
//            }
//
//            start = start->next;
//        }
//        return false;
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
//    DLLList DLL2, DLL1;
//    DLL2.insertStart(8);
//    DLL2.insertStart(7);
//    DLL2.insertStart(6);
//    DLL2.insertStart(5);
//    DLL2.insertStart(3);
//    DLL2.insertStart(3);
//    DLL2.insertStart(3);
//    DLL2.insertStart(2);
//
//    DLL1.insertStart(7);
//    DLL1.insertStart(6);
//
//    cout << "Before: ";
//    DLL2.display();
//    if (DLL2.RemoveSubList(DLL1))
//        cout << "After removing sublist: ";
//    else
//        cout << "Sublist not found, list remains: ";
//
//    DLL2.display();
//
//    return 0;
//}
