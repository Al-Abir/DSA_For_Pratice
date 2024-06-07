#include<iostream>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;

string smallestWindow(string s, string p) {
    unordered_map<char, int> pFreq;
    unordered_map<char, int> windowFreq;

    // Build the frequency map for characters in p
    for (char c : p) {
        pFreq[c]++;
    }

    int required = pFreq.size();  // Number of unique characters in p
    int formed = 0;  // Number of unique characters in the current window that match the target

    int l = 0, r = 0;
    int minLength = INT_MAX;
    int start = 0;

    while (r < s.length()) {
        char c = s[r];
        windowFreq[c]++;

        // Check if the current character's frequency matches the required frequency in p
        if (pFreq.find(c) != pFreq.end() && windowFreq[c] == pFreq[c]) {
            formed++;
        }

        // Try to contract the window until it no longer contains all characters of p
        while (l <= r && formed == required) {
            c = s[l];

            // Update the result if this window is smaller
            if (r - l + 1 < minLength) {
                minLength = r - l + 1;
                start = l;
            }

            windowFreq[c]--;
            if (pFreq.find(c) != pFreq.end() && windowFreq[c] < pFreq[c]) {
                formed--;
            }

            l++;
        }

        r++;
    }

    return (minLength == INT_MAX) ? "-1" : s.substr(start, minLength);
}

int main() {
    // Example usage:
    string s1 = "timetopractice";
    string p1 = "toc";
    string result1 = smallestWindow(s1, p1);
    cout<< "Smallest window for " << s1 << " containing " << p1 << ": " << result1 <<endl;

    string s2 = "zoomlazapzo";
    string p2 = "oza";
    string result2 = smallestWindow(s2, p2);
    cout << "Smallest window for " << s2 << " containing " << p2 << ": " << result2 << endl;

    return 0;
}
