#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector <int> v;
   v.push_back(11);
   v.push_back(24);
   v.push_back(38);
   v.push_back(41);
   v.push_back(15);

   cout<<"Size of the vector = "<<v.size()<<endl;

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   cout<<endl;
   cout<<"First Value is = "<<v.front()<<endl;
   cout<<"Last Value is = "<<v.back()<<endl;

   cout<<endl;
   cout<<"Clear the vector"<<endl;
   v.clear();
   cout<<v.size()<<endl;
   cout<<endl;
   cout<<"Check the vector empty or not ? "<<endl;
   if(v.empty()){
    cout<<"YES Vector is empty"<<endl;
   }else{
    cout<<"NO it is not"<<endl;
   }
}




