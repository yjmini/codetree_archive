#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;
    cin >> a >> b;

    vector<int> arr1(a);
    vector<int> arr2(b);
    int flag = 0;

    for (int i = 0; i < a; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> arr2[i];
    }    

    for (int i = 0; i < a - b + 1; i++) {
        int cnt = 0;
        for (int j = 0; j < b; j++) {
            if (arr1[i+j] == arr2[j]) {
                cnt++;
            }
            if (cnt == b) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}