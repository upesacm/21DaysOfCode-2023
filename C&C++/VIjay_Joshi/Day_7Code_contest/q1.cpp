#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int sumSmall_Large(int arr[],int n){
    int min_num=INT_MAX;
    int max_num=INT_MIN;
    int min_index=0;
    int max_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_num){
            max_index=i;
        max_num=arr[i];
        }
        if(min_num>arr[i]){
            min_index=i;
        min_num=arr[i];
        }
    }
    return min_index+max_index;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=sumSmall_Large(arr,n);
    cout<<ans;
    return 0;
}
