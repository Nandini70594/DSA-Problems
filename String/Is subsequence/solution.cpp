class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()){
            return true;
        } 

        if(t.empty()){
            return false;
        }

        int si=0, tj=0;
        while(si < s.size() && tj < t.size()){
            if(s[si] == t[tj]){
                si++;
                tj++;
            } else{
                tj++;
            }
        }
        if(si == s.size()){
            return true;
        } 
        return false;
        
    }
};