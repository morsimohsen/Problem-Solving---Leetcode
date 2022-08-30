class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1, count=0;
        while(s[i]==' ') i--;
        while(i!=-1 && s[i]!=' ' )
        {
            count++;
            i--;
        }
        return count;
    }
};