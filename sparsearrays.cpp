#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for (int i=0; i<n;i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin>>q;
    for( int i=0; i<q;i++)
    {
        string x;
        cin>>x;
        int count=0;
        for (int i=0;i<n;i++)
        {
            if (x==v[i])
                count++;
        }
        cout<<count<<endl;
    }

}