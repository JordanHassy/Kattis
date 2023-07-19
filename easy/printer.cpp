#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int numPrinters = 1;

    int i = 0;
    if(n < 2) {
        cout << 1;
        exit(0);
    }
    while(69) {
        if(numPrinters*2 >= n) {
            i += 2;
            break;
        }
        else {
            numPrinters *= 2;
            i++;
        }
    }
    cout << i;
    return 0;
}