#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string s1;
    getline(cin, s1);

    for (int i = 2; i < 10; i++) {
        cout << s1[i];
    }
    return 0;
}