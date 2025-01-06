#include<bits/stdc++.h>
using namespace std;

int main(){
    // Initialization
    int length;
    vector<int>odd;
    vector<int>even; 

    // Input 
    cin>>length;

    // Check condition
    if(length==3 or length==2){
        cout<<"NO SOLUTION";
    }else{
        // Check odd and even
        for(int i=length ;i>=1;i--){
            if(i%2==0){
                even.push_back(i);
            }else{
                odd.push_back(i);
            }
        }

        /// Odd output
        for(int i=0;i<odd.size();i++){
            cout<<odd[i]<<" ";
        }

        // Even output
        for(int i=0;i<even.size();i++){
            cout<<even[i]<<" ";
        }
    }
    
}