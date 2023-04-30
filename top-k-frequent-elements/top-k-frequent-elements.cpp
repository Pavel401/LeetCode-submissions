class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
            unordered_map<int, int> map;
            for (int num: nums)
            {
                map[num]++;
            }

           	// pair<first, second>: first is frequency,  second is number
            vector<vector < int>> bucket(nums.size() + 1);

            for (auto[a, b]: map)
            {

                bucket[b].push_back(a);
            }
            vector<int> res;
            for (int i = nums.size(); k; i--)
            {
                for (auto a: bucket[i])
                {
                    res.push_back(a);
                    k--;
                }
            }
            return res;
        }
};