//#pragma once
//#ifndef PERSON_H
//#define PERSON_H
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//private:
//	string First_name, Last_name;
//protected:
//	int Age;
//public:
//	Person(string FN = " ", string LN = " ", int age = 0) :First_name(FN), Last_name(LN), Age(age) {
//		cout << "Person() construcror called " << endl;
//	}
//
//	~Person() {
//		cout << "Person() destructor called " << endl;
//	}
//
//	void Display_Person() {
//		cout << "Name = " << First_name << " " << Last_name << endl;
//		cout << "Age = " << Age << endl;
//	}
//
//	string getFirstName() const { 
//		return First_name;
//	}
//	string getLastName() const { 
//		return Last_name; 
//	}
//	int getAge() const {
//		return Age; 
//	}
//
//	void setFirstName(const string& FN) { 
//		First_name = FN;
//	}
//	void setLastName(const string& LN) {
//		Last_name = LN; 
//	}
//	void setAge(int age) {
//		Age = age;
//	}
//};
// 
//#endif