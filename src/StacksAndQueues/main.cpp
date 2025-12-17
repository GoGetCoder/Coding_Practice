#include "CStringProblems.h"
#include "CMonotonic.h"
#include <string>
#include <memory>
#include <iostream>

void display(std::vector<int>& vec)
{
    for(auto& v : vec)
        std::cout << v << " ";
    
    std::cout << std::endl;
}

int main()
{
    std::string str1 = "()[]{}";
    std::string str2 = "([)]";
    std::string str3 = "abbaca";
    std::string str4 = "ab#c", str5 = "ad#c";
    std::string str6 = "/.../a/../b/c/../d/./", str7 = "/home/";
    std::string str8 =  "Pp", str9 = "abBAcC", str10 = "leEeetcode";
    std::vector<int> vec1 = {73, 74, 75, 71, 69, 72, 76, 73};

    std::unique_ptr<CStringProblems> str_probs = std::make_unique<CStringProblems>();
    std::cout << "-------------STRING PROBLEMS-------------" << std::endl;
    std::cout << " 1. Valid Paranthesis: " << std::endl;
    std::cout << "    Input: " << str1 << std::endl;
    std::cout << "           " << std::boolalpha << str_probs->isValidParan(str1) << std::endl;
    std::cout << "    Input: " << str2 << std::endl;
    std::cout << "           " << std::boolalpha << str_probs->isValidParan(str2) << std::endl;
    //
    std::cout << " 2. Remove All Adj Duplicates: " << std::endl;
    std::cout << "    Input: " << str3 << std::endl;
    std::cout << "           " << str_probs->removeDuplicates(str3) << std::endl;
    //
    std::cout << " 3. Backspace Compare: " << std::endl;
    std::cout << "    Input: " << str4 << " " << str5 << std::endl;
    std::cout << "           " << std::boolalpha << str_probs->backspaceCompare(str4, str5) << std::endl;
    //
    std::cout << " 4. Simplify Unix Path: " << std::endl;
    std::cout << "    Input: " << str6 << std::endl;
    std::cout << "           " << str_probs->simplifyUnixPath(str6) << std::endl;
    std::cout << "    Input: " << str7 << std::endl;
    std::cout << "           " << str_probs->simplifyUnixPath(str7) << std::endl;
    //
    std::cout << " 5. Make Good: " << std::endl;
    std::cout << "    Input: " << str8 << std::endl;
    std::cout << "           " << str_probs->makeGood(str8) << std::endl;
    std::cout << "    Input: " << str9 << std::endl;
    std::cout << "           " << str_probs->makeGood(str9) << std::endl;
    std::cout << "    Input: " << str10 << std::endl;
    std::cout << "           " << str_probs->makeGood(str10) << std::endl;
    //
    std::cout << "-------------MONOTONIC PROBLEMS-------------" << std::endl;
    //
    std::unique_ptr<CMonotonic> mono = std::make_unique<CMonotonic>(); 
    std::cout << " 1. Rising Temperature: " << std::endl;
    std::cout << "    Input: ";
    display(vec1);
    std::cout << "           ";
    auto vec_out = mono->dailyTemperatures(vec1);
    display(vec_out);

}