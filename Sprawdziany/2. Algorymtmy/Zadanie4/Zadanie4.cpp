#include <iostream>

using namespace std;

int main() {
    int tab[4][4] = {1,2,0,0,3,4,0,0,5,6,0,0,0,0,0,0};
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tab[i][j];
        }
        cout << endl;
    }


    cout << tab[2][1];
    return 0;
}