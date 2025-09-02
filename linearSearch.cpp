#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int>&arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target)return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    bool ans=linearSearch(arr,3);
    if(ans==1)cout<<"It is present";
    else cout<<"It is not present";

    return 0;
}