#ifndef CSTRINGPROBLEMS_H
#define CSTRINGPROBLEMS_H

#pragma once

#include "CStacksAndQueues.h"

class CStringProblems : public CStacksAndQueues
{
public:
    // string problems
    /* 1. Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
          determine if the input string is valid.
          Input: s = "()[]{}" Output: true
          Input: s = "([)]" Output: false */
    bool isValidParan(std::string s) override;

    /* 2. You are given a string s consisting of lowercase English letters. A duplicate removal 
          consists of choosing two adjacent and equal letters and removing them
          Input: s = "azxxzy" Output: "ay" */
    std::string removeDuplicates(std::string s) override;

    /* 3. Given two strings s and t, return true if they are equal when both are typed into empty 
          text editors. '#' means a backspace character. 
          Input: "ab#c" and t = "ad#c", return true. Because of the backspace, the strings are both 
          equal to "ac".*/
    bool backspaceCompare(std::string s, std::string t) override;

    /* 4. You are given an absolute path for a Unix-style file system, which always begins with a slash '/'. 
          Your task is to transform this absolute path into its simplified canonical path.
          The rules of a Unix-style file system are as follows:
                -A single period '.' represents the current directory.
                -A double period '..' represents the previous/parent directory.
                -Multiple consecutive slashes such as '//' and '///' are treated as a single slash '/'.
                -Any sequence of periods that does not match the rules above should be treated as a valid 
                 directory or file name. For example, '...' and '....' are valid directory or file names.
          The simplified canonical path should follow these rules:
                -The path must start with a single slash '/'.
                -Directories within the path must be separated by exactly one slash '/'.
                -The path must not end with a slash '/', unless it is the root directory.
                -The path must not have any single or double periods ('.' and '..') used to denote 
                 current or parent directories */
    std::string simplifyUnixPath(std::string path) override;

    /* 5. Given a string s of lower and upper case English letters.
          A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:
          0 <= i <= s.length - 2
          s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
          Input: s = "abBAcC" Output: ""
          Explanation: We have many possible scenarios, and all lead to the same answer. For example:
          "abBAcC" --> "aAcC" --> "cC" --> ""
          "abBAcC" --> "abBA" --> "aA" --> ""*/
    std::string makeGood(std::string s) override;    
};

#endif