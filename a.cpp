#include "bits/stdc++.h"
using namespace std;
// edited by Nishanth 

int main(){
    vector<int> arr{1,4,5,68,2,1,5,88,9,100};
    int minn=INT_MAX, maxx=INT_MIN;
    for(int i=0; i<arr.size();i++){
        if(minn>arr[i]){
            minn=arr[i];
        }  //edited by naveen
        if(maxx<arr[i]){
            maxx=arr[i];
        }
    }
    cout<<"Max diff is: "<< (maxx-minn)<<endl;
    cout<<"The numbers are "<<maxx<<" and "<<minn;
    return 0; #modified by CS260
        
        
}

