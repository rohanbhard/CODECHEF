#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli i,j,T;
    cin>>T;
    while(T--)
    {
        lli n,p,k;
        cin>>n>>p>>k;
        lli c=0;
        lli q=p%k;
        q--;
        lli s=(((n-1)/k)*k);
        s=n-1-s;

        if(q>s)
        {
            c+=(s+1)*((n-1)/k+1)+(q-s)*((n-1)/k);

        }
        else
        {
            c+=((n-1)/k+1)*(q+1);
        }
        for(i=q+1;i<n;i+=k)
        {
            c++;
            if(i==p)
            {
                cout<<c<<endl;
                break;
            }
        }
    }
    return 0;
}