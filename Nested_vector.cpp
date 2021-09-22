#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &p){
    cout<<"size is:"<<p.size()<<" ";
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    return;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v[n] ;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        for(int j=0;j<s;j++){
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    for(int i=0;i<n;i++){
        print(v[i]) ;
    }

    return 0;
}
