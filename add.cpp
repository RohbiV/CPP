#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    cout << a+b << "\n";

    if(a-b > 0) {
        cout << a-b << "\n";
    } else {
        cout << b-a << "\n";
    }

    // now for multiplication

    cout << a * b << "\n";

    return 0;
}