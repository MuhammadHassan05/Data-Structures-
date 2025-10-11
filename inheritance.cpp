//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//private:
//    string First_name, Last_name;
//protected:
//    int Age;
//public:
//    Person(string FN = " ", string LN = " ", int age = 0) : First_name(FN), Last_name(LN), Age(age) {
//        cout << "Person() constructor called" << endl;
//    }
//    ~Person() {
//        cout << "Person() destructor called" << endl;
//    }
//    void Display_Person() {
//        cout << "Name = " << First_name << " " << Last_name << endl;
//        cout << "Age = " << Age << endl;
//    }
//};
//
//class Student : public Person {
//private:
//    double Cgpa;
//public:
//    Student(string FN = " ", string LN = " ", int age = 0, double cgpa = 0.0) : Person(FN, LN, age), Cgpa(cgpa) {
//        cout << "Student() constructor called" << endl;
//    }
//    ~Student() {
//        cout << "Student() destructor called" << endl;
//    }
//    void Display_Student() {
//        Display_Person();
//        cout << "Cgpa = " << Cgpa << endl;
//    }
//};
//
//class Faculty : public Person {
//private:
//    int Course_count;
//    int Ext_number;
//public:
//    Faculty(string FN = " ", string LN = " ", int age = 0, int cc = 0, int en = 0) : Person(FN, LN, age), Course_count(cc), Ext_number(en) {
//        cout << "Faculty() constructor called" << endl;
//    }
//    ~Faculty() {
//        cout << "Faculty() destructor called" << endl;
//    }
//    void Display_Faculty() {
//        Display_Person();
//        cout << "Total number = " << Course_count << endl;
//        cout << "Extension number = " << Ext_number << endl;
//        cout << "****" << endl;
//    }
//};
//
//class UnderGrad : public Student {
//private:
//    string FYP_name;
//public:
//    UnderGrad(string FN = " ", string LN = " ", int age = 0, double cgpa = 0.0, string fyp = " ") : Student(FN, LN, age, cgpa), FYP_name(fyp) {
//        cout << "UnderGrad() constructor called" << endl;
//    }
//    ~UnderGrad() {
//        cout << "UnderGrad() destructor called" << endl;
//    }
//    void Display_UnderGrad() {
//        Display_Student();
//        cout << "FYP name = " << FYP_name << endl;
//        cout << "****" << endl;
//    }
//};
//
//int main() {
//    cout << "****University Portal****" << endl;
//
//    UnderGrad UG("Ted", "Thompson", 22, 3.91, "AI-Based Tutoring");
//    Faculty F("Richard", "Karp", 45, 2, 420);
//
//    UG.Display_UnderGrad();
//    F.Display_Faculty();
//
//    return 0;
//}