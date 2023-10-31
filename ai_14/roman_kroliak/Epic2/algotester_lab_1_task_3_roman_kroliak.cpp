#include <iostream>
using namespace std;
int main() {
    int a[5];
    for (int i = 1; i < 6; ++i) {
        cout << "Enter side of the " << i << " cube:";
        cin >> a[i-1];
    }
    if (a[0] <= 0) {
        cout << "ERROR";
        return 0;
    }
    for (int i = 1; i < 4; ++i) {
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
