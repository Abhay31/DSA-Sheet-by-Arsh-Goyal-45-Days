class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int d = 0;
        for(int i = 0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it: m)
        {
            if(it.second > 1)
            {
                d = it.first;
                break;
            }
        }
        return d;
    }
};
