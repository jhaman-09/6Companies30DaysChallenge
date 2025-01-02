#include<bits/stdc++.h>
using namespace std;
int main(){}
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp = nums;
        sort(begin(temp), end(temp));

        int n = nums.size();

        int i;
        // even length
        if(n%2 == 0) i = n/2 - 1;
        // odd lenght
        else i = n/2;
        int j = n - 1;

        int k = 0;
        while(k < n) {
            // even index
            if( k % 2 == 0) {
                nums[k++] = temp[i--];
            }
            // odd index
            else nums[k++] = temp[j--];
        }
    }
};