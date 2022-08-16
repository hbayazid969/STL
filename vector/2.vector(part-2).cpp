#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    vector <int> v,z;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    z.push_back(9);
    z.push_back(8);
    z.push_back(7);

    //vector insert value
    v.insert(v.begin()+0,3,0);
    z.insert(z.begin()+0,3,5);


     for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //vector swap value
    swap(v,z);
    cout<<"swap sort and reverse done"<<endl;

    //vector sort
    sort(z.begin(),z.end());
    reverse(v.begin(),v.end());
     for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<z.size();i++){
        cout<<z[i]<<" ";
    }


}
