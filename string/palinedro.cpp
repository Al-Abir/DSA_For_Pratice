#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int count_palindromic_substrings(string s) {
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string substring = s.substr(i, j - i + 1);
            if (isPalindrome(substring))
                count++;
        }
    }
    return count;
}

int main() {
    string s1 = "abc";
    cout << count_palindromic_substrings(s1) << endl;  // Output: 3

    string s2 = "aaa";
    cout << count_palindromic_substrings(s2) << endl;  // Output: 6

    return 0;
}
