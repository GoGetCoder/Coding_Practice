#ifndef CSTACKSANDQUEUES_H
#define CSTACKSANDQUEUES_H

#pragma once
#include <string>
#include <vector>

class CStacksAndQueues
{
public:
    // string problems
    virtual bool isValidParan(std::string s){ return {}; }
    virtual std::string removeDuplicates(std::string s) { return {}; }
    virtual bool backspaceCompare(std::string s, std::string t){ return {}; }
    virtual std::string simplifyUnixPath(std::string path){ return{}; }
    virtual std::string makeGood(std::string s){ return {}; }
    virtual std::vector<int> dailyTemperatures(std::vector<int>& temperatures) { return{}; }

};

#endif