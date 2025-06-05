#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);
    cout << ms.count(1) << endl;

    
}