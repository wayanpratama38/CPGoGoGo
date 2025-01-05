#include <bits/stdc++.h>
using namespace std;

int main(){
    string dna;
    cin>>dna;
    int count=0;
    int highestStreak=0;
    if(dna.size()==1){
        cout<<highestStreak+1<<endl;
    }else{
        for(int i=0;i<dna.size()-1;i++){
            if(dna[i]==dna[i+1]){
                count++;
                if(count>highestStreak){
                    highestStreak=count;
                }
            }else{
                count=0;
            }     
        }
        cout<<highestStreak+1<<endl;
    }   
}