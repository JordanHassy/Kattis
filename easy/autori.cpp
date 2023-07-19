#include <iostream>
using namespace std;

int main() {
    int index;
    string s;
    cin >> s;
    for(int i = 0; i < (int)s.length(); ++i) {
        if(s[i] == '-') cout << s[i+1];
        else if(i == 0) cout << s[i];
    }
    
}