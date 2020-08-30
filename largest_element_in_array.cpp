//largest element in array 
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    int largest;
    largest =INT32_MIN;
cout<<"how many elements in array"<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cout<<"enter "<< i+1<<" input"<<endl;
    cin>>a[i];
}


for(int i=0;i<n;i++){
    if(a[i]>largest){
        largest=a[i];
    }
}
cout<<"largest element is "<<largest<<endl;

    return 0;
}