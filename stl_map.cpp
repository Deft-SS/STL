#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int> a;
    a["Naveen"]=75;
    a["Sahil"]=55;
    a["Singroha"]=88;
     a.insert({{"VED",1000},{"SARPANCH",100}});
    map<string,int> :: iterator it;
    for(it=a.begin();it!=a.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<a.size()<<"\n"<<a.max_size()<<"\n"<<a.empty();
   
    return 0;
} 


#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &a){                                //trees are used in map & hash tables are used in unordered map.
    cout<<a.size()<<endl;
     for(auto &pr : a){                                 //O(nlog(n))
        cout<<pr.first<<" "<<pr.second<<"\n";
    }
}

int main()
{
    map<int,string> a;
    a[1]="Naveen";                    //O(log(n))
    a[16]="Na";
    a[13]="Nav";
    a[2]="N";
   /* map<int,string>:: iterator it;
    for(it=a.begin();it!=a.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
    */
    a[3];
    a[13]="SINGROHA";
    auto it = a.find(13);             //O(log(n))
   /* if(it==a.end()){
        cout<<"no value"<<"\n";
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
    */
    a.erase(16);
    a.clear();
    print(a);

   
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> a;                               
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a[s]++;
    }
    for(auto pr: a){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
    return 0;
}

