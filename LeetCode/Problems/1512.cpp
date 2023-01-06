//Number of Good Pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(j!=i)
                {
                    if(nums[i] == nums[j])
                    {
                        count++;
                    }
                }
            }
        }
        
        return count;
    }
};