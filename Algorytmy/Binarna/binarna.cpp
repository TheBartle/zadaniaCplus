#include <iostream>

using namespace std;


string binarna(int liczba) {
    string bin, bin2;
    while(liczba != 0) {
        if(liczba % 2 == 0)
            bin += "0";
        else
            bin += "1";


        liczba /= 2;  
    }

    for(int i = slowo.size() - 1; i >= 0; i--) {
        bin2 += bin[i];
    }
    return bin2;
}

int main() {
    while(true){
        int s;
        cin>>s;
        cout<<binarna(s)<<endl;
    }
}