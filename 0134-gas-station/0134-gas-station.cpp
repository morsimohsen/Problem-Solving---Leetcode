class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size(), total_gas = 0, total_cost = 0;
        for (int i=0;i<n;i++)
        {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if (total_cost > total_gas)
            return -1;
        int c=0,ans=0;
        for(int i=0;i<n;i++)
        {
            c+=gas[i]-cost[i];
            if(c<0)
            {
                ans=i+1;
                c=0;
            }
        }
        return ans;
    }
};