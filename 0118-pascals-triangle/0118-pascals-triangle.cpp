class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > v(numRows);
        int numb=0;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || i==1 || j==i){
                    v[i].push_back(1);

                }
                else{
                    
                    numb=v[i-1][j-1]+v[i-1][j];
                    v[i].push_back(numb);
                }
            }
        }
        return v;
    }
};