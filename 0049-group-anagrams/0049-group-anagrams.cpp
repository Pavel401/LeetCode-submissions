class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          vector<vector<string>> ans;

          unordered_map<string,vector<string>> map;

        if(strs.size()==1){

            vector<string> sol;
            sol.push_back(strs[0]);

            ans.push_back(sol);
           
            return ans;
        }

        for(auto x: strs){
            string sortedString= x;

            sort(sortedString.begin(),sortedString.end());

            map[sortedString].push_back(x);
        }

        for (auto& entry : map) {
            ans.push_back(entry.second);
        }




        

        return ans;
    }
};