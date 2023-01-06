//Concatenation of the given array into a new array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
        vector <int> v1 = {};
        
        for(int i=0; i<v.size(); i++)
        {
            v1.push_back(v[i]);
        }
        
        for(int i=0; i<v.size(); i++)
        {
            v1.push_back(v[i]);
        }
        
        
        return v1;
    }
};