#include<iostream>

using namespace std;



/*

Lets understand mathematical task at hand


you get an array with multiple 0's and 1's
there are all scrambled here and there
you need to put all the 1's on one side and the 0's on another in a single traversal
ok so how do we do that?

wherever I am I need to check neighbours

suppose all 0's go left and all 1's go right

if im 1

before   me   after

1       1      0

swap extremes

1 000000111



void segregator(int arr[], int n){
for(int i=1;i<n-1;i++){

if(arr[i]==1 && arr[i-1]==0){

    swap(arr[i],arr[i-1]);

}

}

}


int main(){


int arr[]={1,1,0,0,1,1,0,0,0,1,0,1};

int n= sizeof(arr)/sizeof(arr[0]);

segregator(arr, n);

cout<<"Here is the sorted array  "<<endl;

for (int i=0;i<n-1;i++){
cout<<" "<<arr[i]<<" ";
}


}

this doesnt bubble the one all the way forward 
we need a way to check either side when we are on a specific element


*/


void segregator(int arr[], int n){

//left is a pointer checks for 1 that shouldnt be thhere
//right is a pointer checks for 0 that shouldnt there
// do this traversal from both sides and close down its still one traversal
// a traversal doesnt have to be one sided

int left=0;
int right =n-1;

while(left<right){//This is done to make the pointers meet each other from either ends
while(left<right && arr[left]==0){//checking if left is o or no

 left++; //if it is lets move on checked all lefts  
}
while (left<right && arr[right]==1){

right--;//similar as above

}

if(left<right){// you keep coming from either ends and if the ends meet 
    //w/o then all is arranged if its still left,right that means theyre at wrong positions
swap(arr[left],arr[right]);

}
}

}





int main(){


int arr[]={1,1,0,0,1,1,0,0,0,1,0,1};

int n= sizeof(arr)/sizeof(arr[0]);

segregator(arr, n);

cout<<"Here is the sorted array  "<<endl;

for (int i=0;i<n-1;i++){
cout<<" "<<arr[i]<<" ";
}


}




