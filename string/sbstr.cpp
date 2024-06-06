#include <iostream>
#include <string>
using namespace std;

// Function to check if a given substring is a palindrome
bool isPalindrome(const string &s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Function to find the longest palindromic substring using brute force
string longestPalindrome(string s) {
    int n = s.length();
    if (n == 0) return "";

    int maxLength = 1;
    int start = 0;
    //----------------------All sub string print-------------------
      /*for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << s.substr(i, j - i + 1) << endl;
        }
      }*/

    //..........................All sub string print with out bult int in function------------------------
   /* for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << s[k];
            }
            cout << endl;
        }
    }*/
    // Check all substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j) && (j - i + 1 > maxLength)) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
    return s.substr(start, maxLength);
}

// Main function to test the code
int main() {
    string s1 = "babad";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << longestPalindrome(s1) << endl;

    string s2 = "cbbd";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << longestPalindrome(s2) << endl;

    return 0;
}
