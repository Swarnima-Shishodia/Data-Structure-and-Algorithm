class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {
                j=j+1;
                swap(nums[i],nums[j]);
            }
        }
        if(nums.size()==0)
            return 0;
        return j+1;
    }
};
