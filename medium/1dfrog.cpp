#include <iostream>
using namespace std;

int main() {
    int n, s, m;
    cin >> n >> s >> m;
    s-=1;
    int board[n];
    bool traveled[n] = {false};
    for(int i = 0; i < n; ++i) {
        cin >> board[i];
    }
    int hops = 0;
    while(69) {
        if(board[s] == m) {
            cout << "magic\n" << hops;
            break;
       }
       s += board[s];
       ++hops;
       if(s>=n) {
        cout << "right\n" << hops;
        break;
       } else if(s<0) {
        cout << "left\n" << hops;
        break;
       }
       else if(traveled[s]){
        cout << "cycle\n" << hops;
        break;
       }
       else
        traveled[s] = true;
    }
}