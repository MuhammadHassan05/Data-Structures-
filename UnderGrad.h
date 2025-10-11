//#ifndef UNDERGRAD_H
//#define UNDERGRAD_H
//
//#include "Student.h"
//class UnderGrad : public Student {
//private:
//	string FYP_name;
//public:
//	UnderGrad(string FN = " ", string LN = " ", int age = 0, double cgpa = 0.0, string fyp = " ") :Student(FN, LN, age, cgpa), FYP_name(fyp) {
//		cout << "UnderGrad() construcror called " << endl;
//	}
//	~UnderGrad() {
//		cout << "UnderGrad() destructor called " << endl;
//	}
//	void Display_UnderGrad() {
//		Display_Student();
//		cout << "FYP name = " << FYP_name << endl;
//		cout << "****" << endl;
//	}
//	string getFypName() const { 
//		return FYP_name; 
//	}
//	void setFypName(const string& fyp) { 
//		FYP_name = fyp; 
//	}
//};
//#endif