#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h, k, s, total = 0;
    double v;
    cin >> h >> k >> v >> s;
    while(h>0) {
        v+= abs(s);
        v-= max(1.0, floor(v/10));
        if(v>=k) h += 1;
        if(0 < v && v < k) {
            h--;
            if(h == 0)
                v = 0;
        }
        if(v <= 0) {
            h= 0;
            v = 0;
        }
        total += v;
        if(s>0) s-= 1;
    }
    cout << total;
}