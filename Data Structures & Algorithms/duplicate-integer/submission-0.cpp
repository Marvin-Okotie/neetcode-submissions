class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> count_map;

        for(int i = 0; i < nums.size(); ++i){
            if(count_map[nums[i]] > 0){
                return true;
            }
            count_map[nums[i]]++; 
        }

    return false;
        
    }
};