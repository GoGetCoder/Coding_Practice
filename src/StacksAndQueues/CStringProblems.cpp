#include "CStringProblems.h"
#include <stack>
#include <unordered_map>

bool CStringProblems::isValidParan(std::string s)
{
    std::stack<char> paran_stack;
    std::unordered_map<char, char> hash = {{'(', ')'}, {'[',']'}, {'{', '}'}};

    for(auto& c  : s)
    {
        if(hash.contains(c))
            paran_stack.push(c);
        else
        {
            if(paran_stack.empty())
                return false;

            char prev_close = hash[paran_stack.top()];
            paran_stack.pop();
            if(prev_close != c)
                return false;
        }
    }

    return paran_stack.empty();
}

std::string CStringProblems::removeDuplicates(std::string s)
{
    std::stack<char> stack;
    std::string result = "";

    for(auto& c : s)
    {
        if(stack.empty())
            stack.push(c);
        else if(stack.top() == c)
            stack.pop();
        else
            stack.push(c);
    }

    while(!stack.empty())
    {
        result = stack.top() + result;
        stack.pop();
    }

    return result;
}

bool CStringProblems::backspaceCompare(std::string s, std::string t)
{
    std::stack<char> s_stack, t_stack;

    for(auto& c : s)
    {
        if(c == '#')
        {
            if(!s_stack.empty())
                s_stack.pop();
        }
        else
            s_stack.push(c);
    }

    for(auto& c : t)
    {
        if(c == '#')
        {
            if(!t_stack.empty())
                t_stack.pop();
        }
        else
            t_stack.push(c);
    }

    while(!s_stack.empty() && !t_stack.empty())
    {
        if(s_stack.top() != t_stack.top())
            return false;
        s_stack.pop();
        t_stack.pop();
    }

    if(!s_stack.empty() || !t_stack.empty())
        return false;

    return true;
}

std::string CStringProblems::simplifyUnixPath(std::string path)
{
    std::string dir = "";
    std::stack<std::string> stack;
    std::string result = "";
    
    for(auto& c : path)
    {
        if(c == '/')
        {
            if(dir == "" || dir == ".")
            {
                dir = "";
                continue;
            }
            else
            {
                if(dir == "..")
                {
                    dir = "";
                    if(!stack.empty())
                        stack.pop();
                }
                else
                {
                    stack.push(dir);
                    dir = "";
                }
            }
        }
        else
        {
            dir.push_back(c);
        }
    }

    if(dir == "..")
    {
         if(!stack.empty())
            stack.pop();
    }
    else if(dir != "" && dir != ".")
        stack.push(dir);        

    if(stack.empty())
        result = "/";
    else
    {
        while(!stack.empty())
        {
            result = "/" + stack.top() + result;
            stack.pop();
        }
    }

    return result;
}

std::string CStringProblems::makeGood(std::string s)
{
    std::string result = "";
    std::stack<char> stack;

    for(auto& c : s)
    {
        if(stack.empty())
        {
            stack.push(c);
        }
        else
        {
            if(c == stack.top())
            {
                stack.push(c);
            }
            else if(c == std::toupper(stack.top()) || c == std::tolower(stack.top()))
            {
                stack.pop();
                continue;
            }
            else
            {
                stack.push(c);
            }            
        }
    }

    while(!stack.empty())
    {
        result = stack.top() + result;
        stack.pop();
    }

    return result;
}

