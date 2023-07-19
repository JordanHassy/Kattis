#include <iostream>
using namespace std;

int main() {
    int g, t, n;
    cin >> g >> t >> n;
    int tRating = g-t, sum = 0, x;
    for(int i = 0; i < n; ++i) {
        cin >> x;
        sum+=x;
    }
    int ninety = tRating*.9;
    cout << ninety-sum;
}