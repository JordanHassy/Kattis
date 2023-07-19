#include <iostream>
#include <vector>
#include <random>
using namespace std;

vector<int> p;
vector<int> r;
int sets;

void init(int N) {
    p.assign(N, 0);
    iota(begin(p), end(p), 0);
    r.assign(N, 0);
    sets = N;
}

int findSet(int i) {return (p[i] == i) ? i : (p[i] = findSet(p[i]));}

void join(int i, int j) {
    int x = findSet(i);
    int y = findSet(j);
    if(x==y) return;
    if(r[x] > r[y]) swap(x, y);
    p[x] = y;
    if(r[x] == r[y]) ++r[y];
    --sets;
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i < n; ++i) {
        int m, r;
        cin >> m >> r; //m places, r road pairs
        init(m);
        for(int j=0; j<r; ++j) {
            int x, y;
            cin >> x >> y;
            join(x, y);
        }
        cout << sets-1 << endl;
        
    }

    return 0;
}