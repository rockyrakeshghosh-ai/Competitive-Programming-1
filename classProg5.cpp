// Valid Parentheses Using a Stack
// An online code editor checks whether brackets are balanced before a student submits
// code.
// Given a string containing the brackets (), [], and {}, determine whether every open
// ing bracket is closed by the same type of bracket in the correct order.


#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    bool valid = true;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                valid = false;
                break;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                valid = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        valid = false;
    }

    cout << (valid ? "True" : "False") << endl;

    return 0;
}
