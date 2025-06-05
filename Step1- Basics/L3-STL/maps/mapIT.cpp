#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.insert({2,5});
    mpp.emplace(5,6);
    cout << "[  ";
    for(auto i:mpp)
    {
        cout << "{" << i.first << ", " << i.second << "}" << ", ";
    }
    cout << " ]";
}