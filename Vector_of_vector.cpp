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
    vector<vector<int> > v;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        vector<int> temp;
        for(int j=0;j<s;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }
    for(int i=0;i<n;i++){
        print(v[i]);
    }

    return 0;
}
