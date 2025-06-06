#include <bits/stdc++.h>
using namespace std;

// to be made global so that its value doesn't change everytime new function call arrisses
int cnt = 0;

void f()
{
    if (cnt == 3)
        return;
    cout << cnt << endl;
    cnt++;
    f();
}
int main()
{
    f();
    return 0;
}