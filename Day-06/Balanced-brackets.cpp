#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string str;
    cin >> str;
    vector<char> v;

    bool res = true;

    for (char c : str) {
      if (c == ')' || c == ']' || c == '}') {
        if ((!v.empty()) && ((c == ')' && v.back() == '(') ||
                                    (c == ']' && v.back() == '[') ||
                                    (c == '}' && v.back() == '{'))) {
          v.pop_back();
        } else {
          res = false;
          break;
        }
      } else
        v.push_back(c);
    }

    if (res && v.empty())
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
