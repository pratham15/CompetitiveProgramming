#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
vector<pii> pairs;

int distanc(pii &a, pii &b) {
  int x = a.first - b.first, c = a.second - b.second;
  return x * x + c * c;
}

int CC(pii &a, pii &b, pii &c) {
  int cl = (b.second - a.second) * (c.first - b.first) -
           (b.first - a.first) * (c.second - b.second);
  if (cl == 0) return 0;
  if (cl > 0)
    return -1;
  else
    return 1;
}

void solve() {
  int mn = pairs[0].first, i = 0;
  for (int j = 1; j < pairs.size(); ++j)
    if (pairs[i].first < mn) mn = pairs[i].first, i = j;
  swap(pairs[0], pairs[i]);

  sort(pairs.begin() + 1, pairs.end(), [&](pii &a, pii &b) {
    int x = CC(pairs[0], a, b);
    if (x == 0) return distanc(pairs[0], a) <= distanc(pairs[0], b);
    return x == 1;
  });

  vector<pii> final = {pairs[0]};
  for (int i = 1; i < pairs.size(); ++i) {
    while (i < pairs.size() - 1 && CC(pairs[0], pairs[i], pairs[i + 1]) == 0)
      i++;
    final.push_back(pairs[i]);
  }

  // for (auto x : final) cout << x.first << ' ' << x.second << '\n';

  vector<pii> ans = {final[0], final[1], final[2]};

  for (int i = 3; i < final.size(); ++i) {
    while (ans.size() > 1 &&
           CC(ans[ans.size() - 2], ans.back(), final[i]) == -1)
      ans.pop_back();
    ans.push_back(final[i]);
  }
  cout << ans.size() << '\n'
  for (auto &x : ans) cout << x.first << ' ' << x.second << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  pairs = vector<pii>(n);
  for (auto &[x, y] : pairs) cin >> x >> y;
  solve();
}
