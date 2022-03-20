#include <iostream>

using namespace std;

void sortowanieBabelkowe(int tab[], int n) {
    for(int i = 0; i < n; i++)
        for(int j = 1; j < n - i; j++)
            if(tab[j-1] > tab[j])
                swap(tab[j-1], tab[j]);
}

bool sprawdzanie_anagramu(string wyraz1, string wyraz2) {

    if(wyraz1.length() != wyraz2.length()) 
        return false;

    int tab1[wyraz1.size()];
    int tab2[wyraz2.size()];

    for(int i = 0; i < wyraz1.size(); i++) {
        tab1[i] = int(wyraz1[i]);
        tab2[i] = int(wyraz2[i]);
    }

    sortowanieBabelkowe(tab1, wyraz1.length());
    sortowanieBabelkowe(tab2, wyraz2.length());

    for(int i = 0; i < wyraz1.length(); i++) 
        if(tab1[i] != tab2[i])
            return false;

    return true;

}


int main() {
    string anagram1, anagram2;

    cout << "Sprawdzanie anagramow!" << endl;
    cout << "Podaj pierwszy wyraz: ";
    cin >> anagram1;
    cout << "Podaj drugi wyraz: ";
    cin >> anagram2;
    
    if(sprawdzanie_anagramu(anagram1, anagram2))
        cout << anagram1 << " i " << anagram2 << " sa anagramami!";
    else
        cout << anagram1 << " i " << anagram2 << " nie sa anagramami!";

    

    return 0;
}
