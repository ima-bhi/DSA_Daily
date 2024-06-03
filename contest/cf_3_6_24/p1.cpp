#include <bits/stdc++.h>
using namespace std;

// Function to find unique characters in the string
unordered_set<char> findUniqueCharacters(const string& str) {
    unordered_set<char> unique_chars;
    for (char ch : str) {
        unique_chars.insert(ch);
    }
    return unique_chars;
}

// Function to remove one occurrence of each unique character from the string
string removeUniqueCharacters(const string& str, const unordered_set<char>& unique_chars) {
    string result = str;
    for (char ch : unique_chars) {
        auto pos = result.find(ch);
        if (pos != string::npos) {
            result.erase(pos, 1);
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int count = 0;
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        for (int i = 0; i < m; ++i) {
            unordered_set<char> unique_chars = findUniqueCharacters(str);
            int char_diff = 7 - unique_chars.size();
            count += char_diff;
            str = removeUniqueCharacters(str, unique_chars);
        }
        cout << count << "\n";
    }
    return 0;
}