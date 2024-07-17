class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,n=numbers.size();
        vector<int> v;
        for(i=0;i<n;i++){
            auto f=binary_search(numbers.begin(),numbers.end(),target-numbers[i]);
            if(f){
                v.push_back(i+1);
                auto it=upper_bound(numbers.begin(),numbers.end(),target-numbers[i]);
                v.push_back(it-numbers.begin());
                return v;
            }
        }
        return v;
    }
};
