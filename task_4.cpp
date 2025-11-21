//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    int rollNo;
//    double cgpa;
//};
//
//class StudentMaxHeap {
//private:
//    Student* arr;         
//    int currSize;         
//    int maxSize;          
//
//    bool isHigherPriority(Student a, Student b) {
//        if (a.cgpa > b.cgpa)
//            return true;
//        if (a.cgpa == b.cgpa)
//            return a.rollNo < b.rollNo;
//        return false;
//    }
//
//public:
//    StudentMaxHeap(int size) {
//        maxSize = size;
//        currSize = 0;
//        arr = new Student[maxSize];
//    }
//
//    ~StudentMaxHeap() {
//        delete[] arr;
//    }
//
//    bool isEmpty() { return currSize == 0; }
//    bool isFull() { return currSize == maxSize; }
//
//    bool insert(int rollNo, double cgpa) {
//        if (isFull()) {
//            cout << "Heap is full! Cannot insert.\n";
//            return false;
//        }
//
//        Student newStudent;
//        newStudent.rollNo = rollNo;
//        newStudent.cgpa = cgpa;
//
//        int i = currSize;       
//        arr[i] = newStudent;
//        currSize++;
//
//        while (i > 0) {
//            int parentIndex = (i - 1) / 2;
//
//            if (isHigherPriority(arr[i], arr[parentIndex])) {
//                swap(arr[i], arr[parentIndex]);
//                i = parentIndex;
//            }
//            else break;
//        }
//
//        return true;
//    }
//
//    void heapify(int i) {
//        int largest = i;
//        int left = 2 * i + 1;
//        int right = 2 * i + 2;
//
//        // check left child
//        if (left < currSize && isHigherPriority(arr[left], arr[largest]))
//            largest = left;
//
//        // check right child
//        if (right < currSize && isHigherPriority(arr[right], arr[largest]))
//            largest = right;
//
//        // If largest is not root, swap & continue heapifying
//        if (largest != i) {
//            swap(arr[i], arr[largest]);
//            heapify(largest);  
//        }
//    }
//
//    void buildHeap(Student* st, int n) {
//        currSize = n;
//
//        for (int i = 0; i < n; i++) {
//            arr[i] = st[i];
//        }
//
//        for (int i = (n / 2) - 1; i >= 0; i--) {
//            heapify(i);
//        }
//    }
//
//    void displayHeap() {
//        cout << "\nCurrent Heap:\n";
//        for (int i = 0; i < currSize; i++) {
//            cout << "Roll No: " << arr[i].rollNo
//                << " | CGPA: " << arr[i].cgpa << endl;
//        }
//    }
//};
//
//int main() {
//
//    Student inputArr[5] = {
//        {101, 3.5},
//        {102, 3.7},
//        {103, 3.7},
//        {104, 3.9},
//        {105, 3.1}
//    };
//
//    StudentMaxHeap heap(5);
//    heap.buildHeap(inputArr, 5);
//    cout << "Max-Heap built using buildHeap()!\n";
//    heap.displayHeap();
//    cout << "\nInserting more items:\n";
//    heap.insert(110, 3.95);
//    heap.insert(111, 3.80);
//
//    heap.displayHeap();
//
//    return 0;
//}
