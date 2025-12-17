#include "CMonotonic.h"
#include <stack>

std::vector<int> CMonotonic::dailyTemperatures(std::vector<int> &temperatures)
{
    std::vector<int> ans(temperatures.size());
    std::stack<int> stk;

    for(int i=0; i<temperatures.size(); i++)
    {
        while(!stk.empty() && temperatures[stk.top()] < temperatures[i])
        {
            int dis = i - stk.top();
            ans[stk.top()] = dis;
            stk.pop();
        }

        stk.push(i);
    }

    return ans;
}
