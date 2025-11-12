//////////******Question no 1******
//////#include<iostream>
//////#include<cmath>
//////using namespace std;
//////class VectorType {
//////private:
//////	//necessary variables of pointers type
//////	double* x;
//////	double* y;
//////	double* z;
//////public:
//////	VectorType() {
//////		x = new double(0);
//////		y = new double(0);
//////		z = new double(0);
//////	}
//////	VectorType(double a, double b, double c) {
//////		x = new double(a);
//////		y = new double(b);
//////		z = new double(c);
//////	}
//////	VectorType(const VectorType& copy) {
//////		x = new double(*copy.x);
//////		y = new double(*copy.y);
//////		z = new double(*copy.z);
//////	}
//////	~VectorType() {
//////		delete x;
//////		delete y;
//////		delete z;
//////	}
//////
//////	VectorType& operator=(const VectorType& other) {
//////		if (this != &other)
//////		{
//////			delete x;
//////			delete y;
//////			delete z;
//////			x = new double(*other.x);
//////			y = new double(*other.y);
//////			z = new double(*other.z);
//////		}
//////		return *this;
//////	}
//////	double length() {
//////		double sum = (*x) * (*x) + (*y) * (*y) + (*z) * (*z);
//////		return sqrt(sum);
//////	}
//////	double operator*(const VectorType& other) {
//////		return (*x * *other.x) + (*y * *other.y) + (*z * *z);
//////	}
//////	VectorType operator+(const VectorType& other) {
//////		return VectorType((*x + *other.x), (*y + *other.y), (*z + *other.z));
//////	}
//////	VectorType operator-(const VectorType& other) {
//////		return VectorType((*x - *other.x), (*y - *other.y), (*z - *other.z));
//////	}
//////	double getX() const {
//////		return *x;
//////	}
//////	double getY() const {
//////		return *y;
//////	}
//////	double getZ() const {
//////		return *z;
//////	}
//////
//////	VectorType& operator++() {
//////		(*x)++;
//////		(*y)++;
//////		(*z)++;
//////		return *this;
//////	}
//////	VectorType operator++(int) {
//////		VectorType temp = *this;
//////		(*x)++;
//////		(*y)++;
//////		(*z)++;
//////		return temp;
//////	}
//////	VectorType& operator--() {
//////		(*x)--;
//////		(*y)--;
//////		(*z)--;
//////		return *this;
//////	}
//////	VectorType operator--(int) {
//////		VectorType temp = *this;
//////		(*x)--;
//////		(*y)--;
//////		(*z)--;
//////		return temp;
//////	}
//////	friend bool operator==(const VectorType& a, const VectorType& b);
//////	friend bool operator!=(const VectorType& a, const VectorType& b);
//////	friend ostream& operator<<(ostream& out, const VectorType& v);
//////	friend istream& operator>>(istream& in, VectorType& v);
//////
//////};
//////
//////bool operator==(const VectorType& a, const VectorType& b) {
//////	return (*a.x == *b.x) && (*a.y == *b.y) && (*a.z == *b.z);
//////}
//////
//////bool operator!=(const VectorType& a, const VectorType& b) {
//////	return !((*a.x == *b.x) && (*a.y == *b.y) && (*a.z == *b.z));
//////}
//////
//////ostream& operator<<(ostream& out, const VectorType& other) {
//////	out << "(" << *other.x << ", " << *other.y << ", " << *other.z << ")";
//////	return out;
//////}
//////
//////istream& operator>>(istream& in, VectorType& other) {
//////	double a, b, c;
//////	in >> a >> b >> c;
//////	*(other.x) = a;
//////	*(other.y) = b;
//////	*(other.z) = c;
//////	return in;
//////}
//////
//////int main() {
//////	VectorType U(1.0 , 4.0 ,4.0);
//////	VectorType V(2.0, 4.0, 4.0);
//////
//////	//VectorType V = U;
//////
//////	double result = U * V;
//////	cout << " the dot product of U * V is " << result << endl;
//////
//////	cout << "length of the vector U = " << U.length() << endl;
//////	cout << "length of the vector V = " << V.length() << endl;
//////
//////	VectorType sum = U + V;
//////	VectorType diff = U - V;
//////	cout << "the sum of U and V = " << sum.getX() << " , " << sum.getY() << " , " << sum.getZ() << endl;
//////	cout << "the difference of U and V = " << diff.getX() << " , " << diff.getY() << " , " << diff.getZ() << endl;
//////
//////	cout << "Before increment: U = " << U.getX() << " , " << U.getY() << " , " << U.getZ() << endl;
//////	++U;
//////	cout << "After pre-increment (++U): U = " << U.getX() << " , " << U.getY() << " , " << U.getZ() << endl;
//////	U++;
//////	cout << "After post-increment (U++): U = " << U.getX() << " , " << U.getY() << " , " << U.getZ() << endl;
//////	--U;
//////	cout << "After pre-decrement (--U): U = " << U.getX() << " , " << U.getY() << " , " << U.getZ() << endl;
//////	U--;
//////	cout << "After post-decrement (U--): U = " << U.getX() << " , " << U.getY() << " , " << U.getZ() << endl;
//////
//////	cout << "Testing comparison "<<endl;
//////	if (U == V)
//////		cout << "U and V are equal "<<endl;
//////	else
//////		cout << "U and V are not equal"<<endl;
//////
//////	cout << "Vector U = " << U << endl;
//////	cout << "Vector V = " << V << endl;
//////
//////	cout << "Enter new vector W = "<<endl;
//////	VectorType W;
//////	cin >> W;
//////
//////	cout << "You entered W = " << W << endl;
//////
//////	if (W != U)
//////		cout << "W is different from U "<<endl;
//////	else
//////		cout << "W is equal to U "<<endl;
//////
//////	return 0;
//////};
//////////******Question no 3******
////#include <iostream>
////#include <cstring>
////using namespace std;
////
////class RomanNumeralSystem {
////private:
////    char* numeral;
////    int maxLength;
////
////    // Values and symbols 
////    const int numbers[13] = { 1000, 900, 500, 400, 100, 90,  50,  40, 10,   9,   5,   4,   1 };
////    const char* letters[13] = { "M",  "CM","D", "CD", "C","XC","L", "XL","X", "IX","V", "IV","I" };
////
////    // Convert symbol to integer 
////    int valueOf(char ch) const {
////        switch (ch) {
////        case 'I':
////            return 1;
////        case 'V': 
////            return 5;
////        case 'X':
////            return 10;
////        case 'L': 
////            return 50;
////        case 'C': 
////            return 100;
////        case 'D': 
////            return 500;
////        case 'M': 
////            return 1000;
////        }
////        return 0;
////    }
////
////    // Convert Roman string to integer
////    int convertToInteger() const {
////        int total = 0;
////        int i = 0;
////        while (numeral[i] != '\0') {
////            int val1 = valueOf(numeral[i]);
////            int val2 = valueOf(numeral[i + 1]);
////            if (val2 > val1) {
////                total += (val2 - val1);
////                i += 2;
////            }
////            else {
////                total += val1;
////                i++;
////            }
////        }
////        return total;
////    }
////
////    // Convert integer to Roman string
////    char* convertToRoman(int val) const {
////        char* temp = new char[maxLength];
////        int idx = 0;
////        for (int i = 0; i < 13; ++i) {
////            while (val >= numbers[i]) {
////                const char* sym = letters[i];
////                for (int j = 0; sym[j] != '\0'; ++j) {
////                    temp[idx++] = sym[j];
////                }
////                val -= numbers[i];
////            }
////        }
////        temp[idx] = '\0';
////        return temp;
////    }
////
////public:
////    // Constructors
////    RomanNumeralSystem() {
////        maxLength = 25;
////        numeral = new char[1];
////        numeral[0] = '\0';
////    }
////
////    RomanNumeralSystem(const char* input) {
////        maxLength = 25;
////        numeral = new char[maxLength];
////        int i = 0;
////        while (input[i] != '\0') {
////            numeral[i] = input[i];
////            i++;
////        }
////        numeral[i] = '\0';
////    }
////
////    RomanNumeralSystem(const RomanNumeralSystem& original) {
////        maxLength = 25;
////        numeral = new char[maxLength];
////        int i = 0;
////        while (original.numeral[i] != '\0') {
////            numeral[i] = original.numeral[i];
////            i++;
////        }
////        numeral[i] = '\0';
////    }
////
////    // Arithmetic operators
////    RomanNumeralSystem operator+(const RomanNumeralSystem& other) {
////        int total = this->convertToInteger() + other.convertToInteger();
////        char* result = convertToRoman(total);
////        RomanNumeralSystem res(result);
////        delete[] result;
////        return res;
////    }
////
////    RomanNumeralSystem operator-(const RomanNumeralSystem& other) {
////        int diff = this->convertToInteger() - other.convertToInteger();
////        if (diff < 0) diff = -diff;
////        char* result = convertToRoman(diff);
////        RomanNumeralSystem res(result);
////        delete[] result;
////        return res;
////    }
////
////    RomanNumeralSystem operator*(const RomanNumeralSystem& other) {
////        int prod = this->convertToInteger() * other.convertToInteger();
////        char* result = convertToRoman(prod);
////        RomanNumeralSystem res(result);
////        delete[] result;
////        return res;
////    }
////
////    RomanNumeralSystem operator/(const RomanNumeralSystem& other) {
////        int quotient = this->convertToInteger() / other.convertToInteger();
////        char* result = convertToRoman(quotient);
////        RomanNumeralSystem res(result);
////        delete[] result;
////        return res;
////    }
////
////    // Increment and Decrement
////    RomanNumeralSystem& operator++() {
////        int val = convertToInteger();
////        val++;
////        char* updated = convertToRoman(val);
////        delete[] numeral;
////        numeral = new char[maxLength];
////        int i = 0;
////        while (updated[i] != '\0') {
////            numeral[i] = updated[i];
////            i++;
////        }
////        numeral[i] = '\0';
////        delete[] updated;
////        return *this;
////    }
////
////    RomanNumeralSystem operator++(int) {
////        RomanNumeralSystem prev(*this);
////        ++(*this);
////        return prev;
////    }
////
////    RomanNumeralSystem& operator--() {
////        int val = convertToInteger();
////        if (val > 1) val--;
////        char* updated = convertToRoman(val);
////        delete[] numeral;
////        numeral = new char[maxLength];
////        int i = 0;
////        while (updated[i] != '\0') {
////            numeral[i] = updated[i];
////            i++;
////        }
////        numeral[i] = '\0';
////        delete[] updated;
////        return *this;
////    }
////
////    RomanNumeralSystem operator--(int) {
////        RomanNumeralSystem prev(*this);
////        --(*this);
////        return prev;
////    }
////
////    // Comparison operators
////    friend bool operator==(const RomanNumeralSystem& a, const RomanNumeralSystem& b) {
////        return a.convertToInteger() == b.convertToInteger();
////    }
////
////    friend bool operator!=(const RomanNumeralSystem& a, const RomanNumeralSystem& b) {
////        return a.convertToInteger() != b.convertToInteger();
////    }
////
////    friend bool operator<(const RomanNumeralSystem& a, const RomanNumeralSystem& b) {
////        return a.convertToInteger() < b.convertToInteger();
////    }
////
////    friend bool operator>(const RomanNumeralSystem& a, const RomanNumeralSystem& b) {
////        return a.convertToInteger() > b.convertToInteger();
////    }
////
////    // display
////    void show() const {
////        cout << "Roman: " << numeral << "\n";
////    }
////};
////
////int main() {
////    RomanNumeralSystem num1("X");  // it is 10
////    RomanNumeralSystem num2("V");  // it is 5
////
////    RomanNumeralSystem sum = num1 + num2;
////    RomanNumeralSystem diff = num1 - num2;
////    RomanNumeralSystem prod = num1 * num2;
////    RomanNumeralSystem div = num1 / num2;
////
////    RomanNumeralSystem incPost = num1++;
////    RomanNumeralSystem incPre = ++num1;
////    RomanNumeralSystem decPost = num2--;
////    RomanNumeralSystem decPre = --num2;
////
////    cout << "Roman operations executed";
////    return 0;
////}
////////*****Question no 2*****
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class CharHandler {
//private:
//    char* buffer;
//
//public:
//    CharHandler() {
//        buffer = new char[1];
//        buffer[0] = '\0';
//    }
//
//    CharHandler(const char* src) {
//        int len = 0;
//        while (src[len] != '\0') len++;
//        buffer = new char[len + 1];
//        for (int i = 0; i < len; i++) buffer[i] = src[i];
//        buffer[len] = '\0';
//    }
//
//    CharHandler(const CharHandler& rhs) {
//        int len = 0;
//        while (rhs.buffer[len] != '\0') len++;
//        buffer = new char[len + 1];
//        for (int i = 0; i < len; i++) buffer[i] = rhs.buffer[i];
//        buffer[len] = '\0';
//    }
//
//    // Assignment Operator
//    CharHandler& operator=(const CharHandler& rhs) {
//        if (this != &rhs) {
//            delete[] buffer;
//            int len = 0;
//            while (rhs.buffer[len] != '\0') len++;
//            buffer = new char[len + 1];
//            for (int i = 0; i < len; i++) buffer[i] = rhs.buffer[i];
//            buffer[len] = '\0';
//        }
//        return *this;
//    }
//
//    // Length 
//    int getLength() const {
//        int count = 0;
//        while (buffer[count] != '\0') count++;
//        return count;
//    }
//
//    // Uppercase
//    CharHandler toUppercase() const {
//        CharHandler temp(buffer);
//        for (int i = 0; temp.buffer[i] != '\0'; i++) {
//            if (temp.buffer[i] >= 'a' && temp.buffer[i] <= 'z') {
//                temp.buffer[i] -= 32;
//            }
//        }
//        return temp;
//    }
//
//    // Lowercase
//    CharHandler toLowercase() const {
//        CharHandler temp(buffer);
//        for (int i = 0; temp.buffer[i] != '\0'; i++) {
//            if (temp.buffer[i] >= 'A' && temp.buffer[i] <= 'Z') {
//                temp.buffer[i] += 32;
//            }
//        }
//        return temp;
//    }
//
//    // at index
//    char getCharAt(int index) const {
//        return buffer[index];
//    }
//
//    // Get substring
//    CharHandler grabSub(int start, int end) const {
//        int len = end - start + 1;
//        char* temp = new char[len + 1];
//        for (int i = 0; i < len; i++) {
//            temp[i] = buffer[start + i];
//        }
//        temp[len] = '\0';
//        CharHandler result(temp);
//        delete[] temp;
//        return result;
//    }
//
//    // Index of character
//    int findChar(char c) const {
//        for (int i = 0; buffer[i] != '\0'; i++) {
//            if (buffer[i] == c) return i;
//        }
//        return -1;
//    }
//
//    // Compare two strings
//    bool sameAs(const CharHandler& other) const {
//        int i = 0;
//        while (buffer[i] != '\0' && other.buffer[i] != '\0') {
//            if (buffer[i] != other.buffer[i]) return false;
//            i++;
//        }
//        return buffer[i] == '\0' && other.buffer[i] == '\0';
//    }
//
//    // Concatenate another string
//    CharHandler mergeWith(const CharHandler& other) const {
//        int len1 = getLength();
//        int len2 = other.getLength();
//        char* result = new char[len1 + len2 + 1];
//
//        for (int i = 0; i < len1; i++) result[i] = buffer[i];
//        for (int j = 0; j < len2; j++) result[len1 + j] = other.buffer[j];
//        result[len1 + len2] = '\0';
//
//        CharHandler finalResult(result);
//        delete[] result;
//        return finalResult;
//    }
//
//    // Integer to string
//    static char* convertToChar(int number) {
//        int copy = number, digits = (number == 0) ? 1 : 0;
//        while (copy != 0) {
//            digits++;
//            copy /= 10;
//        }
//        char* out = new char[digits + 1];
//        out[digits] = '\0';
//        for (int i = digits - 1; i >= 0; i--) {
//            out[i] = (number % 10) + '0';
//            number /= 10;
//        }
//        return out;
//    }
//
//    // Add character
//    CharHandler addChar(char ch) const {
//        char single[2] = { ch, '\0' };
//        CharHandler temp(single);
//        return mergeWith(temp);
//    }
//
//    // Add number
//    CharHandler addNum(int n) const {
//        char* temp = convertToChar(n);
//        CharHandler holder(temp);
//        delete[] temp;
//        return mergeWith(holder);
//    }
//
//    // Prepend
//    CharHandler joinAtStart(const CharHandler& other) const {
//        return other.mergeWith(*this);
//    }
//
//    // Operator Overloads
//    CharHandler operator+(const CharHandler& rhs) const {
//        return mergeWith(rhs);
//    }
//
//    CharHandler operator+(char ch) const {
//        return addChar(ch);
//    }
//
//    CharHandler operator+(int val) const {
//        return addNum(val);
//    }
//
//    CharHandler operator-(const CharHandler& rhs) const {
//        return joinAtStart(rhs);
//    }
//
//    char& operator[](int index) {
//        return buffer[index];
//    }
//
//    const char& operator[](int index) const {
//        return buffer[index];
//    }
//
//    // Friend functions
//    friend CharHandler operator+(const char* arr, const CharHandler& obj);
//    friend CharHandler operator+(char ch, const CharHandler& obj);
//    friend CharHandler operator+(int val, const CharHandler& obj);
//    friend bool operator==(const CharHandler& lhs, const CharHandler& rhs);
//    friend bool operator!=(const CharHandler& lhs, const CharHandler& rhs);
//    friend bool operator>(const CharHandler& lhs, const CharHandler& rhs);
//    friend bool operator<(const CharHandler& lhs, const CharHandler& rhs);
//    friend ostream& operator<<(ostream& os, const CharHandler& obj);
//    friend istream& operator>>(istream& is, CharHandler& obj);
//
//    // Destructor
//    ~CharHandler() {
//        delete[] buffer;
//    }
//};
//
//// Friend definitions
//CharHandler operator+(const char* arr, const CharHandler& obj) {
//    CharHandler temp(arr);
//    return temp.mergeWith(obj);
//}
//
//CharHandler operator+(char ch, const CharHandler& obj) {
//    char temp[2] = { ch, '\0' };
//    CharHandler x(temp);
//    return x.mergeWith(obj);
//}
//
//CharHandler operator+(int val, const CharHandler& obj) {
//    char* tmp = CharHandler::convertToChar(val);
//    CharHandler num(tmp);
//    delete[] tmp;
//    return num.mergeWith(obj);
//}
//
//bool operator==(const CharHandler& lhs, const CharHandler& rhs) {
//    return lhs.sameAs(rhs);
//}
//
//bool operator!=(const CharHandler& lhs, const CharHandler& rhs) {
//    return !(lhs == rhs);
//}
//
//bool operator>(const CharHandler& lhs, const CharHandler& rhs) {
//    int i = 0;
//    while (lhs.buffer[i] != '\0' && rhs.buffer[i] != '\0') {
//        if (lhs.buffer[i] > rhs.buffer[i]) return true;
//        if (lhs.buffer[i] < rhs.buffer[i]) return false;
//        i++;
//    }
//    return lhs.getLength() > rhs.getLength();
//}
//
//bool operator<(const CharHandler& lhs, const CharHandler& rhs) {
//    return !(lhs > rhs || lhs == rhs);
//}
//
//ostream& operator<<(ostream& os, const CharHandler& obj) {
//    os << obj.buffer;
//    return os;
//}
//
//istream& operator>>(istream& is, CharHandler& obj) {
//    char temp[1000];
//    is >> temp;
//    delete[] obj.buffer;
//    int len = 0;
//    while (temp[len] != '\0') len++;
//    obj.buffer = new char[len + 1];
//    for (int i = 0; i < len; i++) obj.buffer[i] = temp[i];
//    obj.buffer[len] = '\0';
//    return is;
//}
//
//int main() {
//    CharHandler a("Default");
//    CharHandler b("Class");
//
//    cout << "First = " << a << endl;
//    cout << "Second = " << b << endl;
//
//    CharHandler result = a + " " + b + 789;
//    cout << "Combined = " << result << endl;
//
//    CharHandler input;
//    cout << "Type something = ";
//    cin >> input;
//
//    cout << "You typed = " << input << endl;
//    cout << "First letter = " << input[0] << endl;
//
//    input[0] = 'Z';
//    cout << "After update = " << input << endl;
//
//    return 0;
//}
