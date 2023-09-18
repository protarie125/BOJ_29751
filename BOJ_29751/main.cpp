#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double w, h;
	cin >> w >> h;

	cout << fixed << setprecision(1) << round(w * h * 5) / 10;

	return 0;
}