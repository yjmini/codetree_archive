#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;

    float ft = 30.48;
    int mile = 160934;

    cout.precision(1);
    cout << "9.2ft = " << ft * 9.2 <<"cm" << '\n';
    cout << "1.3mi = " << mile * 1.3 <<"cm" << '\n';
    return 0;
}