class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxsum=0;
        int n=cardPoints.size();
        int r=n-1;
        for(auto i=0;i<k;i++){
            lsum = lsum+ cardPoints[i];
        }
        maxsum = lsum;
        for(auto i=k-1;i>=0;i--){
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[r];
            r=r-1;
        maxsum = max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};

