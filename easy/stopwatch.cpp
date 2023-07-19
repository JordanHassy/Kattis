#include <iostream>
using namespace std;

int main() {
    int lastnum = 0, curr = 0, fin = 0, i = 0;
    while(cin >> curr) {
        i++;
        if(i%2 != 0 && i > 1)
            fin += curr-lastnum;
        lastnum = curr;
    }
    if(i%2 != 0) cout << fin;
    else cout << "still running";
}