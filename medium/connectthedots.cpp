#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    int total = 0;
    string s;
    while (getline(cin, s, ' '))
    {   
        cout << s << ' ' << s.find("\n\n");
    }
    cout << "Done." << endl;
    return 0;
}