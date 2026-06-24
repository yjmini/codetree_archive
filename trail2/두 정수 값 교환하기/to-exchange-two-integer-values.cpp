#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int temp = n;
    n = m; 
    m = temp;

    cout << n << " " << m;
    return 0;
}