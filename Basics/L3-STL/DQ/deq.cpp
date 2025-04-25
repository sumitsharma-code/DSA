#include<bits/stdc++.h>
using namespace std;

void returnDQ(int arr[], int n) {
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        dq.push_back(arr[i]);
    }

    for(auto i:dq) {
        cout << i << endl;
    }
}

int main() {
    int arr[5] = {1,52,6,2,8};

    returnDQ(arr,5);
}