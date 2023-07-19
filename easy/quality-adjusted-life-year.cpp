//ACCEPTED
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    double n1, n2, total = 0;
    for(int i = 0; i < x; ++i) {
        cin >> n1 >> n2;
        total += n1*n2;
    }

    cout << total;
}