#include<bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int, int> p = {1,4};
    cout << p.first << endl; //1
    cout << p.second << endl; //4


    //nested pair
    pair<int, pair<int, char>> n = {20, {2, 's'}};
    cout << n.first << endl; //20
    cout << n.second.first << endl; //2
    cout << n.second.second << endl; //s

    //array of pairs
    pair<int, int> arr[] = {{1,4}, {3,1}};
    cout << arr[1].second; // 1
}

int main() {
    explainPair();
}