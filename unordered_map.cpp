#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string> a;             //hash tables are used as inbuilt fn.
    a[1]="Naveen";                           //time complx. o(1) FOR BOTH insertion and cout.
    a[16]="Na";
    a[13]="Nav";
    a[2]="N";
    a[3];
    a[13]="SINGROHA";
    for(auto &it : a){
        cout<<it.first<<" "<<it.second<<"\n" ;
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> a;                               
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<a[s]<<endl;
    }
    return 0;
}
