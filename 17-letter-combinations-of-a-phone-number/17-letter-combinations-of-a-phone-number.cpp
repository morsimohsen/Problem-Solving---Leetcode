class Solution {
public:
    vector<string> letterCombinations(string digits) {
       vector<string>v(10);
        v[2]="abc";
        v[3]="def";
        v[4]="ghi";
        v[5]="jkl";
        v[6]="mno";
        v[7]="pqrs";
        v[8]="tuv";
        v[9]="wxyz";
        vector<string>ans;
        for(int i=0;i<digits.length();i++)
        {
            int x=digits[i]-'0';
            if(ans.size()==0)  
            {
                for(int j=0;j<v[x].size();j++)
                {
                   string t="";
                   t+=v[x][j];
                   ans.push_back(t);
                }
            }
            else{
                vector<string>ans1;
                for(auto y:v[x])
                {
                    for(int j=0;j<ans.size();j++)
                    {
                        ans1.push_back(ans[j]+y);  // each combination present in ans will create 
                    }
                }
                ans=ans1;
            }
            
        }
        return ans;
    }
};