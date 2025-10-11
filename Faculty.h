//#pragma once
//#ifndef FACULTY_H
//#define FACULTY_H
//
//#include "Person.h"
//class Faculty : public Person {
//private:
//	int Course_count;
//	int Ext_number;
//public:
//	Faculty(string FN = " ", string LN = " ", int age = 0, int cc = 0, int en = 0) :Person(FN, LN, age), Course_count(cc), Ext_number(en) {
//		cout << "Faculty() construcror called " << endl;
//	}
//	~Faculty() {
//		cout << "Faculty() destructor called " << endl;
//	}
//	void Display_Faculty() {
//		Display_Person();
//		cout << "Total number = " << Course_count << endl;
//		cout << "Extension number = " << Ext_number << endl;
//		cout << "****" << endl;a
//	}
//	int getCourseCount() const {
//		return Course_count;
//	}
//	int getExtNumber() const {
//		return Ext_number;
//	}
//	void setCourseCount(int cc) {
//		Course_count = cc; 
//	}
//	void setExtNumber(int en) {
//		Ext_number = en;
//	}
//};
//#endif