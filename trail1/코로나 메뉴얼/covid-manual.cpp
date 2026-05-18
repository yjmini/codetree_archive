#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char symptom[3];
    int temp[3];
    int cnt = 0;

    for (int i = 0; i < 3; i++) {
        cin >> symptom[i] >> temp[i];
        if (symptom[i] == 'Y' && temp[i] >= 37) {
            cnt++;
        }
    }


    if (cnt >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }



    return 0;
}