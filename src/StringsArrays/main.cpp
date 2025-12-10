// StringsAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include <vector>
#include "TwoPointers.h"
#include "SlidingWindow.h"
#include "PrefixSum.h"

void two_pointers(std::unique_ptr<CArrayAndStrings>& arr_str_tp)
{
    std::cout << "1. Is Palindrome (racecar): " << arr_str_tp->isPalindrome("racecar") << std::endl;
    std::cout << "   Is Palindrome (aceba): " << arr_str_tp->isPalindrome("aceba") << std::endl;
    //
    std::vector<int> nums1 = { 1, 2, 4, 6, 8, 9, 14, 15 };
    std::cout << "2. Check Pair for Target: " << arr_str_tp->checkPairForTarget(nums1, 13) << std::endl;
    //
    std::vector<int> arr1 = { 1, 4, 7, 20 };
    std::vector<int> arr2 = { 3, 5, 6 };
    std::vector<int> res1 = arr_str_tp->combineSorted(arr1, arr2);
    std::cout << "3. Combined Sorted arr: [ ";
    for (auto& e : res1)
    {
        std::cout << e << ", ";
    }
    std::cout << "]" << std::endl;
    //
    std::cout << "4. Is Subsequence: " << arr_str_tp->isSubsequence("ace", "abcde") << std::endl;
    std::cout << "   Is Subsequence: " << arr_str_tp->isSubsequence("aec", "abcde") << std::endl;
    //
    std::cout << "5. Reversed: [ ";
    std::vector<char> str1 = { 'h', 'e', 'l', 'l', 'o' };
    arr_str_tp->reverseString(str1);
    for (auto& e : str1)
    {
        std::cout << e << ", ";
    }
    std::cout << "]" << std::endl;
    //
    std::cout << "6. Sorted Squares: [ ";
    std::vector<int> nums2 = { -4, -1, 0, 3, 10 };
    std::vector<int> sorted_arr1 = arr_str_tp->sortedSquares(nums2);
    for (auto& e : sorted_arr1)
    {
        std::cout << e << ", ";
    }
    std::cout << "]" << std::endl;
    //    
    std::cout << "7. Longest Palindrome Substring: ";    
    std::cout << arr_str_tp->longestPalindromeSubstring("babad");
}

void sliding_window(std::unique_ptr<CArrayAndStrings>& arr_strs_sw)
{
    std::cout << "1. Len Of Longest Sum Subarray: ";
    std::vector<int> nums3 = { 3, 1, 2, 7, 4, 2, 1, 1, 5 };
    std::cout << arr_strs_sw->findLenOfLongestSum(nums3, 8) << std::endl;
    //
    std::cout << "2. Longest Ones: ";
    std::string str2 = "1101100111";
    std::cout << arr_strs_sw->longestOnes(str2) << std::endl;
    //
    std::cout << "3. Num of Subarray: ";
    std::vector<int> nums4 = { 10, 5, 2, 6 };
    std::cout << arr_strs_sw->numSubarrayProductLessThanK(nums4, 100) << std::endl;
    //
    std::cout << "4. Sum of fixed len Subarray: ";
    std::vector<int> nums5 = { 3, -1, 4, 12, -8, 5, 6 };
    std::cout << arr_strs_sw->sumOfLargestSubarrayWithLenK(nums5, 4) << std::endl;;
    //
    std::cout << "5. Max Avg of fixed len Subarray: ";
    std::vector<int> nums6 = { 1, 12, -5, -6, 50, 3 };
    std::cout << arr_strs_sw->findMaxAverage(nums6, 4) << std::endl;
    //
    std::cout << "6. Longest Ones: ";
    std::vector<int> nums7 = { 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0 };
    std::cout << arr_strs_sw->longestOnes(nums7, 2) << std::endl;
    //
    std::cout << "7. Max Vowels: ";
    std::string str3 = "leetcode";
    std::cout << arr_strs_sw->maxVowels(str3, 3);    
}

void prefix_sum(std::unique_ptr<CArrayAndStrings>& ps)
{
    std::cout << "1. Queries: [ ";
    std::vector<int> nums1 = { 1, 6, 3, 2, 7, 2 };
    std::vector<std::vector<int>> queries = { {0, 3}, {2, 5}, {2, 4} };
    std::vector<bool> result1 = ps->answerQueries(nums1, queries, 13);
    for (auto e : result1)
    {
        std::cout << e << ", ";
    }
    std::cout << "]" << std::endl;
    //
    std::cout << "2. WaysToSplitArray: ";
    std::vector<int> nums2 = { 10, 4, -8, 7 };
    std::cout << ps->wayToSplitArray(nums2) << std::endl;
    std::cout << "   WaysToSplitArrayOnlyInt: ";
    std::cout << ps->wayToSplitArrayOnlyInt(nums2) << std::endl;
    //
    std::cout << "3. Running Sum: [ ";
    std::vector<int> nums3 = { 1, 2, 3, 4 };
    std::vector<int> result2 = ps->runningSum(nums3);
    for (auto& e : result2)
    {
        std::cout << e << ", ";
    }
    std::cout << "]" << std::endl;

    std::vector<int> nums4 = { 7, 4, 3, 9, 1, 8, 5, 2, 6 };
    std::vector<int> result3 = ps->getAverages(nums4, 3);
    for (auto& e : result2)
    {
        std::cout << e << ", ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    std::cout << "-------------TWO POINTERS------------" << std::endl;
    std::unique_ptr<CArrayAndStrings> tp = std::make_unique<CTwoPointers>();
    two_pointers(tp);       
    //
    std::cout << std::endl;
    std::cout << "-------------SLIDING WINDOW------------" << std::endl;
    std::unique_ptr<CArrayAndStrings> sw = std::make_unique<CSlidingWindow>();
    sliding_window(sw);
    //
    std::cout << std::endl;
    std::cout << "-------------PREFIX SUM------------" << std::endl;
    std::unique_ptr<CArrayAndStrings> ps = std::make_unique<CPrefixSum>();
    prefix_sum(ps);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
