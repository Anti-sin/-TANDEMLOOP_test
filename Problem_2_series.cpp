#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>> n;
    int cnt=0, i=1;
    while(cnt<n){
        if(i%2!=0){
            cout<<i<<" ";
            cnt++;
        }
        i++;
    }
    return 0;
}