#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(25);
    v.push_back(3);

    vector<int> v2;
    v2.push_back(11);
    v2.push_back(22);
    v2.push_back(33);

  //  swap(v,v2);
    //v.swap(v2);
  
    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }

    int sum=accumulate(v.begin(),v.end(),0);
    cout<<endl<<"sum val is:"<<sum;

    int mx=*max_element(v.begin(),v.end());
    cout<<endl<<"max val is:"<<mx;

    int mn=*min_element(v.begin(),v.end());
    cout<<endl<<"min val is:"<<mn;

    cout<<endl;
    partial_sum(v.begin(),v.end(),v.begin());
     for(i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}
