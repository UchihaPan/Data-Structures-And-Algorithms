//swapping 2 elements
#include <iostream>
using namespace std;
int main() {
    int second,first;
    cout<<"enter 1 st element"<<endl;
     cin>>first;
    cout<<"enter 2 nd element"<<endl;
    cin>>second;
    cout<<"before swapping elements are "<<first<<" "<<second<<endl;
        int temp;
        temp=first;
        first=second;
        second=temp;
     cout<<"after swapping elements are "<<first<<" "<<second<<endl;

    return 0;
}