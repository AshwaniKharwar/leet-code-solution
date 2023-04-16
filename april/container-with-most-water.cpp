#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0, r = height.size()-1;

        while(l<r){
            int minValue = min(height[l],height[r]);
            int tempAns = r-l;
            ans = max(ans,tempAns*minValue);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return ans;
    }
};

int main(){
    Solution obj;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<< obj.maxArea(height);
}