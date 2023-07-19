#include <iostream>
#include <map>
#include <sstream>
#include <set>
using namespace std;

string calculate(map<string, int> myMap) {
    char op{};
    int sum = 0;
    stringstream ss;
    string calcString;
    bool pos = true;
    while(op != '=') {
        cin >> calcString;
        ss << calcString << ' ';
        if(myMap.find(calcString) == myMap.end()) {
            pos = false;
        }else {
            if(op != '-') {
                sum += myMap[calcString];
            }else {
                sum -= myMap[calcString];
            }
        }
        cin >> op;
        ss << op << ' ';
    }
    bool good = false;
    if(pos) {
        for(auto it = myMap.begin(); it != myMap.end(); it++) {
            if(it->second == sum) {
                ss << it->first << endl;
                good = true;
            }
        }
    }
    if(!good) ss << "unknown\n";

    return ss.str();
}

int main() {
    int key;
    set<int> mySet;
    string str, mapStr, calcString;
    map<string, int> myMap;
    while(cin >> str) {
        if (str == "clear") {
            myMap.clear();
        }
        else if(str == "def") {
            cin >> mapStr >> key;
            map<string, int>::iterator itr;
            itr = myMap.find(mapStr);
            if(itr == myMap.end()) {
                myMap.insert({mapStr, key});
                mySet.insert(key);
            }else {
                itr->second = key;
            }
            
        }else if(str == "calc") {
            cout << calculate(myMap);
        }
    }

}