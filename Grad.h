//#ifndef GRAD_H
//#define GRAD_H
//
//#include "Student.h"
//class Grad : public Student {
//private:
//	string Thesis_name;
//public:
//	Grad(string FN = " ", string LN = " ", int age = 0, double cgpa = 0.0, string thesis = " ") :Student(FN, LN, age, cgpa), Thesis_name(thesis) {
//		cout << "Grad() construcror called " << endl;
//	}
//	~Grad() {
//		cout << "Grad() destructor called " << endl;
//	}
//	void Display_Grad() {
//		Display_Student();
//		cout << "Thesis name = " << Thesis_name << endl;
//		cout << "****" << endl;
//	}
//	string getThesisName() const {
//		return Thesis_name; 
//	}
//	void setThesisName(const string& thesis) {
//		Thesis_name = thesis;
//	}
//};
//#endif