class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());  //sort by start
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        int prevInterval = 0; // last interval ka index

        for(int i = 1; i < intervals.size(); i++) {
            if(ans[prevInterval][1] >= intervals[i][0]) {
               // merge
               ans[prevInterval][1] = max(ans[prevInterval][1], intervals[i][1]);
            } 
            else {
               ans.push_back(intervals[i]);
               prevInterval++; // move to next
            }
        }
        return ans;        
    }
};
