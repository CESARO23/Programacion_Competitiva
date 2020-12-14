#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 2) return true;
        int x1 = coordinates[0][0], y1 = coordinates[0][1];
        int x2 = coordinates[1][0], y2 = coordinates[1][1];
        int x3 = coordinates[0][0], y3 = coordinates[0][1];
        bool lineal = true;
        for(int i=2; i<coordinates.size(); i++){
            int x4 = coordinates[i][0], y4 = coordinates[i][1];
            if(((x1-x2)*(y3-y4) - (y1-y2)*(x3-x4)) != 0){
                lineal = false;
                break;
            }
        }
        return lineal;
    }
};
