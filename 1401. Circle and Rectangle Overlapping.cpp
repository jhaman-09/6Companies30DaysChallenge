#include<bits/stdc++.h>
using namespace std;
int main(){}

class Solution {
public:
    bool checkOverlap(int r, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearx = max(x1, min(x2, xCenter));
        int neary = max(y1, min(y2, yCenter));

        int distX = nearx - xCenter;
        int distY = neary - yCenter;

        // Pythogorous Theorem
        return distX * distX + distY * distY <= r * r; 
    }
};