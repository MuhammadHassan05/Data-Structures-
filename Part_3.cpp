//// =============================================
//// QUESTION 3 – DHashMap (Double Hashing)
//// =============================================
//#include <iostream>
//using namespace std;
//
//template <class v>
//struct HashItem {
//    int key;
//    v value;
//    short status;
//    HashItem() { status = 0; }
//};
//
//template <class v>
//class HashMap {
//protected:
//    HashItem<v>* hashArray;
//    int capacity;
//
//    virtual int getNextCandidateIndex(int key, int i) {
//        return (key % capacity + i) % capacity;
//    }
//
//public:
//    HashMap() {
//        capacity = 10;
//        hashArray = new HashItem<v>[capacity];
//    }
//
//    void insert(int key, v value) {
//        int index = key % capacity;
//        int i = 1;
//
//        while (hashArray[index].status == 2) {
//            index = getNextCandidateIndex(key, i);
//            i++;
//        }
//
//        hashArray[index].key = key;
//        hashArray[index].value = value;
//        hashArray[index].status = 2;
//    }
//
//    v* get(int key) {
//        int index = key % capacity;
//        int i = 1;
//
//        while (hashArray[index].status != 0) {
//            if (hashArray[index].status == 2 && hashArray[index].key == key)
//                return &hashArray[index].value;
//            index = getNextCandidateIndex(key, i);
//            i++;
//        }
//        return nullptr;
//    }
//};
//
//template <class v>
//class DHashMap : public HashMap<v> {
//protected:
//
//    int getNextCandidateIndex(int key, int i) override {
//        int prime = 7;
//        int first = key % this->capacity;
//        int second = (prime - (key % prime));
//        return (first + i * second) % this->capacity;
//    }
//};
//
//int main() {
//    DHashMap<string> d;
//
//    d.insert(5, "Hello");
//    d.insert(15, "World");
//
//    cout << *d.get(5) << endl;
//    cout << *d.get(15) << endl;
//}
//
//
//
//
