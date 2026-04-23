#include<iostream>

using namespace std;
/*In the Approach below I simply counted then I overwrote the array

 O(n) cause one loop to count rest is just overwriting




*/
void segregator(int arr[], int n){

int cnt0=0, cnt1=0, cnt2=0;

for(int i=0;i<n;i++){

  if(arr[i]==0){cnt0++;}
  else if(arr[i]==1){cnt1++;}
  else{cnt2++;} 
}

int j=0;
while(cnt0--){arr[j]=0;}
while(cnt1--){arr[j]=1;}
while(cnt2--){arr[j]=2;}
}


/*
The Count and overwrite approach requires 2 passes of data and
is unstable for complex data swapping seems better

DUTCH NATIONAL FLAG 3 Pointer Approach

we maintain 3 zones:

low: everything below low is a zero
mid:everything between low and mid is 1
high everything above high is a 2

we have defined these ranges and then as we go through the data we sort 
in one nice pass

if 0 spotted it needs to be below zero hence swap and increment low
if 1 spotted move mid ahead to put it in the middle zone
if 2 spotted move swap with high and swap high backward
*/
void dutch_national_flag(int arr[], int n){

int low=0, mid=0, high=n-1;

while(mid<=high){//mid is following high to explore territory

if (arr[mid]==0){

   swap(arr[mid],arr[low]);
   mid++;
   low++; 
}
else if(arr[mid]==1){
mid++;
}
else{
//arr[mid]==2 
   swap(arr[high],arr[mid]);

   high--;

}

}

}



//Driver code

int main(){



}




