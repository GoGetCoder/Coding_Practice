#include "PrefixSum.h"

std::vector<bool> CPrefixSum::answerQueries(std::vector<int>& nums, std::vector<std::vector<int>>& queries, int limit)
{
    std::vector<int> prefix_sum = { nums[0] };
    for (int i = 1; i < nums.size(); i++)
    {
        int sum = prefix_sum.back() + nums[i];
        prefix_sum.push_back(sum);
    }

    std::vector<bool> result;
    for (auto& q : queries)
    {
        int left = q[0], right = q[1];
        int sum_left_to_right = prefix_sum[right] - prefix_sum[left] + nums[left];
        result.push_back(sum_left_to_right < limit);
    }

    return result;
}

int CPrefixSum::wayToSplitArray(std::vector<int>& nums)
{
    std::vector<int> prefix_sum = { nums[0] };
    for (int i = 1; i < nums.size(); i++)
    {
        int sum = prefix_sum.back() + nums[i];
        prefix_sum.push_back(sum);
    }

    int result{ 0 };
    for (int i = 0; i < nums.size()-1; i++)
    {
        int left_sum = prefix_sum[i];
        int right_sum = prefix_sum[prefix_sum.size() - 1] - prefix_sum[i];

        if (left_sum >= right_sum)
            result++;
    }

    return result;
}

int CPrefixSum::wayToSplitArrayOnlyInt(std::vector<int>& nums)
{
    int total_sum = { 0 };
    for (int i = 0; i < nums.size(); i++)
        total_sum += nums[i];

    int left_sum = 0, result = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        left_sum += nums[i];
        int right_sum = total_sum - left_sum;

        if (left_sum >= right_sum)
            result++;
    }

    return result;
}

std::vector<int> CPrefixSum::runningSum(std::vector<int>& nums)
{
    std::vector<int> running_sum = { nums[0] };
    for (int i = 1; i < nums.size(); i++)
        running_sum.push_back(running_sum.back() + nums[i]);

    return running_sum;
}

std::vector<int> CPrefixSum::getAverages(std::vector<int>& nums, int k)
{
    int last = nums.size() - 1;

    std::vector<int64_t> prefix;
    prefix.push_back(nums[0]);

    for (int i = 1; i < nums.size(); i++)
    {
        prefix.push_back(nums[i] + prefix.back());
    }

    std::vector<int> ans(nums.size());
    int count = 2 * k + 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i < k || (last - i) < k)
            ans[i] = -1;
        else
        {
            int left = i - k;
            int right = i + k;            
            int64_t sum = prefix[right] - prefix[left] + nums[left];
            int avg = sum / count;

            ans[i] = avg;
        }        
    }

    return ans;
}
