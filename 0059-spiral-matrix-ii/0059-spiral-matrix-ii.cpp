class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr=0,minc=0;
        vector<vector<int>> matrix(n,vector<int>(n));
        int maxr=n,maxc=n;
        int tne=maxr*maxc;
        int count=1;
        maxr--;maxc--;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc && count<tne+1;i++){
                (matrix[minr][i]=count);
                count++;
            }
            minr++;
            for(int i=minr;i<=maxr && count<tne+1;i++){
                (matrix[i][maxc]=count);
                count++;
            }
            maxc--;
            for(int i=maxc;i>=minc && count<tne+1;i--){
                (matrix[maxr][i]=count);
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr && count<tne+1;i--){
                (matrix[i][minc]=count);
                count++;
            }
            minc++;
        }
        return matrix;
    }
    
};