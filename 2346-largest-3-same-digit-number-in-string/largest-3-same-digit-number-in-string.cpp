class Solution {
public:
    string largestGoodInteger(string num) {
       string sub="";
       string max_string = "";

       for(auto i=0;i<=num.length()-3;i++){
        if(num[i]==num[i+1] && num[i]==num[i+2]){
            string sub = num.substr(i,3);
        
        if(sub>max_string){
            max_string = sub;
        }
       }
       }
        return max_string;
    }
};