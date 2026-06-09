class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //O(nlogn)
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        //O(2n)

        if(s.size()!=t.size()){
            return false;
        }

        vector<int>count_arr(26,0);

        for(int i=0;i<s.size();i++){
            count_arr[s[i]-'a']++;
            count_arr[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(count_arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};