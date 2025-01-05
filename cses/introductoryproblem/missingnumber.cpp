#include <bits/stdc++.h>
using namespace std;

int main(){
    // Initialization
    int number;
    int answer = 0;
    vector<int> vectorNumber;

    // Input vector long    
    cin>>number;

    // Push back number into vector
    for(int i=0;i<number-1;i++){
        int temp;
        cin>>temp;
        vectorNumber.push_back(temp);
    }
    
    // Sort the vector
    sort(vectorNumber.begin(),vectorNumber.end());
    
    // Condition if the vector size is only 1
    if(vectorNumber.size()==1){
        if(vectorNumber[0]==1){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }else{
        // Checking the missing number
        for(int i=0;i<vectorNumber.size();i++){
            if(i==vectorNumber.size()-1){
                if(vectorNumber[i]!=number){
                    answer = number;
                }
                break;
            }else{
                if(vectorNumber[i]+1==vectorNumber[i+1]){
                    continue;
                }else{
                    answer = vectorNumber[i]+1;
                    break;
                }
            }
        }
        
        // Output the answer
        cout<<answer<<endl;
    }
    return 0;
}