class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
      int lb=0,ub=n-1;
      while(lb<=ub){
        int mid=(lb+ub)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]<target)
        lb=mid+1;
        else
        ub=mid-1;
      }
      return lb;
    }
};