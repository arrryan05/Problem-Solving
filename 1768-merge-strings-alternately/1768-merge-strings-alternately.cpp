class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        bool flag=true;
        int i=0,j=0;
        while(i<word1.length()&&j<word2.length()){
            if(flag){
                res+=word1[i];
                i++;
            }
            else{
                res+=word2[j];
                j++;
            }
            flag=!flag;
        }
        while(i<word1.length()){
            res+=word1[i];
            i++;
        }
        while(j<word2.length()){
            res+=word2[j];
            j++;
        }
        return res;
    }
};