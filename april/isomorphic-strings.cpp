#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.size();
        char target[128] = {};
        for(int i=0; i<len; i++){
            char c = s[i];
            if(!target[c]){
                for(char val : target){
                    if(val == t[i]){
                        return false;
                    }
                }
                target[c] = t[i];
            }
            else if(target[c] != t[i]){
                return false;
            }
        }

        return true;
    }
};

int main(){
    Solution obj;

    string s = "foo";
    string t = "bar";

    bool ans = obj.isIsomorphic(s,t);
    cout<<ans<<"\n";
}