#include <bits/stdc++.h>
using namespace std;

int main(){
    // Initialization
    string dna;
    int count=0;
    int highestStreak=0;
    
    // Input string
    cin>>dna;

    // Checking the highest streak
    if(dna.size()==1){
        cout<<highestStreak+1<<endl;
    }else{
        for(int i=0;i<dna.size()-1;i++){
            if(dna[i]==dna[i+1]){
                // Increment count
                count++;

                // Updating highest streak
                if(count>highestStreak){
                    highestStreak=count;
                }
            // Reset count if the next character is different
            }else{
                count=0;
            }     
        }
        // Output the highest streak
        cout<<highestStreak+1<<endl;
    }   
}