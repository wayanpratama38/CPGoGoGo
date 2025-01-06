#include <bits/stdc++.h>
using namespace std;

int main(){
    // Initialization
    int arrayLength;
    long long moves=0;
    vector<int>vector;

    // Input array length
    cin>>arrayLength;

    // Input vector
    for(int i=0;i<arrayLength;i++){
        int temp;
        cin>>temp;
        vector.push_back(temp);

        // Checking condition for moves
        if(vector[i]<vector[i-1] && i!=0){
            moves+=vector[i-1]-vector[i];
            vector[i]+=vector[i-1]-vector[i];
        }
    }
    
    // Output result
    cout<<moves<<endl;
    return 0;
}