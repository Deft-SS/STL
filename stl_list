#include <bits/stdc++.h>

using namespace std;
void display(list<int> &l){
    list<int>:: iterator it;
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(11);
    l.push_back(89);
    l.push_back(6);
    l.push_back(145);
    l.push_back(1);
    list<int>:: iterator it;
    it=l.begin();
    cout<<*it<<" ";
    it++;
    cout<<*it<<endl;
    display(l);
    l.pop_back();
    display(l);
    l.pop_front();
     display(l);
    
    list<int> l2;
    l2.push_back(33);
    l2.push_back(3);
    l2.push_back(63);
    l2.push_back(13);
    l2.push_back(39);
    list<int>:: iterator it2;
    it2=l2.begin();
    display(l2);
    l2.reverse();
    display(l2);
   /* it2=l2.begin();
    *it2=34;
    it2++;
    *it2=99;
    it2++;
    *it2=639;
    it2++;
    display(l2);
    l2.remove(99);
    display(l2);
    */
    
    l.sort();
    // NOT APPLICABLE sort(l.begin(),l.end());
    //display(l);
    
    l2.sort();
    //display(l2);
    
    l.merge(l2);
    display(l);
    
    l.reverse();
    display(l);
   
    
    return 0;
}
