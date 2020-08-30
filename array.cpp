//sum of array elements
#include <iostream>
using namespace std;
int main() 
{   int n;
cout<<"how many elements in array"<<endl;
cin>>n;
int a[n],sum=0;
for(int i=0;i<n;i++){
    cout<<"enter "<< i+1<<" input"<<endl;
    cin>>a[i];
}
for(int i=0;i<n;i++){
   sum=sum+a[i];

}
cout<<"sum of "<< n <<" elements are "<<sum<<endl;
    
    return 0;
}