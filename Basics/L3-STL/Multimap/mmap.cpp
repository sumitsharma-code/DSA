#include <iostream>
using namespace std;

int main() {
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt;
    
    return 0;
}