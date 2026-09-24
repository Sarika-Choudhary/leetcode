class Solution {
public:
vector<vector<int>> dp;
bool helper(vector<int> & stones, int lastindex, int currentindex){
    if(currentindex==stones.size() -1){
        return true;
    }
    if (dp[lastindex][currentindex]!=-1){
    return dp[lastindex][currentindex];
    }
    int lastjump=stones[currentindex]-stones[lastindex];
    int nextindex=currentindex+1;
    while(nextindex<stones.size()&&stones[nextindex]<=stones[currentindex]+lastjump+1){
        int nextjump=stones[nextindex]-stones[currentindex];
        int jump=nextjump-lastjump;
        if(jump>=-1&&jump<=1){
            if(helper(stones,currentindex,nextindex)){
                return true;
            }
        }
        nextindex++;
    }
    dp[lastindex][currentindex]=false;
    return false;
}
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        dp.assign(n, vector<int>(n, -1));
        if (stones[1] != 1) {
            return false;
        }
       return helper(stones,0,1) ;
    }
};