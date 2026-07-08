class Solution {
public:
    int maxDistance(string moves) {
        int x1=0,y1=0;
        int count=0;
        for(char x:moves){
            if(x=='U') ++y1;
            else if(x=='D') --y1;
            else if(x=='L') --x1;
            else if(x=='R') ++x1;
            else ++count;
        }
        return abs(x1) + abs(y1)+count;
    }
};