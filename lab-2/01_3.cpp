

#include <iostream>

using namespace std;
int main() {
    float n, a, b, x, y;//N, A, B, X, Y
    cin >> n >> a >> b >> x >> y;
    if (n < a && n < b) {
        cout << n;
    }
    if (n >= a && n < b)
    {
        cout << n - (n * (x / 100));
    }
    if (n >= b)
    {
        cout << n - (n * (y / 100));
    }
    return 0;
}