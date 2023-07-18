
#include<bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int r,c;
    
    cin>>r>>c;
    
    vector<vector<int>> lunarArray(r,vector<int>(c));
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>lunarArray[i][j];
        }
    }
    
    int highest=INT_MIN;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            highest=max(highest,lunarArray[i][j]);
        }
    }
    
    long long sum=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (lunarArray[i][j] != 0 && lunarArray[i][j] % highest == 0 ) {
                sum += lunarArray[i][j];
            }
        }
    }
    
    cout<<"Maximum Element: "<<highest<<endl;
    cout<<"Sum of Divisible Elements: "<<sum;
    
    return 0;
}
