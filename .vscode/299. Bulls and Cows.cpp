#include<bits/stdc++.h>
using namespace std;
int main(){}


class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;   
        
        int n = min(secret.size(), guess.size());

        vector<int> countInSecret(10,0);
        vector<int> countInGuess(10, 0);

        for(int i=0; i<n; i++) {
            if(secret[i] == guess[i]) bulls++;
            else {
                countInSecret[secret[i] - '0']++;
                countInGuess[guess[i] - '0']++;
            }
        }

        for(int i=0; i<10; i++) {
            cows += min(countInSecret[i], countInGuess[i]);
        }

        string ans;
        ans = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return ans;
    }
};