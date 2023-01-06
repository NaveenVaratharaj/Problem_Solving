// Largest Number At Least Twice of Others

class Solution {
public:
    int dominantIndex(vector<int>& v) {
        int n = v.size();
        int maxi = INT_MIN;
        int index;
        int count = 0;

        for(int i=0; i<n; i++)
        {
            if(v[i] > maxi)
            {
                maxi = v[i];
                index = i;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(v[i] != maxi)
            {
                if(v[i]*2 <= maxi)
                {
                    ++count;
                }

                if(count == n-1)
                {
                    return index;
                }
            }
        }
        return -1;
    }
};