#include <iostream>
using namespace std;

int gcd(int n, int m) {
    while (n > 0 && m > 0) {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }
    if (n == 0)
        return m;
    else
        return n;
}
               
int main() {
    int n, m;
    cout << "Enter the Numbers: ";
    cin >> n >> m

    int ans = gcd(n, m);
    cout << "GCD is: " << ans;

    return 0;
}
