class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Since we are told there's always a pair that satisfies the condition - early stoppage
        //if(nums.size() == 2) return{0, 1}; 
        
        unordered_map<int, int> comp_idx;
        int complement = 0;

        for(int i = 0; i < nums.size(); ++i){
            complement = target - nums[i];
            auto it = comp_idx.find(complement);
            if(it != comp_idx.end()){
                return {it->second, i};
            }
            comp_idx[nums[i]] = i;
        }

        return {};
    }
};
