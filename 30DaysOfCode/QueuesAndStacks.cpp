#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Solution 
{
    stack<char> st;
    queue<char> qu;

    public:

        void pushCharacter(char ch) 
        {
            st.push(ch);
        }

        void enqueueCharacter(char ch)
        {
            qu.push(ch);
        }

        char popCharacter()
        {
            char result;
            while(!st.empty())
            {
                result = st.top();
                st.pop();
                return result;
            }
            return result;

        }

        char dequeueCharacter() 
        {
            char result;
            while(!qu.empty())
            {
                result = qu.front();
                qu.pop();
                return result;
            }
            return result;
        }

};

int main() 
{
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) 
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) 
    {
        if (obj.popCharacter() != obj.dequeueCharacter()) 
        {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) 
    {
        cout << "The word, " << s << ", is a palindrome.";
    } 
    else
    {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}