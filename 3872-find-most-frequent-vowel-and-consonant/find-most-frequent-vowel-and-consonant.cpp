class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> freq1;
        unordered_map<char,int>freq2;
        int sum,max1=0,max2=0;

        for(auto i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'  ||s[i]=='u'){
                freq1[s[i]]++;
            }
            else{
                freq2[s[i]]++;
            }
        }

        for(auto &i:freq1){
            
            if(max1<i.second){
                max1=i.second;
            }
        }

         for(auto &i:freq2){
          
            if(max2<i.second){
                max2=i.second;
            }
        }
        sum = max1+max2;
        return  sum ;
    }
};