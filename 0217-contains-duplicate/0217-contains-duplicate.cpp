class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }

    ///So Basically set removes all the duplicate so suppose we start with [1,2,2,3,4,5]. set will be [1,2,3,4,5] 

    //Now we just have to check if the original array have more than set 

    // Each operation in set is O ( log n) , so for our case N of of computation == o ( n x log n) rest all o(1) 
};