#include<iostream>
#include<algorithm>
using namespace std;


int main(){

int p,f,page_faults=0;

cout<<"Enter Number of pages"<<endl;
cin>> p;

cout<<"Enter Number of frames"<<endl;
cin>> f;

vector<int> pages(p);
vector<int> frames(f,-1);

cout<<"Enter Reference string/pages"<<endl;
for(int i=0;i<p;i++){cin>>pages[i];}


for(int i=0;i<p;i++){

bool ishit=false;

for(int j=0;j<f;j++){

if(pages[i]==frames[j]){
    ishit=true;
    break; // dont forget break if you got page hit remember that lil bro
}

if(!ishit){
// now the game begins, you need to find a a victim to remove

int victim=-1; //no one is the victim rn

//but before removing anyone it is wise to check is there is any empty space in frames

bool found_empty=false;

for(int j=0;j<f;j++){

    if(frames[j]==-1){

        victim=j;
        found_empty=true;

    }

    if(found_empty=false){
//we need to now check which element is farthest in page array so we can remove it from frames

int farthest=i+1;//start checking from i+1 page 
victim=0;//first page is the victim as of now since we will iterate
  //similar but in reverse , pehle you checked for every page is there a frame
  //now its you check every frame and wether it repeats in pages array and then only youll keep it

  for(int k=0;k<f;k++){

for(int x=i+1;x<p;x++){

if(frames[k]==pages[x]){
if(k>farthest){

    farthest=x;
    victim=k;
}
break;
frames[victim]=pages[i];

page_faults++;
}

}



  }




    }



}







}





}









}




















}




