class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minr=0,minc=0;
        vector<int> arr;
        int maxr=matrix.size(),maxc=matrix[0].size();
        int tne=maxr*maxc;
        int count=0;
        maxr--;maxc--;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc && count<tne;i++){
                arr.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            for(int i=minr;i<=maxr && count<tne;i++){
                arr.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            for(int i=maxc;i>=minc && count<tne;i--){
                arr.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr && count<tne;i--){
                arr.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return arr;
    }
};