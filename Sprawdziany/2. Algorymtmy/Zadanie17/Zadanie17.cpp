#include <iostream>

using namespace std;

int main() {
    int b, r, a;

    cout << "Podaj a i b: ";
    cin >> a >> b;
    while(b) {
        r = a % b;
        a = b;
        b = r;          
    }

    cout << "NWD: " << a << endl;

    return 0;
}