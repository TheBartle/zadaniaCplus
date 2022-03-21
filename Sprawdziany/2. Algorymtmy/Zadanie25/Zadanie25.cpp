#include <iostream>

using namespace std;

int main() {

    int n, ile = 0;
    cin >> n;
    while(n > 0) {
        n = n / 2;
        ile++;
    }
    cout << ile;

    return 0;
}