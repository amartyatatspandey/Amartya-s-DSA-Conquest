#include<iostream>
#include<algorithm>
using namespace std;


/*
Before the code its important that we understand 
the actual math behind the problem


We have to find the min difference bw any 2 pairs, 

how would I approach this?

1. Calculate all possible pairs and compute this is very brute force tho
2. something better must be there
I should obviously just arrange them in ascneding or descending order and then move on


*/

int main(){

int arr[]={10,453,23,3,2,4,5,6,86,333,577,65432,45678,65434,75432,455,456};

int n= sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);

int diff= INT_MAX;
for(int i=0;i<n-1;i++){// an array is zero indexed so make n-1 is the last box

if(arr[i+1]-arr[i]<diff){

    diff= arr[i+1]-arr[i];
}
}




cout<<"Minimum difference in this array is "<<diff<<endl;

return 0;

}










