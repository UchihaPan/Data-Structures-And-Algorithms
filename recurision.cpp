#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return factorial(n-1)*n;
}
int fibonacci(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int power(int x,int n){
    if(n==0){
        return 1;
    }
    return power(x,n-1)*x;
}
int nodigits(int n){
    if(n==0){
        return 0;
    }
    return nodigits(n/10)+1;
}
int sumofdigits(int n){
    if(n==0){
        return 0    ;
    }
    return sumofdigits(n/10)+n%10;
}
int multiplication(int m,int n){
    if(n==0){
        return 0   ;
    }
    return multiplication(m,n-1)+m;
}
int countzero(int n){
    if(n==0){
        return 0;
    }
    int count=0;
    int answer=countzero(n/10);
    int lastdigit=n%10;
    if(lastdigit==0){
        return answer+1;
    }else{
            return answer;

    }
}
double geometric_sum(int n){
    if(n==0){
            return 1;
    }
    return geometric_sum(n-1)+(1.0/pow(2,n));
    
}
    int main() {
    cout<<"factorial of number is "<<factorial(3)<<endl;
    cout<<"fibonacci of number is "<<fibonacci(4)<<endl;
    cout<<"power of number is "<<power(4,2)<<endl;
    cout<<"no of digits in number is "<<nodigits(4)<<endl;
    cout<<"sum of digits in number is "<<sumofdigits(14)<<endl;
    cout<<"multiplication of number is "<<multiplication(4,2)<<endl;

    cout<<"geometric sum of  number is "<<geometric_sum(3)<<endl;







    return 0;
}