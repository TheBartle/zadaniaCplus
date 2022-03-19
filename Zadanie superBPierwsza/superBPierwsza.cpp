#include <iostream>
#include <fstream>

using namespace std;


bool pierwsza(int liczba) 
{
    if (liczba < 2)
        return false;
    else 
    {
        for(int i = 2; i < liczba; i++)
        {
            if(liczba % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}


int binarnaSuma(int liczba) {
    string binarn;
    while(liczba != 0) {
        if(liczba % 2 == 1) {
            binarn += "1";
        } else {
            binarn += "0";
        }
        liczba /= 2;
    }

    int j = binarn.length()-1;
    for(int i = 0; i < binarn.length()/2; i++) {
        char temp = binarn[i];
        binarn[i] = binarn[j];
        binarn[j] = temp;
        j--;
    }

    int suma = 0;
    for(int i = 0; i <= binarn.length() - 1; i++) {
        if(binarn[i] == '1') {
            suma += 1;
        }
    }
    return suma;
}



int sumaLiczb(long long liczba) {
    int suma = 0;
    
    while(liczba != 0) {
        suma += liczba % 10;
        liczba /= 10;
    }

    return suma;

}


bool superBPierwsza(int liczba) {
    if(pierwsza(liczba) && pierwsza(sumaLiczb(liczba)) && pierwsza(binarnaSuma(liczba))) {
        return true;
    } else {
        return false;
    }
}



void zapisz(int liczba)
{
    fstream zapis;
    zapis.open("wyniki.txt", ios::out | ios::app);
    zapis << liczba << endl;
    zapis.close();
}

int main()
{
    for(int i = 2; i <= 1000; i++) {
        if(superBPierwsza(i))
            zapisz(i);
    }

    return 0;
}