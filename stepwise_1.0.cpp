#include<bits/stdc++.h>
using namespace std;
int n,m;
double sum =0;
double sum_xy(double *arr,int k)
{
    double sum =0;
    int temp=k;
    for( int i=1;i<n;i++){
        sum= sum + (arr[0][k] * arr[k][i]);
    }
    return sum;
}
double sum_x(double * arr,int k ){
    double sum=0;
    for( int i=1;i<n;i++){
        sum=sum+ arr[k][i];
    }
    return sum;
}
double sum_y(double  * arr ){
    double sum=0;
    for( int i=0;i<m;i++){
        sum = sum + arr[0][i];
    }
    return sum;
}
double sum_x2(float *arr){
    for( i=0;i<n;i++){
        sum=sum+(x*x);
    }
    return sum;
}
int main()
{
 
    cout<<"Enter the number of dataset";
    cin>>m;
    cout<<"Enter the number of independent variables";
    cin>>n;
   
    double arr[m][n];
    double  * pred= new double [m];
     for( i=0;i<m;i++){
         cout<<"Enter the " << i <<" dataset";
        for(j=0;j<n;j++){
            cout<<"Enter the details of the dataset in 2D matrix form \n where First Column being dependent variable and corresponding Columns being the independent var";
            cin>>arr[i][j];
        }
        cout<<"\n";
        clrscr();
    }
    // calculation of a

    // calculation of b1,b2,b3....

    for(i=0,;i<m;i++){
        
         pred[i]+= (m*(sum_xy(arr,i)-((sum_x(arr,i)*sum_y(arr)))))
        
    }

    return 0;

}