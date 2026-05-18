#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int aAge, bAge;
    char aSex, bSex;
    cin >> aAge >> aSex;
    cin >> bAge >> bSex;

    if ((aAge >= 19 && aSex == 'M') || (bAge >= 19 && bSex == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}