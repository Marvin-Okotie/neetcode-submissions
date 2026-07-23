class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> str_map;
        str_map.reserve(strs.size());

        for(auto& str: strs){ 
        string key(26,'\0');    //Use string instead of array to allow unordered_map(instead of map) use the default std::hash 
            for(char c : str){ 
                ++key[c - 'a']; 
            }
            str_map[key].push_back(move(str)); //Move to avoid copying str when we're not reusing it
        }

        for(auto& p: str_map){
            ans.push_back(move(p.second));
        }

        return ans;
    }
};
