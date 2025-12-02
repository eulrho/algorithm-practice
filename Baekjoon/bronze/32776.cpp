// 가희와 4시간의 벽 2
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int s, m_a, f, m_b;
	cin >> s >> m_a >> f >> m_b;
	if (s <= f + m_a + m_b || s <= 4 * 60) cout << "high speed rail";
	else cout << "flight";
	return (0);
}