class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int,int> m;
        vector<int> ans;
        int count=0;
        for(int i=0 ; i<s.length();i++){
            m[s[i]]=i;
        }
        int end=0, prev=-1;
        for(int i=0;i<s.length();i++){
            end=max(end,m[s[i]]);
            if(i==end){
                ans.push_back(end-prev);
                prev=end;
            }

        }
        return ans;

    }
};