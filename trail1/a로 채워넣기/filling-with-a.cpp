#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1; 
    cin >> s1;

    s1[1] = 'a';
    s1[s1.length() - 2] = 'a';

    cout << s1;
    
    return 0;
}