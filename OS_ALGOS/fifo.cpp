/*

Page Replacement is the real estate of Algorithms.

Fifo is simple, the page that arrives the earliest has to leave first

frames are the pages that are loaded in memory, if current page or target is in there
THEN ITS A PAGE HIT

if target is not found then you evict the earliest page that arrived 



*/

#include<iostream>
#include<algorithm>>

using namespace std;

int main(){

int p, f, page_faults =0, index=0; // p is for pages and f for frames

cout<<"Enter Number of pages required"; //pages are what we look for
cin>> p;

cout<<"Enter Number of frames";// is the main set that we look in for the pages
cin>> f;

vector<int> pages(p);

vector<int> frames(f, -1); //all initialized to -1 as 0 is also a valid page number hence -1 to show shit is empty

/*
Its important that we check if frames has page or no

*/

cout<<"Enter the Reference string ie the pages"<<endl;
for(int i=0;i<p;i++){

cin >> pages[i];
}


for(int i=0;i<p;i++){
//looking for each page
bool ishit=false;


for(int j=0;j<f;j++){ // in ALL the frames

if(frames[j]==pages[i]){
    bool ishit=true;
}
break;

}
if(ishit!=true){
 frames[index]=pages[i];

 index=(index+1)%f; // circular pointer
 page_faults++;
}

}















}






