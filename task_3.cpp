//#include <iostream>
//#include <string>
//using namespace std;
//
//class Stack {
//private:
//    char arr[100];
//    int top;
//
//public:
//    Stack() {
//        top = -1;
//    }
//
//    void push(char ch) {
//        if (top < 99)
//            arr[++top] = ch;
//        else
//            cout << "Stack Overflow! "<<endl;
//    }
//
//    char pop() {
//        if (top == -1) {
//            cout << "Stack Underflow! "<<endl;
//            return '\0';
//        }
//        return arr[top--];
//    }
//
//    bool isEmpty() {
//        return (top == -1);
//    }
//};
//
//// to check if opening and closing brackets match
//bool isMatching(char open, char close) {
//    if (open == '(' && close == ')') return true;
//    if (open == '{' && close == '}') return true;
//    if (open == '[' && close == ']') return true;
//    return false;
//}
//
//// to check if parentheses are balanced
//bool isBalanced(string exp) {
//    Stack s;
//    for (int i = 0; i < exp.length(); i++) {
//        char ch = exp[i];
//
//        if (ch == '(' || ch == '{' || ch == '[') {
//            s.push(ch);
//        }
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            if (s.isEmpty()) {
//                return false;
//            }
//
//            char topChar = s.pop();
//            if (!isMatching(topChar, ch)) {
//                return false;
//            }
//        }
//    }
//
//    return s.isEmpty();
//}
//
//int main() {
//    string exp1 = "{[a + b] * (c + d)}";
//    string exp2 = "(a + b)) * ((c + d)";
//
//    if (isBalanced(exp1))
//        cout << exp1 << " is Balanced "<<endl;
//    else
//        cout << exp1 << " is Not Balanced "<<endl;
//
//    if (isBalanced(exp2))
//        cout << exp2 << " is Balanced "<<endl;
//    else
//        cout << exp2 << " is Not Balanced "<<endl;
//
//    return 0;
//}
