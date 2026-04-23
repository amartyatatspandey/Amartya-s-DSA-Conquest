#include<iostream>
using namespace std;
int factorial(int n);

int main(){
int n;
    cout<<"Enter number";
    cin>> n;
cout<<"The Factorial for this number is:"<< factorial(n)<<endl;
    return 0;


}

int factorial(int n){

if(n==1||n==0){
    return 1;
}
return n*factorial(n-1);

}
