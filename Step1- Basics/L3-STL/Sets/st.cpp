#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.emplace(3);
    s.emplace(3);

    auto i = s.find(7);

    cout << *(--i) << endl;

    //works as bool for set 
    //1 if present 0 is not
    cout <<"Present or not?: " <<  s.count(1) << endl;
    auto i2 = s.begin();
    cout << "First Element: " << *s.begin() << endl;
    cout <<"empty or not?: " << s.empty() << endl;
    cout << "Full set: ";
    while(!s.empty())
    {
        cout << *i2 << " ";
        s.erase(i2++);
    }
}