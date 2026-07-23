class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> str_map;
        //Using map allows us use an array(alpha_num) as the key but is a bit slower due to BST defualt arrangement

        for(auto& str: strs){ 
        array<int, 26> alpha_num = {0};
            for(auto& c : str){ 
                alpha_num[c - 'a']++; //Use array of chars(int/ascii representation) in the string as map key
            }
            string s_key = to_string(alpha_num[0]);
            for(int i = 0; i < 26; ++i){
                s_key += ',' + to_string(alpha_num[i]);
            }
            str_map[s_key].push_back(str); 
        }

        for(auto& p: str_map){
            ans.push_back(p.second);
        }

        return ans;
    }
};
