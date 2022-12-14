class Solution {
public:
    string longestPalindrome(string s) {
        // int n = s.length();
        string ans = "";
        if (s.length() == 0)
            return ans;
        
        vector<vector<bool>> dp(s.length(), vector<bool>(s.length()));
        
        //Every Single character is palindrome
        for (int i = 0; i < s.length(); i++) {
            dp[i][i] = true;
        }

        // string ans = "";
        ans += s[0];

        for (int i = s.length() - 1; i >= 0; i--) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    //If it is of two character OR if its susbtring is palindrome.
                    if (j - i == 1 || dp[i + 1][j - 1]) {
                        //Then it will also a palindrome substring
                        dp[i][j] = true;

                        //Check for Longest Palindrome substring
                        if (ans.length() < j - i + 1)
                            ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};