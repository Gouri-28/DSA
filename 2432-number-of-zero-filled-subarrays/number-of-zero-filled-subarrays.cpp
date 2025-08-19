class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count =0,length=0;

        for(int x:nums){
            if(x==0){
                length++;
                count  = count +length;
            }
            else{
                length=0;
            }
        }
        return count;
    }
};