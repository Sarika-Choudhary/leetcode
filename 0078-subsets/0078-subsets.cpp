class Solution {
public:
vector<vector<int>> result;
void solve(vector<int> &nums, int i,vector <int> temp){
    if(i==nums.size()){
        result.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    solve(nums,i+1,temp);
    temp.pop_back();
    solve(nums,i+1,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        solve(nums,0,temp);
        return result;
    }
};
/*### Approach

Use backtracking with a take-or-skip approach. At each index, first include the current element and recursively move to the next index. Then remove the element to backtrack and recursively explore the case where the current element is not included. When all elements have been processed, add the current subset to the result.

### Intuition

Every element has exactly two choices: either it is included in the subset or it is not. Exploring both choices for every element generates all possible subsets. The `temp` vector stores the current subset, while `result` stores all the generated subsets.

### Time Complexity

There are `2^n` possible subsets, and copying each subset can take up to `O(n)` time. Therefore, the time complexity is `O(n × 2^n)`.

### Space Complexity

The recursion depth and the temporary subset can take up to `O(n)` space, excluding the space required to store the output. Therefore, the auxiliary space complexity is `O(n)`.
*/