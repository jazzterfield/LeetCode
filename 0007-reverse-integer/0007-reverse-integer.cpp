class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        ::reverse(s.begin(), s.end());
        if (stol(s)<= -2147483648 || stol(s) >=  2147483647) {
            return 0;
        }
        else {
            return x > 0 ? stoi(s) : stoi(s) * -1;
        }
    }
};