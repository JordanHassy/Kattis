#include <iostream> 
using namespace std;

int main() {
    int n, du, dd;
    cin >> n;
    if(n < 99) {
        cout << 99;
        exit(0);
    }
    du = 99-(n % 100);
    dd = 1 + (n%100);
    if(du <= dd) 
        cout << n + du;
    else if(du > dd)
        cout << n -dd;
    
}