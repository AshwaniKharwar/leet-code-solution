#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int leftSum = 0;
       int rightSum = 0;

       int i=nums.size()-1;
       while(i>=0){
           rightSum += nums[i];
           i--;
       } 

       i=0;
       while(i<nums.size()){
           rightSum -= nums[i];
           if(leftSum == rightSum){
               return i;
           }
           leftSum += nums[i];
           i++;
       }

       return -1;
    }
};

int main(){
    Solution obj;

    vector<int> arr = {1,7,3,6,5,6};

    int ans = obj.pivotIndex(arr);
    cout<<ans<<"\n";
}