//NOT DONE
#include <iostream>
#include <cmath>
using namespace std;

char s(int n) {
    switch(n) {
        case 0:
            return '+';
            break;
        case 1:
            return '-';
            break;
        case 2:
            return '*';
            break;
        case 3:
            return '/';
            break;

    }
    return 'X';
}

int op(int n, int operation) {
    if(operation == 0) {
        return n + 4;
    }else if(operation == 1) {
        return n - 4;
    }else if(operation == 2) {
        return n * 4;
    }else if(operation == 3) {
        return n/4;
    }
    else exit(1);
}

int doMath(int i, int j, int k) {
    //if i or j or k are >1, that means they are prioritized in order of operations. Do higher order first from right to left, then lower order.
    //i could create a vector with the values up 
    int fin[] = {4, 4, 4, 4};
    if(i > 1) {
        
    }
    if(j > 1) {

    }
    if(k > 1) {

    }
    if(state)
    
}

void isPossible(int n) {
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            for(int k = 0; k < 4; ++k) {
                int a = doMath(i, j, k);
                if(c == n) {
                    cout << "4 " << s(i) << " 4 " << s(j) << " 4 " << s(k) << " 4 = " << n << endl;
                    return;
                }
            }
        }
    }
    cout << "no solution\n";
}

int main() {
    int m, n;
    cin >> m;
    for(int i = 0; i < m; ++i) {
        cin >> n;
        isPossible(n);
    }
}