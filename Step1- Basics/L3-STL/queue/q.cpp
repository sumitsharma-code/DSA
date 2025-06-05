#include<bits/stdc++.h>
using namespace std;

void returnQueue(int arr[], int n) {
    queue<int> que;
    for(int i = 0; i < n; i++)
    {
        que.push(arr[i]);
    }
    while(!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}

int main() {
    int arr[5] = {1,5,56,2,6};
    //FIFO
    returnQueue(arr,5);
}