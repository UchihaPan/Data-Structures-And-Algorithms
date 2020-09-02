#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return factorial(n-1)*n
}
int main() {
    cout<<"factorial of number is "factorial(3)<<endl;
    return 0;
}