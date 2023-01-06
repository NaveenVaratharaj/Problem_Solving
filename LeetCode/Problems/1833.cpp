// Maximum Ice Cream Bars

class Solution {
public:
    int maxIceCream(vector<int>& v, int coins) {
        sort(v.begin(), v.end());
        int icecreams = 0;

        for(auto i:v)
        {
            if(i <= coins)
            {
                icecreams ++;
                coins -= i;
            }
        }

        return icecreams;
    }
};