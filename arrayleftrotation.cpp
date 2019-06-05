#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    k = k%n;
    int temp[k];
    for (int i=0;i<k;i++)
    {
        temp[i]=a[i];
    }
    for (int i=0;i<n-k;i++)
    {
        a[i]=a[i+k];
    }
    int j=0;
    for (int i=n-k;i<n;i++)
    {
        a[i] = temp[j];
        j++;
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}