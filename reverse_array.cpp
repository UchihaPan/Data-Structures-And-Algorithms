//reverse array
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
 cout<<"before reverse"<<endl;
for(int i=0;i<n;i++){

    cout<<a[i]<<" ";
}
cout<<endl;
start=0;
end=n-1;
while(start<end){
    swap(a[start],a[end]);
    start++;
    end--;
}
cout<<"after reverse"<<endl;
for(int i=0;i<n;i++){

    cout<<a[i]<<" ";
}
return 0;
}