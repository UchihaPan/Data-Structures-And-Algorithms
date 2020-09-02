#include <iostream>
using namespace std;
int main() {
    int n,b,m,a[100][100];
    cout<<"enter number of elements "<<endl;
    cin>>b;
    cout<<"enter no. of rows "<<endl;
    cin>>m;
    cout<<"enter no. of columns "<<endl;
    cin>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
  cout<<"enter for ("<<i <<" "<<j <<") element";

            cin>>a[i][j];

        }
    }
cout<<"elements are"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }

    
    return 0;
}