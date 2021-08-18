#include <iostream>
using namespace std;

int ccw(pair<long long, long long> a, pair<long long, long long> b, pair<long long, long long> c) {
    long long op = a.first * b.second + b.first * c.second + c.first * a.second;
    op -= (a.second*b.first + b.second*c.first + c.second*a.first);
    if (op > 0) return 1; // 양수라면 반시계 방향
    else if (op == 0) return 0; // 0이라면 평행
    else return -1; // 음수라면 시계 방향
}

int main()
{
  long long x1,x2,x3,x4,y1,y2,y3,y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
  int tmp1 = ccw(make_pair(x1,y1),make_pair(x2,y2),make_pair(x3,y3));
  int tmp2 = ccw(make_pair(x1,y1),make_pair(x2,y2),make_pair(x4,y4));
  int tmp3 = ccw(make_pair(x1,y1),make_pair(x3,y3),make_pair(x4,y4));
  int tmp4 = ccw(make_pair(x2,y2),make_pair(x3,y3),make_pair(x4,y4));
  if(tmp1*tmp2<=0 && tmp3*tmp4<=0) cout << 1;
  else cout << 0;
}
