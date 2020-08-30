//reverse printing of array elements
#include <iostream>
using namespace std;
int main() {
      int n,start,end;
cout<<"how many elements in array"<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cout<<"enter "<< i+1<<" input"<<endl;
    cin>>a[i];
}
start=0;
end=n-1;
for(int i=end;i>=0;i--){
    cout<<a[i]<<" ";
}
    return 0;
}