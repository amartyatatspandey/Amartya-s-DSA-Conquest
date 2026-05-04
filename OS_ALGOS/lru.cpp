#include<iostream>
#include<algorithm>
using namespace std;


int main (){


int p,f, page_faults=0, timer=0;

cout << "Enter number of pages: "; cin >> p;
    vector<int> pages(p);
    cout << "Enter reference string/pages ";
    for(int i = 0; i < p; i++) cin >> pages[i];

    cout << "Enter number of frames: "; cin >> f;

    vector<int> frames(f,-1);
    vector<int> last_used(f,0); //each frame should have when it was last used


    for(int i=0;i<p;i++){

        bool ishit= false;
        int hit_index= -1;

        for(int j=0;j<f;j++){

            if(frames[j]==pages[i]){

                ishit=true;
                hit_index=j;
                last_used[hit_index]=timer+1; //protected the hit index by updating its timer value

            } break;

            if(!ishit){// eviction proccess begins you look for LRU pos

                int lru_pos=0;
                 for(int j=1;j<f;j++){

                    if(last_used[j]<last_used[lru_pos]){
                        lru_pos=j;
                    }
                 }

                 frames[lru_pos]= pages[i];
                 last_used[lru_pos]=timer=timer+1;
                 page_faults++;









            }





        }



    }













}
