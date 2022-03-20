#include <iostream>

using namespace std;

void sortowanie(int tab[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n - i; j++) {
            if(tab[j-1]>tab[j]) {
                swap(tab[j-1], tab[j]);
            }
        }
    }
}

//sortowanie skrócone
void sortowanieB(int tab[], int n) {
    for(int i = 0; i < n; i++)
        for(int j = 1; j < n - i; j++)
            if(tab[j-1] > tab[j])
                swap(tab[j-1], tab[j]);
}

int main() {
    int n;

    cout << "Podaj ile chcesz posortowac liczb: ";
    cin >> n;
    int tab[n];
    cout << "Wprowadz liczby: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    //sortowanie
    sortowanie(tab, n);

    //wyświetlanie
    for(int i=0;i<n;i++)
          cout<<tab[i]<<" ";

    return 0;
}