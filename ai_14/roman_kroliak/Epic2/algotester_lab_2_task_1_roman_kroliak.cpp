#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    int r[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter " << i+1 << " element:";
        cin >> r[i];
    }
    int max, min, max_i, min_i;
    max = min = r[0];
    for (int i = 0; i < n; ++i) {
        if (r[i] >= max){
            max = r[i];
            max_i = i;
        }
        if (r[i] <= min){
            min = r[i];
            min_i = i;
        }
    }
    int a[n-1];
    int a_i = 0;
    for (int i = 0; i < n; ++i) {
        if (i != max_i) {
            a[a_i] = r[i];
            a_i++;
        }
    }
    int b[n-1];
    int b_i = 0;
    for (int i = 0; i < n; ++i) {
        if (i != min_i) {
            b[b_i] = r[i];
            b_i++;
        }
    }
    int max_a, min_a;
    max_a = min_a = a[0];
    for (int i = 0; i < n-1; ++i) {
        if (a[i] >= max_a) max_a = a[i];
        if (a[i] <= min_a) min_a = a[i];
    }
    int max_b, min_b;
    max_b = min_b = b[0];
    for (int i = 0; i < n-1; ++i) {
        if (b[i] >= max_b) max_b = b[i];
        if (b[i] <= min_b) min_b = b[i];
    }
    int m;
    (max_a-min_a < max_b-min_b) ? m = max_a-min_a : m = max_b-min_b;
    cout << "m: " << m;
    return 0;
}
