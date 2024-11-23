class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
          int ans = 0, low = prices[0];
        
        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i]>low)
            {
                ans+= (prices[i] - low);
                low = prices[i];
            }
            else low = prices[i];
            
        }
        
        return ans;
    }
};