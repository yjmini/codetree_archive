#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int h, w;
    cin >> h >> w;

    int bmi = (10000 * w) / (h * h);

    cout << bmi << '\n';

    if (bmi >= 25) {
        cout << "Obesity";
    }

    return 0;
}