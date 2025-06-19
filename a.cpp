#include <iostream>

#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        long long X, Y;
        cin >> X >> Y;

        if (gcd(X, Y) > 1) {
            cout << 0 << '\n';
        } else if (gcd(X + 1, Y) > 1 || gcd(X, Y + 1) > 1) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }

    return 0;
}