class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> s_map, t_map; 

        for(int i = 0; i < s.size(); ++i){
            s_map[s[i]]++;
            t_map[t[i]]++;
        }

        for(auto [k, v] : s_map){
            auto t_it = t_map.find(k);
            if( t_it == t_map.end() || t_it->second != v ) return false;
        }

        return true;

    }
};
