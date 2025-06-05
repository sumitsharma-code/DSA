#include <bits/stdc++.h>
using namespace std;


void printVector()
{
    //normal vector
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);
    cout << v[0] << " " << v[1] << endl; //1 3

    //pair vector
    vector<pair<int, int>> k;
    k.push_back({3,1});
    k.emplace_back(14,6); //automatically takes the arguments as a pair
    cout << k[0].first << endl;// 3

    //default values to specified size
    vector<int> vec(2,49); // {49,49}

    vector<int>::iterator i = vec.begin();
    cout << *(i) << endl; // 49
    cout << *(i+1) << endl; // 49

    vec[3] = 3;
    cout << vec[3] << endl; // 3
    //vec = {49,49,garbage,3} now

    vector<int>::iterator l = vec.end();
    cout << *(l) << endl; //garbage value-> showing value at v[5]
    
    cout << "back" << endl;
    cout << vec.back(); // last element before first invalid index
}
void itrationVector()
{
    vector<int> v = {1,4,5,6};
    v.erase(v.begin());
    cout << v.empty() << endl;
    for(vector<int>::iterator i = v.begin(); i !=v.end();i++) {
        cout << *i;
    }
}

int main()
{
    // printVector();

    itrationVector();
    return 0;
}