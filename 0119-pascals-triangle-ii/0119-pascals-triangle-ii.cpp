class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > v(rowIndex+1);
        int numb=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    v[i].push_back(1);

                }
                else{
                    
                    numb=v[i-1][j-1]+v[i-1][j];
                    v[i].push_back(numb);
                }
            }
        }
        return v[rowIndex];
    }
};