#include <iostream>
using namespace std;
int main() {
    long long a[5];
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }
    if (a[0] <= 0) {
        cout << "ERROR";
        return 0;
    }
    for (int i = 1; i < 5; ++i) {
        if (a[i] <= 0) {
            cout << "ERROR";
            return 0;
        }
        else if (a[i-1] < a[i]){
            cout << "LOSS";
            return 0;
        }
    }
    cout << "WIN";
    return 0;
}
