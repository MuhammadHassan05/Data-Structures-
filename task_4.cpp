//#include <iostream>
//#include <stack>
//#include <sstream>
//using namespace std;
//
//int evaluatePostfix(string exp) {
//    stack<int> s;
//    stringstream ss(exp);
//    string token;
//
//    while (ss >> token) {
//        // If token is a number
//        if (isdigit(token[0])) {
//            s.push(stoi(token));  // convert string to integer
//        }
//        else {
//            // Pop two operands
//            int val2 = s.top(); s.pop();
//            int val1 = s.top(); s.pop();
//
//            // Perform operation
//            switch (token[0]) {
//            case '+': s.push(val1 + val2); break;
//            case '-': s.push(val1 - val2); break;
//            case '*': s.push(val1 * val2); break;
//            case '/': s.push(val1 / val2); break;
//            }
//        }
//    }
//
//    return s.top(); // final result
//}
//
//int main() {
//    string exp = "5 1 2 + 4 * + 3 -";
//    cout << "Result: " << evaluatePostfix(exp) << endl;
//    return 0;
//}
