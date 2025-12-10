#include "SlidingWindow.h"

int CSlidingWindow::findLenOfLongestSum(std::vector<int>& nums, int k)
{
    int max_len = 0, left = 0, cur_sum = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        cur_sum += nums[right];

        while (cur_sum > k)
        {
            cur_sum -= nums[left];
            left++;
        }

        max_len = std::max(max_len, right - left + 1);
    }

    return max_len;
}

int CSlidingWindow::longestOnes(std::string s)
{
    int left = 0, max_len = 0, num_of_zeros = 0;
    for (int right = 0; right < s.size(); right++)
    {
        if (s[right] == '0')
            num_of_zeros++;

        while (num_of_zeros > 1)
        {
            if (s[left] == '0')
                num_of_zeros--;
            left++;
        }

        max_len = std::max(max_len, right - left + 1);
    }

    return max_len;
}

int CSlidingWindow::numSubarrayProductLessThanK(std::vector<int>& nums, int k)
{
    int result = 0, left = 0, cur_product = 1;
    for (int right = 0; right < nums.size(); right++)
    {
        cur_product *= nums[right];

        while (cur_product >= k)
        {
            cur_product /= nums[left];
            left++;
        }

        result += (right - left + 1);
    }

    return result;
}

int CSlidingWindow::numSubarraySumIsK(std::vector<int>& nums, int k)
{
    int result = 0, left = 0, cur = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        cur += nums[right];

        if (cur < k)
            continue;
        else if (cur > k)
        {
            while (cur > k)
            {
                cur -= nums[left];
                left++;
            }
        }
        if (cur == k)
            result++;
        
    }

    return result;
}

int CSlidingWindow::sumOfLargestSubarrayWithLenK(std::vector<int>& nums, int k)
{
    int sum = 0, max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    max_sum = sum;
    for (int i = k; i < nums.size(); i++)
    {
        sum += (nums[i] - nums[i - k]);
        max_sum = std::max(max_sum, sum);
    }
    return max_sum;
}

double CSlidingWindow::findMaxAverage(std::vector<int>& nums, int k)
{
    double max_avg = 0.0;    
    double sum = 0.0;

    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }
    max_avg = sum / k;

    for (int j = k; j < nums.size(); j++)
    {
        sum += nums[j] - nums[j - k];
        double avg = sum / k;
        max_avg = std::max(max_avg, avg);
    }

    return max_avg;
}

int CSlidingWindow::longestOnes(std::vector<int>& nums, int k)
{
    int left = 0, num_of_zeros = 0, ans = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] == 0)
            num_of_zeros++;

        while (num_of_zeros > k)
        {
            if(nums[left] == 0)
                num_of_zeros--;
            left++;            
        }

        ans = std::max(ans, right - left + 1);
    }
    return ans;
}

int CSlidingWindow::maxVowels(std::string s, int k)
{
    int left = 0, right = 0, max_vowels = 0, count = 0;

        for(right = 0; right < k; right++)
        {
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o'
               || s[right] == 'u')
               count++;
        }
        max_vowels = count;

        for(; right < s.size(); right++)
        {
            if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o'
               || s[left] == 'u')
            {
                count--;                
            }
            left++;
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o'
               || s[right] == 'u')
            {
                count++;
            }
            max_vowels = std::max(max_vowels, count);
        }

        return max_vowels;
}
