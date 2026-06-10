#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1;
    cin >> s1;

    int len = s1.length();

    s1.erase(1, 1);
    s1.erase(len-3, 1);

    cout << s1;

    return 0;
}