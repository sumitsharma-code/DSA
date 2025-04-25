#include<bits/stdc++.h>
using namespace std;

void returnStack(int arr[], int n) {
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }
    cout << "Top: " << st.top() << endl;

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    int arr[5] = {1,5,56,2,6};

    returnStack(arr,5);
}