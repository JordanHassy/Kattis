#include <iostream> 
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int sum = 0;
    for(int i = 0; i < (int)s.length(); ++i) {
        if(toupper(s[i]) == 'A' ||toupper(s[i]) == 'E' ||toupper(s[i]) == 'I' ||toupper(s[i]) == 'O' ||toupper(s[i]) == 'U')
        sum++;
    }
    
    cout << sum;
    
}