#include<bits/stdc++.h>
using namespace std;

int main(){
    int length = 5;
    int arrAns[length] = {1,2,3,4,5};
    int arr[length];
    int count = 0;
    vector<int> vec;
    for(int i=0;i<length;i++){   
        cin>>arr[i];
        if(arr[i]!=arrAns[i]){
            count++;
            vec.push_back(i);
        }
    }
    if(count==0){
        cout<<"No"<<endl;
    }else if(count==2){
        if(abs(vec[0]-vec[1])!=1){
            cout<<"No"<<endl;
        }else{
            swap(arr[vec[0]],arr[vec[1]]);
            if(arr[0]==arrAns[0] && arr[1]==arrAns[1] && arr[2]==arrAns[2] && arr[3]==arrAns[3] && arr[4]==arrAns[4]){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }else{
        cout<<"No"<<endl;
    }
}