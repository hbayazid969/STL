#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v;
    //iterator decleration
    vector <int> :: iterator it;
    int n;
    for(int i=0;i<5;i++){
       cin>>n;
       v.push_back(n);
    }

    for(int i=0;i<5;i++){
       cout<<v[i];
    }
    //point first value
    it=v.begin();
    cout<<*it<<endl;


}
