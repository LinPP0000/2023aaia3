//week11-4.cpp學習計畫 Math 第五題
//1232. Check If It Is a Straight Line
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        //「相似三角形」小的:大的==小的:大的
        int x0=coordinates[0][0],y0= coordinates[0][1];
        int x1=coordinates[1][0],y0= coordinates[1][1];
        int N =coordinates.size();
        for(int i=2;i<N;i++){
            int x2=coordinates[i][0],y2= coordinates[i][1];
            if(x1-x0)*(y2-y0)!=(y1-y0)*(x2-x0) return fales;
        }
        return true;
    }
};
