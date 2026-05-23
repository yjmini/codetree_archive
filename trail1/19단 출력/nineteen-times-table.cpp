#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    for (int i = 1; i < 20; i++) {
        for (int j = 1; j < 20; j++) {
            cout << i << " * " << j << " = " << i * j;
            if (j % 2 == 1 && j != 19)
                cout << " / ";
            else
                cout << '\n';
                
        }
    }
    return 0;
}