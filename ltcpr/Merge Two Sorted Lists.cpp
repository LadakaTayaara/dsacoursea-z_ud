#include <bits/stdc++.h>
using namespace std;

vector<int> parseInput(const string& input) {
    vector<int> result;
    string num;
    for (char ch : input) {
        if (isdigit(ch) || ch == '-') {
            num += ch;
        } else if (!num.empty()) {
            result.push_back(stoi(num));
            num.clear();
        }
    }
    return result;
}

vector<int> mergeTwoLists(vector<int> list1, vector<int> list2, int idx = 0) {
    if (idx == list2.size()) {
        sort(list1.begin(), list1.end());
        return list1;
    }
    list1.push_back(list2[idx]);
    return mergeTwoLists(list1, list2, idx + 1);
}

int main() {
    string s, t;
    cin >> s >> t;

    vector<int> a = parseInput(s);
    vector<int> b = parseInput(t);
    vector<int> me = mergeTwoLists(a, b);

    cout << "[";
    for (int i = 0; i < me.size(); i++) {
        cout << me[i];
        if (i != me.size() - 1) cout << ",";
    }
    cout << "]";
}
