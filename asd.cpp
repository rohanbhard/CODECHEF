#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int a[size+1],b[size+1];
    cout<<"\n enter the elements of the first array ";
    for(int i=0;i<size;i++) 
    cin>>a[i];
    cout<<"\n enter the elements of the second array ";
    for(int i=0;i<size;i++) 
    cin>>b[i];
    cout<<"Before Swapping: "<<endl;
    cout<<"elements of array 1:"<<endl;
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Elements of array 2:"<<endl;
    for(int i=0;i<size;i++) cout<<b[i]<<" ";
    cout<<endl;
    
    for(int i=0;i<size;i++)
    {
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    cout<<"After Swapping: "<<endl;
    cout<<"elements of array 1:"<<endl;
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Elements of array 2:"<<endl;
    for(int i=0;i<size;i++) cout<<b[i]<<" ";
    cout<<endl;

    return 0;
}