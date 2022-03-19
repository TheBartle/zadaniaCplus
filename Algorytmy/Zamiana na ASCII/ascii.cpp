#include <iostream>
#include <fstream>

using namespace std;


int ascii(string slowo) {
    char temp;
    int suma = 0;

    for(int i = 0; i < slowo.size(); i++) {
        suma += int(temp = slowo[i]);
    }

    return suma;
}


int main() {
    string slowo;
    cin >> slowo;
    cout << slowo << " w ascii: " << ascii(slowo) << endl;

    return 0;
}