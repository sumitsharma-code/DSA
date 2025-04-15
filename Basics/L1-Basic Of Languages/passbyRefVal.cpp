#include<iostream>
using namespace std;

//passed by value
// void doSomething(int n) {
//     n++;
//     cout << n << "\n";
// }

//pass by reference
void doSomething(int &n) {
    n++;
    // cout << n << "\n";
}



int main(){
    int n = 10;
    doSomething(n);
    
    cout << n;
}