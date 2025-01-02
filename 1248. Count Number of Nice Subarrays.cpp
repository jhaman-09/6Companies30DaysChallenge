#include<bits/stdc++.h>
using namespace std;
int main(){}

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // Sliding Window
        auto atMost = [&](vector<int>& nums, int k) -> int {
            int i = 0;
            int j = 0;

            int countOdd = 0;
            int n = nums.size();
            int ans = 0;
            
            // Approach this problem like window with k sum
            //  nums[i] % 2 == 1: sum++
            for(int i=0; i<n; i++){
                // nums[i] % 2 == work as value of sum, if odd then increment
                countOdd += nums[i] % 2;

                while(countOdd > k) {
                    countOdd -= nums[j] % 2;
                    j++;
                }
                // window length
                ans += i - j + 1;
            }
            return ans;
        };

        return atMost(nums, k) - atMost(nums, k-1);
    }
};