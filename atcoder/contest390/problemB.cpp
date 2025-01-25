#include<bits/stdc++.h>
using namespace std;

bool GeometricSequence(double ratio,int times,int a,double arr[]){
    for(int i=0;i<times;i++){
        int temp = round(a*pow(ratio,i));
        cout<<temp<<" "<<arr[i]<<endl;
        if(arr[i]!=temp){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==2){
        cout<<"Yes"<<endl;
    }else{
        double ratio = arr[1]/arr[0];
        cout<<ratio<<endl;
        if(GeometricSequence(ratio,n,arr[0],arr)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}