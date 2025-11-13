//#include<iostream>
//using namespace std;
//
//template <typename T>
//class Node {
//private:
//    T object;
//    Node* nextnode;
//    Node* prevnode;
//public:
//    T get() {
//        return object;
//    }
//    void set(const T& obj) {
//        object = obj;
//    }
//    Node* getnext() {
//        return nextnode;
//    }
//    void setnext(Node* nextnode) {
//        this->nextnode = nextnode;
//    }
//    Node* getprev() {
//        return prevnode;
//    }
//    void setprev(Node* prevnode) {
//        this->prevnode = prevnode;
//    }
//    Node(const T& obj, Node* next = NULL, Node* prev = NULL) {
//        object = obj;
//        this->nextnode = next;
//        this->prevnode = prev;
//    }
//    Node() {
//        this->nextnode = NULL;
//        this->prevnode = NULL;
//    }
//};
//
//template <typename T>
//class List {
//private:
//    int size;
//    Node<T>* head;
//    Node<T>* tail;
//public:
//    List() {
//        size = 0;
//        head = tail = NULL;
//    }
//
//    void insertAtTail(const T& obj) {
//        Node<T>* newnode = new Node<T>(obj);
//        if (head == NULL) {
//            head = tail = newnode;
//        }
//        else {
//            tail->setnext(newnode);
//            newnode->setprev(tail);
//            tail = newnode;
//        }
//        size++;
//    }
//
//    bool positionHead(int pos) {
//        if (pos < 0 || pos >= size)
//            return false;
//        if (pos == 0)
//            return true;
//
//        Node<T>* current = head;
//        for (int i = 0; i < pos; i++) {
//            current = current->getnext();
//        }
//
//        Node<T>* newHead = current;
//        Node<T>* prevPart = current->getprev();
//
//        prevPart->setnext(NULL);
//        newHead->setprev(NULL);
//
//        tail->setnext(head);
//        head->setprev(tail);
//        head = newHead;
//        tail = prevPart;
//
//        return true;
//    }
//
//    void display() {
//        Node<T>* temp = head;
//        while (temp != NULL) {
//            cout << temp->get() << " ";
//            temp = temp->getnext();
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    List<int> list;
//    list.insertAtTail(11);
//    list.insertAtTail(3);
//    list.insertAtTail(8);
//    list.insertAtTail(2);
//    list.insertAtTail(1);
//
//    cout << "Before: ";
//    list.display();
//
//    list.positionHead(2);
//
//    cout << "After:  ";
//    list.display();
//
//    return 0;
//}
