class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int twenty=0;

        for(auto i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                if(five){
                    ten=ten+1;
                    five=five-1;
                }
                else{
                    return false;
                }
            }
            else{
                if(five && ten){
                    twenty = twenty+1;
                    ten=ten-1;
                    five=five-1;
                }
                else if(five>=3){
                    five=five-3;
                }
                else{
                    return false;
                }
            }

        }
        return true;
    }
};