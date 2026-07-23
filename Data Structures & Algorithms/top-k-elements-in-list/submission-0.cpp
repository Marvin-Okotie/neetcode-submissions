class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto& n : nums){
            freq[n] ++;
        }

        priority_queue<pair<int, int>> sort_freq;
        for(auto& [key, val] : freq){
           sort_freq.push({val,key});
        }

        vector<int> ans;
        for(int i = 0; i < k; ++i){
            pair<int,int> kv = sort_freq.top();
            ans.push_back(kv.second);
            sort_freq.pop();
        }

        return ans;
    }
};
