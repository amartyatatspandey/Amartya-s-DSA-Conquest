#include<iostream>
using namespace std;

int factorial(int n);
int trailer(int m);

int main(){
int n;
int count;
    cout<<"Enter the number for which factorial is to be computed";
    cin>> n;
cout<<"The no. of trailing zeroes are:"<<trailer(factorial(n))<<endl;

}
int factorial(int n){
if (n==0||n==1){

    return 1;
}

return n*factorial(n-1);
}

int trailer(int m){
int count=0;
int temp=m;
if((temp%10)!=0){cout<<"No trailing zeroes"; }

while((temp%10)==0){ count++;
temp=temp/10;

}

return count;
}

