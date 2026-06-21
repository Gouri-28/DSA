class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int c=0; 
        sort(costs.begin(),costs.end());

        for(auto i=0;i<costs.size();i++){
               if(coins>=costs[i]){
                coins = coins - costs[i];
                c++;
               }
               else{
                break;
               }
    
        }
        return c;
    }
};