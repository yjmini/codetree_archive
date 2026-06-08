#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    if (s1.find("ee") != string::npos) {
        cout << "Yes ";
    }
    else {
        cout << "No ";
    }

    if (s1.find("ab") != string::npos) {
        cout << "Yes ";
    }
    else {
        cout << "No ";
    }

    

    return 0;
}