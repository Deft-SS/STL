using namespace std;
void display(vector<int> a){
     for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    vector<int> a;
    int b;
    for(int i=0;i<4;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    display(a);
    cout<<endl;
    auto it=a.begin();
    a.insert(it+1,3,80);
    display(a);

   /* for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;*/
}
