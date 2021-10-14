#include<bits/stdc++.h>
using namespace std;

/**
 * Disjoint Set
 * Source: Adapted from Aeren and Atcoder Library
 * Description: Data structure to keep a collection of disjoint sets which contain the elements {0, 1, ..., n-1}
 *              Implements both path compression and union by size
 * Methods:
 * (1) int get_root(int u): Find a representative of the set containing u
 * (2) int size(int u): Returns the size of the set containing u
 * (3) bool same_set(int u, int v): Check whether u and v are in the same set
 * (4) bool merge(int u, int v): Merge the sets containing u and v if they are different, returns success of merge
 * (5) vector group_up(): Returns the collection of disjoint sets as a vector of vectors
 * 
 * Time: Amortized O(n alpha(n)) for n operations
 * Space: O(n)
 * Tested on Codeforces EDU
 */

struct DSU {
private:
    std::vector<int> parent_or_size;
public:
    DSU(int n = 1): parent_or_size(n, -1) {}
    int get_root(int u) {
        if (parent_or_size[u] < 0) return u;
        return parent_or_size[u] = get_root(parent_or_size[u]);
    }
    int size(int u) { return -parent_or_size[get_root(u)]; }
    bool same_set(int u, int v) {
        return get_root(u) == get_root(v); 
    }
    bool merge(int u, int v) {
        u = get_root(u), v = get_root(v);
        if (u == v) return false;
        if (parent_or_size[u] > parent_or_size[v]) std::swap(u, v);
        parent_or_size[u] += parent_or_size[v];
        parent_or_size[v] = u;
        return true;
    }
    std::vector<std::vector<int>> group_up() {
        int n = parent_or_size.size();
        std::vector<std::vector<int>> groups(n);
        for (int i = 0; i < n; ++i) {
            groups[get_root(i)].push_back(i);
        }
        groups.erase(std::remove_if(groups.begin(), groups.end(), [&](auto &s) { return s.empty(); }), groups.end());
        return groups;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int s, n, m;
    cin >> s >> n >> m;
    DSU a(s), b(s);
    while(n--){
        int x, y;
        cin >> x >> y;
        --x, --y;
        a.merge(x, y);
    }
    while(m--) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        b.merge(x, y);
    }
    vector<pair<int, int>> ans;
    for(int i = 0; i < s; ++i) {
        for(int j = i+1; j < s; ++j) {
            if(a.same_set(i, j) or b.same_set(i, j)) continue;
            ans.push_back({i, j});
            a.merge(i, j), b.merge(i, j);
        }
    }
//    cout << ans.size() << '\n';
//    for(auto &x : ans) cout << x.first + 1 << ' ' << x.second + 1 << '\n';
}


