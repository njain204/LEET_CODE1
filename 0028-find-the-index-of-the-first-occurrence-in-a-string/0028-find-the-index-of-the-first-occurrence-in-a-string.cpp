class Solution {
public:
    int strStr(string haystack, string needle) {
        string str = needle;
        int index = haystack.find(str);
        return index;
    }
};