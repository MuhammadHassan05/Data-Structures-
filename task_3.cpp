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
//
//        if (a.cgpa == b.cgpa) {           
//            return a.rollNo < b.rollNo;  
//        }
//
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
//    bool isEmpty() {
//        return currSize == 0;
//    }
//
//    bool isFull() {
//        return currSize == maxSize;
//    }
//
//    bool insert(int rollNo, double cgpa) {
//
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
//                Student temp = arr[i];
//                arr[i] = arr[parentIndex];
//                arr[parentIndex] = temp;
//
//                i = parentIndex;  
//            }
//            else {
//                break; 
//            }
//        }
//
//        return true;
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
//    StudentMaxHeap heap(5);
//
//    heap.insert(101, 3.5);
//    heap.insert(102, 3.7);
//    heap.insert(103, 3.7); 
//    heap.insert(104, 3.9);
//
//    cout << "Heap built successfully!\n";
//
//    heap.displayHeap();  
//
//    return 0;
//}
