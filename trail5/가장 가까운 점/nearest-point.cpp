#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct point {
    int x;
    int y;
};

struct cmp {
    bool operator() (point p1, point p2) {
        if (p1.x+p1.y != p2.x+p2.y) {
            return p1.x+p1.y > p2.x+p2.y;
        }
        else {
            if (p1.x != p2.x) {
                return p1.x > p2.x;
            }
            else {
                return p1.y > p2.y;
            }
        }
    }
};

priority_queue<point, vector<point>, cmp> pq;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        pq.push({x, y});
    }

    for (int i = 0; i < m; i++) {
        point p = pq.top();
        pq.pop();
        p.x += 2;
        p.y += 2;
        pq.push({p.x, p.y});
    }

    point res = pq.top();
    cout << res.x << " " << res.y;
    return 0;
}