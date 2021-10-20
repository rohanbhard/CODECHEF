#include<iostream>
using namespace std;
//typedef long int li;

int main()
{
    int s;
    cin>>s;
    while(s--){
        int n;
        cin>>n;
        int triplets=0;
        for(int a=1;a<=n;a++){
            for(int b=a;b<=n;b+=a){
                if(b%a==0){
                    for(int c=a;c<=n;c+=b){
                        if(c%b==a){
                            triplets++;
                        }
                    }
                }
            }
        }
        cout<<triplets<<endl;
    }
  return 0;
}