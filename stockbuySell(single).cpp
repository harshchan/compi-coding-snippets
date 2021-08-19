class Solution {
public:
    int maxProfit(vector<int>& A) {
        int profit=0,min_so_far=99999,max_profit=0;
        for(int i=0;i<A.size();i++)
        {
            min_so_far=min(A[i],min_so_far);
            max_profit=max(max_profit,A[i]-min_so_far);
        }
        return max_profit;
    }
};
