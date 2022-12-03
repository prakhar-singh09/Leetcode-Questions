class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        int mx;
        int ans=-1;
        for(auto it:nums){
            if(it%2==0)
            mp[it]++;
        }
        for(auto it:mp){
       mx= max(mx,it.second);
        }
       for(auto it:mp)
        {
           if(it.second==mx)
           {  ans= it.first;
              break;
           }
       }
            return ans;
       
    }
};