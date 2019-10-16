#include<bits/stdc++.h>
using namespace std;

void ac()
{
    int m;
    cin>>m;
    int a[m+10];
    for(int i=1;i<=m;i++)cin>>a[i];
    sort(a+1,a+m+1);
    int k;
    cin>>k;
    if(k==0)for(int i=1;i<=m;i++)cout<<a[i]<<' ';
    else for(int i=m;i>=1;i--)cout<<a[i]<<' ';
    cout<<endl;
    return ;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ac();
    }
    return 0;
}
