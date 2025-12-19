#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,8,9,12,46,76,82,15,20,30};
    unordered_map<int,int> m;
    for(int i=1; i<=9; i++){
        m[i]=0;
        for(int j=0; j<nums.size(); j++){
            if (nums[j] % i == 0) {
                m[i]++;
            }
        }
    }

    for(int i=1; i<=9; i++){
        cout << i << ": " << m[i] << endl;
    }
    return 0;
}