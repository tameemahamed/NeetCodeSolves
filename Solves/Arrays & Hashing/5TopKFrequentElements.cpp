class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        map<int, int> m;
        int n = nums.size(), i;
        for (i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>> p;
        for (auto it : m)
        {
            p.push_back({it.second,it.first});
        }
        sort(p.rbegin(),p.rend());
        for(auto it : p){
            if(k>0) ans.push_back(it.second);
            k--;
        }
        return ans;
    }
};
