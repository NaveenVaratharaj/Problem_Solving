// Find First and Last Position of Element in Sorted Array


class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int n = v.size();
        vector <int> v1;
        int count = 0;

        int starting = -2;
        int ending = -2;

        for(int i=n-1; i>= 0; i--)
        {
            if(v[i] == target)
            {
                ending = i;
                ++count;
                break;
            }
        }

                
        for(int i=0; i<=n-1; i++)
        {
            if(v[i] == target)
            {
                starting = i;
                ++count;
                break;
            }
        }

        if(starting == -2 && count == 0) v1.push_back(-1);
        if(ending == -2 && count == 0) v1.push_back(-1);

        else if (count > 0)
        {
            v1.push_back(starting);
            v1.push_back(ending);

        }

        return v1;
    }
};