#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }
    int sum_a, sum_b, sum_c;
    sum_a = sum_b = sum_c = 0;
    for (int i = 0; i < n; ++i) {
        sum_a += a[i];
        sum_b += b[i];
        sum_c += c[i];
    }
    int avg_A = sum_a / n;
    int avg_B = sum_b / n;
    int avg_C = sum_c / n;
    int m = 0;
    for (int i = 0; i < n; ++i) {
        m += abs(a[i]-avg_A) + abs(b[i]-avg_B) + abs(c[i]-avg_C);
    }
    cout << m;
    return 0;
}
