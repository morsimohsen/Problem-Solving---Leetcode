class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>m; 
        int l =0,Occurance=0,ans=0;
        
        for(int i =0 ;i < s.size() ; i++){
            
            m[s[i]]++;  // adding value to map
            Occurance=max(Occurance,m[s[i]]);
            
            if(i-l+1-Occurance > k){  
                m[s[l]]--; 
                l++; 
            }
            else ans=max(ans,i-l+1);
        }        
        return ans;  
    }
};