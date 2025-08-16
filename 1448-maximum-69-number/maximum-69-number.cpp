class Solution {
public:
    int maximum69Number (int num) {
        string chars = to_string(num);
        for(auto i=0;i<chars.length();i++){
            if(chars[i]=='6'){
                chars[i]='9';
                break;
            }

        }
        int nums = stoi(chars);
        return nums;
    }
};