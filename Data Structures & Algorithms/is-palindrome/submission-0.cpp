
class Solution {
   public:
    bool isPalindrome(std::string s) {
        if (s.size() == 1) return true;
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            while (!std::isalnum(s[l]) && l < r) {
                l++;
            }
            while (!std::isalnum(s[r]) && l < r) {
                r--;
            }
            std::cout << s[l] << s[r] << std::endl;
            if (std::tolower(s[l]) != std::tolower(s[r]))
                return false;
            else {
                l++;
                r--;
            }
        }
        return true;
    }
};
