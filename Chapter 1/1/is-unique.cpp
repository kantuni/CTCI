#include <bits/stdc++.h>
using namespace std;

// Time: O(n)
// Space: O(n)
bool is_unique(string& s) {
  unordered_map<char, int> frequency;
  for (char letter: s) {
    if (frequency[letter] > 0) {
      return false;
    }
    frequency[letter]++;
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  cout << isUnique(s) << endl;
  return 0;
}
