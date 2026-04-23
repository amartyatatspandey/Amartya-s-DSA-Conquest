#include<iostream>
using namespace std;

int factorial(int n);
int trailer(int m);
int main(){
int n;
    cout<<"Enter number for which you need to find trailing zeroes";
    cin>> n;
    cout<<"The answer is:"<<trailer(n)<<endl;
}



int trailer(int m){
int count=0;
for(int i=5;m/i>=1;i=5*i){
count= count+m/i;

}
return count;
}

int factorial(int n){
if(n==0||n==1){
    return 1;}


return n*factorial(n-1);
}