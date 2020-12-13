#include<iostream>
#include<vector>

useing namespace std;
// 1 if you were only permitted to complete at most transaction
class solution{
    public:
    int maxprofit(vector<int>& prices){
        int maxpro =0;
        int minprice =INT_MAX;
        for(int i=0;i<prices.size();i++);
        minprice =min(minprice,prices[i]);
        maxpro = max(maxpro,prices[i] - minprice);

    }
    return maxpro;
}

// 2 you may complete as many transections as you like

class solution {
    public:

    int maxprofit(vector<int >& prices){
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);

        int n = prices.size();
        int diff =0;
        for(int i=1;i<n;++i)
        {
            if(prices[i]>prices[i-1])
            diff += prices[i]-prices[i-1];
        }
        return diff;

    }
};