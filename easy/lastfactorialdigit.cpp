#include <iostream> 
using namespace std;

int main() {
    int n, x;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int total = 1;
        cin >> x;
        for(int i = 1; i <= x; ++i) {
            total *= i;
        }
        cout << total%10 << '\n';
    }
}