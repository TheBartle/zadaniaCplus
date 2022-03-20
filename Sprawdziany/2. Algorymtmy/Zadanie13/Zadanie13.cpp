#include <iostream>

using namespace std;

void wypiszliczby(int a) {
    for(int i = 0; i <= a; i++)
        cout << i << endl;   
}


int main() {
    int a;

    cout << "Podaj a: ";
    cin >> a; 

    wypiszliczby(a);

    return 0;
}