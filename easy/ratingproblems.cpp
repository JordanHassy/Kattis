#include <iostream>
using namespace std;

int main() {
    int n, k, sum = 0, sum2 = 0;
    cin >> n >> k;
    double avg, a;
    for(int i = 0; i < k; ++i) {
        cin >> a;
        sum += a;
    }
    sum2 = sum;
    for(int i = 0; i < n-k; ++i) {
        sum2 -= 3;
    }
    cout << sum2/(double)n << ' ';
    sum2 = sum;
    for(int i = 0; i < n-k; ++i) {
        sum2+= 3;
    }
    cout << sum2/(double)n;
}