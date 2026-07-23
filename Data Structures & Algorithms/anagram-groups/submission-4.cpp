class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> str_map;
        str_map.reserve(strs.size());

        for(auto& str: strs){ 
        string key(26,'\0');
            for(auto& c : str){ 
                key[c - 'a']++; //Use array of chars(int/ascii representation) in the string as map key
            }
            str_map[key].push_back(move(str)); 
        }

        for(auto& p: str_map){
            ans.push_back(move(p.second));
        }

        return ans;
    }
};
