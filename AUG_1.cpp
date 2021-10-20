#include<iostream>

using namespace std;

int main()
{
     int g1,s1,b1,g2,s2,b2,test;
    cin>>test;
    while(test)
    {
        cin>>g1>>s1>>b1;
        cin>>g2>>s2>>b2;
        if((g1+s1+b1)>(g2+s2+b2) ? 1 : 0 )
        {
            cout<<"1";
        }
        else
        cout<<"2";
        test--;
    }
    return 0;
}

