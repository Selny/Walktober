#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t, m, n, p, v, t_n;
    cin >> t;

    vector<int> a;

    vector<vector<int>> s;

    while (t--) {
        s.clear();
        cin >> m >> n >> p;
        while (m--) {
            t_n = n;
            vector<int> temp2;
            temp2.clear();
            while(t_n--) {
                cin >> v;
                temp2.push_back(v);
            }
            s.push_back(temp2);
        }

        vector<vector<int>> f;
        f.clear();

        for (int i = 0; i < n; i++) {
        vector<int> temp;
        temp.clear();
            for (int j = 0; j < s.size(); j++) {
                if (p-1 != j) temp.push_back(s[j][i]);
            }
        sort(temp.begin(), temp.end(), greater<int>());
        f.push_back(temp);
    }

    int r = 0;

    int index = 0;

    for (auto i : f) {
        for (auto j : i) {
            if (j > s[p-1][index]) {
                r = r + j - s[p-1][index];
            }
            index++;
            break;
        }
    }

    a.push_back(r);

    }

   for (int i = 0; i < a.size(); i++)
   cout << "Case #" << i+1 << ": " << a[i] << endl;

    return 0;
}