#include "TwoPointers.h"

bool CTwoPointers::isPalindrome(std::string s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }

    return true;
}

bool CTwoPointers::checkPairForTarget(std::vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
            return true;
        if (sum > target)
            right--;
        else
            left++;
    }

    return false;
}

std::vector<int> CTwoPointers::combineSorted(std::vector<int> arr1, std::vector<int> arr2)
{
    int len1 = arr1.size();
    int len2 = arr2.size();

    int len_res = len1 + len2;
    std::vector<int> result;
    result.resize(len_res);

    int left1 = 0, left2 = 0, left_res = 0;
    while (left1 < len1 && left2 < len2)
    {
        if (arr1[left1] > arr2[left2])
        {
            result[left_res] = arr2[left2];
            left2++;
        }
        else
        {
            result[left_res] = arr1[left1];
            left1++;
        }
        left_res++;
    }

    while (left1 < len1)
    {
        result[left_res] = arr1[left1];
        left1++;
        left_res++;
    }

    while (left2 < len2)
    {
        result[left_res] = arr2[left2];
        left2++;
        left_res++;
    }

    return result;
}

bool CTwoPointers::isSubsequence(std::string s, std::string t)
{
    int i = 0, j = 0;
    
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
            i++;
        j++;
    }

    return i == s.size();
}

void CTwoPointers::reverseString(std::vector<char>& s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

std::vector<int> CTwoPointers::sortedSquares(std::vector<int>& nums)
{
    std::vector<int> result;
    result.resize(nums.size());

    int left = 0, right = nums.size() - 1;
    int res_i = result.size() - 1;

    while (left < right)
    {
        int left_sq = nums[left] * nums[left];
        int right_sq = nums[right] * nums[right];

        if (right_sq >= left_sq)
        {
            result[res_i] = right_sq;
            right--;
        }
        else
        {
            result[res_i] = left_sq;
            left++;
        }
        res_i--;
    }

    if (left == right)
        result[res_i] = nums[left] * nums[left];

    return result;
}
