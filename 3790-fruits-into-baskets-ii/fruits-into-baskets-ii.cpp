class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count=0;
        for(auto i=0;i<fruits.size();i++){
            int j=0;
            while(j<baskets.size() && fruits[i]>baskets[j])
            j++;
            if(j==baskets.size()){
                count++;
                continue;
            }
             baskets[j]=0;
        }
      return count;
    }
};