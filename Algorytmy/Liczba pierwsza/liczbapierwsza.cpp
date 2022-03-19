#include <iostream>

using namespace std;

bool pierwsza(int liczba) {
    if(liczba < 2)
        return false;

    for(int i = 2; i < liczba; i++) {
        if(liczba % i == 0)
            return false;
    }

    return true;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";;
    cin >> liczba;
    cout << endl;

    if(pierwsza(liczba))
        cout << liczba << " jest pierwsza" << endl;
    else
        cout << liczba << " NIE jest pierwsza" << endl;
        
    return 0;
}