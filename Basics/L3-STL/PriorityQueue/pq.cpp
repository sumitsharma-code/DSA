#include <bits/stdc++.h>
using namespace std;

void returnPQ(int arr[], int n)
{
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }
    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
}

int main()
{
    int arr[5] = {1, 6, 2, 7, 8};

    returnPQ(arr, 5);
}