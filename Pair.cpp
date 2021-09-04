#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*pair<int,string>p;
    p.first=1;
    p.second="Singroha";
    cout<<p.first<<" "<<p.second;
    */

    pair<int,string> p1;
    p1=make_pair(1,"Naveen");
    p1=make_pair(2,"Singroha");
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,string> p2=p1;    //p2 ek copy bni h p1 ki
    p2.first=3;
    p2.second="Haryana";
    cout<<p2.first<<" "<<p2.second<<endl;

     pair<int,string> &p3=p1;    //p2=p1 ab hua hai
    p3.first=66;
    cout<<p1.first<<" "<<p1.second<<endl;

   // swap(p1.first,p2.first);
   // cout<<p1.first<<" "<<p1.second<<endl;

     swap(p1,p2);
    cout<<p1.first<<" "<<p1.second<<endl;

    return 0;
}
