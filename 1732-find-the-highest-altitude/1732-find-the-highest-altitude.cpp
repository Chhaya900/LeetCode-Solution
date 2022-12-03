class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int ans=0,high=0;
        for (int i =0;i<gain.size();i++)
        {
            ans= ans+gain[i];
            high = max(ans,high);
        }
        return high;
    }
    
};