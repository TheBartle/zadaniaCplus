#include <iostream>
#include <fstream>

using namespace std;

void pp1() {
    //definiowanie klas fstream
    fstream odczyt, zapis;

    //otwieranie pliku hasla.txt
    odczyt.open("hasla.txt", ios::in);

    //definiowanie zmiennych
    string temp;
    int sumaParzystych = 0;
    int sumaNieParzystych = 0;

    while(!odczyt.eof()) {
        // odczyt >> temp; //wczyta tylko do pierwszej spacji
        getline(odczyt, temp); //wczyta linie ze spacjami
        
        //sprawdzanie czy dlugosc string'a temp jest parzysta
        if(temp.length() % 2 == 0) {
            sumaParzystych++;
        } else {
            sumaNieParzystych++;
        }
    }
    //zamykanie pliku hasla;
    odczyt.close();

    //tworzenie pliku zapisu
    zapis.open("./wyniki/wynik4a.txt", ios::out);
    //zapisywanie`
    zapis << "Ilość hasł parzystych: " << sumaParzystych << endl;
    zapis << "Ilość hasł nieparzystych: " << sumaNieParzystych << endl;
    zapis.close();
}

//SPRAWDZANIE PALINDROMU DO POD PUNKTU 2 (B)
bool palindrom(string slowo) {
    bool defReturn = true;

    int j = slowo.size() - 1;
    for(int i = 0; i < slowo.size() - 1; i++) {
        if(slowo[i] != slowo[j]) {
            defReturn = false;
            break;
        }
        j--;
    }
    return defReturn;
}



void pp2() {
    fstream odczyt, zapis;
    odczyt.open("hasla.txt", ios::in);
    zapis.open("./wyniki/wynik4b.txt", ios::out);

    //definiowanie zmiennych
    string temp;

    //wczytanie
    while(!odczyt.eof()) {
        getline(odczyt, temp);
        if(palindrom(temp) == true)
            zapis << temp << endl;
        
    }

    odczyt.close();
    zapis.close();
}


//POD PUNKT 3 (wynik4c)
void pp3() {
    fstream odczyt, zapis;
    odczyt.open("hasla.txt", ios::in);
    zapis.open("./wyniki/wynik4c.txt", ios::out);

    //definiowanie zmiennych
    string temp;

    while(!odczyt.eof()) {
        getline(odczyt, temp);
        
        for(int i = 0; i < temp.size(); i++) {
            char znak = temp[i];
            char znak2 = temp[i+1];
            if(int(znak) + int(znak2) == 220) {
                zapis << temp << endl;
                break;
            }
        }
        
    }

    odczyt.close();
    zapis.close();
}


int main() {
    pp1();
    pp2();
    pp3();

    return 0;
}
