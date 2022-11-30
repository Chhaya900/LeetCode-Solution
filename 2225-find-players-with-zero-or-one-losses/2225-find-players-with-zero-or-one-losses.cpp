class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
   
        vector<int> win,loss;
             vector<vector<int>>ans;
        map<int,int> mp1,mp2;
       for(int i =0;i<matches.size();i++)
       {
           mp1[matches[i][0]]++;
           mp2[matches[i][1]]++;
       }
        for(auto it :mp1)
        {
            if(mp2[it.first]==0)
            {
             win.push_back(it.first);   
            }
        }
        for(auto it :mp2)
        {
            if(mp2[it.first]==1)
            {
                loss.push_back(it.first);
            }
        }
        ans.push_back(win);
        ans.push_back(loss);
        return ans;
          
    }
};