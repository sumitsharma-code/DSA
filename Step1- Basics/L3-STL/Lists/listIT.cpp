#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> ls;
    ls.push_back(4);
    ls.emplace_back(5);
    ls.push_front(5);
    ls.emplace_front();
    for(auto i:ls) {
        cout << i << endl;
    }
}