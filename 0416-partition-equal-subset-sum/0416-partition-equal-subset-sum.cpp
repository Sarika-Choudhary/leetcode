class Solution {
public:
int dp[201][20001];
bool solve(int i, int sum, vector<int>& nums){
    if(sum==0)
    return true;
    if(i==nums.size()||sum<0)
    return false;
    if(dp[i][sum]!=-1)
    return dp[i][sum];
    return dp[i][sum]=solve(i+1,sum-nums[i],nums)||solve(i+1,sum,nums);

}
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for (int x : nums)
            total += x;
        if (total % 2 != 0)
            return false;
        memset(dp, -1, sizeof(dp));
        return solve(0, total / 2, nums);
    }
};