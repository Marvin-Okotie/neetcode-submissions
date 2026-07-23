class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<array<int, 26>, vector<string>> str_map;

        for(auto& str: strs){ 
        array<int, 26> alpha_key = {0};
            for(auto& c : str){ 
                alpha_key[c - 'a'] ++; //Use array of chars(int/ascii representation) in the string as map key
            }
            str_map[alpha_key].push_back(str); 
        }

        for(auto& p: str_map){
            ans.push_back(p.second);
        }

        return ans;
    }
};
