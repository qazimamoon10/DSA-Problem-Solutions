class Solution{    
    public:    
        vector<int> getConcatenation(vector<int>& nums){  
             vector<int> ans;
             int lens = nums.size();
             for(int i = 0; i < 2 * lens;i++){
                  ans.push_back(nums[i % len]);
              }
              return ans;
           }
};