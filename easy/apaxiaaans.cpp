#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    cout << str[0];
    for(int i = 1; i < (int)str.length(); ++i) {
        if(str[i-1] != str[i] ) {
            cout << str[i];
        }
    }
}