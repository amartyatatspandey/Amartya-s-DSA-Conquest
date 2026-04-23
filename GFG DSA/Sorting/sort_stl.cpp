#include<iostream>
#include<algorithm>

using namespace std;


//Syntax to sort an array
// sort (arr, arr+n)
/*
Sorting a vector
sort(vec.begin(),vec.end())
*/

int main(){

int arr[]={10,3,5,6,4,3,5,3,5,3,5,53,5,3,56,89,7643,887,334467,8,1,0,3,90};

int n = sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);

cout<<"The sorted Array is as follows"<<endl;

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

vector<int>vec= {10,3,4,3,5,5,6,47,46,35,3566777,445677,433,66,43,34,77,43,22,56,343};

sort(vec.begin(), vec.end());

for(int j=0;j<vec.size();j++){

    


}

}
