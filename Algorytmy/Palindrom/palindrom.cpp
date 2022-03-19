#include <iostream>
#include <fstream>

using namespace std;


bool palindrom(string slowo) {
    int j = slowo.size() - 1;
    for(int i = 0; i < slowo.size(); i++) {
        if(slowo[i] != slowo[j])
            return false;
        j--;
    }

    return true;
}


int main() {
    string slowo;
    cin >> slowo;
    if(palindrom(slowo))
        cout << slowo << " jest palindromem" << endl;
    else
        cout << slowo << " jest niepalindromem" << endl;

    return 0;
}