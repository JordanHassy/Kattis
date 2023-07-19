//ACCEPTED
#include <iostream>
using namespace std;

int main() {
    string x;
    getline(cin, x);
    if(x.substr(0, 3) == "555")
        cout << 1;
    else cout << 0;
}