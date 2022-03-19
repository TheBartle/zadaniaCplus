#include <iostream>
#include <fstream>

using namespace std;


int nwd(int a, int b) {
    while(b != 0)
        if(a>b) 
            a -= b;
        else
            b -= a;
    return a;
}


int main() {
    cout << nwd(2, 2137) << endl;


    return 0;
}