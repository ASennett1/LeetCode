class Solution {
public:
    bool isValid(string s) {
        // Create a stack to keep track of opening brackets
        stack<char> stack;

        // Create a mapping of opening brackets to their corresponding closing brackets
        map<char, char> bracketMap =
        {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        // Loop through each character in the input string
        for (char ch : s)
        {
            // If the character is an opening bracket (exists in the map keys)
            if (bracketMap.count(ch))
            {
                // Push the opening bracket onto the stack
                stack.push(ch);
            }
            else 
            {
                // If the character is a closing bracket but the stack is empty,
                // it means there's no matching opening bracket â invalid string
                if (stack.empty())
                {
                    return false;
                }

                // Get the most recent opening bracket from the stack
                char openBracket = stack.top();
                // Remove it from the stack since we're now trying to match it
                stack.pop();

                // Check if the current closing bracket matches the expected closing bracket
                // for the last opening bracket. If not â invalid string
                if (bracketMap[openBracket] != ch)
                {
                    return false;
                }
            }
        }

        // If the stack is empty at the end, all brackets matched correctly â valid
        // If not empty, it means there were unmatched opening brackets â invalid
        return stack.empty();
    }
};