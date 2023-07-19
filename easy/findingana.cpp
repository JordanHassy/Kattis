#include <iostream> 
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.substr(s.find('a'), ((int)s.length()-s.find('a')));
}