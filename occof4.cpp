#include<iostream>
using namespace std;
typedef long long int lli;
#include<vector>
int main()
{
    lli n,i=0;
    cin>>n;
    
    vector <int>arr(n);
    for(i=0;i<n;i++){
         cin>>arr[i];
    }
    i=0;
    //cout<<arr[0];
    while(i<n)
    {
        int last=0,count=0;
        while(arr[i]){
            last=arr[i]%10;
            if(last==4)
            {
                count++;
            }
            arr[i]/=10;
        }
        i++;
        cout<<count<<endl;
    }
    return 0;
}