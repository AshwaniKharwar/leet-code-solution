#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i=0,j=0;
        while(i<word1.length()&&j<word2.length()){
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }
        if(i<word1.length()){
            while(i<word1.length()){
                ans += word1[i];
                i++;
            }
        }

        if(j<word2.length()){
            while(j<word2.length()){
                ans += word2[j];
                j++;
            }
        }

        return ans;
    }
};

int main(){
    Solution obj;
    string word1 = "abc";
    string word2 = "def";

    string ans = obj.mergeAlternately(word1,word2);
    cout<<ans<<"\n";
}