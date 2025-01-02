#include<bits/stdc++.h>
using namespace std;
int main(){}

class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int j = 0;

        // TC = O(n^3)
        for(int i=0; i<n; i++) {
           for(int j=i; j<n; j++) {
            // now check left part
            int prev = -1;
            bool flag = true;
            for(int k=0; k<i; k++) {
                if(prev >= nums[k]) {
                    flag = false;
                    break;
                }
                prev = nums[k];
            }

            // now check right part 
            for(int k=j+1; k<n; k++) {
                if(prev >= nums[k]) {
                    flag = false;
                    break;
                }
                prev = nums[k];
            }
            if(flag) ans++;
           }
        }
        return ans;
    }
};
