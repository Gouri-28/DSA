class Solution {
public:
    int dp[501][501];
    int f(int i,int j,vector<int>& stoneValue, vector<int> &prefix){
        //when one stone left or range becomes one
       if(i>=j)return 0;
      
      if(dp[i][j]!=-1)return dp[i][j];
     
       int ans=0;
       
       //to keep track of the maximum ans alice can get as we always choose smaller part for poor alice
       int maxi=0;

       for(int k=i;k<j;k++){
         //sum of part 1 using prefix to avoid loop
         int part1=prefix[k]-((i>0)?prefix[i-1]:0);

         //part2 sum=totalsum-part1
         int part2=(prefix[j]-((i>0)?prefix[i-1]:0))-part1;

         //now we will choose minimum of these parts for alice to store in ans 
          
          if(part1==part2){
              ans=part1+max(f(i,k,stoneValue,prefix),f(k+1,j,stoneValue,prefix));
          }
          else if(part1>part2){
              ans=part2+f(k+1,j,stoneValue,prefix);
          }
          else{
             ans=part1+f(i,k,stoneValue,prefix);
          }
          
         // then we find the partition where in these
         //partitions  our alice gets max of them thats why we are using maxi
          //to keep the track of the partition which will give us the maximum value as we are always picking smaller part 
          //for alice

          maxi=max(maxi,ans);
       }
        
        return dp[i][j]=maxi;
    }
    int stoneGameV(vector<int>& stoneValue) {
        int n=stoneValue.size();

        memset(dp,-1,sizeof(dp));

        vector<int> prefix(n,0);
          
          prefix[0]=stoneValue[0];
        for(int i=1;i<n;i++)prefix[i]=stoneValue[i]+prefix[i-1];
        return f(0,n-1,stoneValue,prefix);
    }
};