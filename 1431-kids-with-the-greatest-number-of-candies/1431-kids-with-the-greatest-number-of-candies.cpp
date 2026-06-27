class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxCandy = candies[0];
        for(int i = 1; i < candies.size(); i++){
            if(candies[i] > maxCandy){
                maxCandy = candies[i];
            }
        }
        
        vector<bool> result;
        
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= maxCandy){
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        
        return result;
    }
};