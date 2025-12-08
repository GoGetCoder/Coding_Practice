// Hashing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Counting.h"

void counting(std::unique_ptr<CHashing>& counting)
{
    std::string s = "eceba";
    int k = 2;
    std::cout << "1. Length of longest substring: " << counting->findLongestSubstring(s, k) << std::endl;
}

int main()
{
    std::cout << "-------------COUNTING------------" << std::endl;
    std::unique_ptr<CHashing> count = std::make_unique<CCounting>();
    counting(count);
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
