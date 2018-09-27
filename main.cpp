#include <bits/stdc++.h>
#define p(x,y) y*m+x
#define X(p) p%m
#define Y(p) p/m

using namespace std;
const int M = 1100;

int n, m ,k, cmp = 1, comp[M*M], cnt[M*M];
string mat[M];

int r[] = {0, 0,  1, -1},
    u[] = {1, -1, 0,  0};

void dfs(int p)
{
    int x = X(p), y = Y(p);
    comp[p] = cmp;
    for(int i = 0; i < 4; i++)
    {
        int nx = x+r[i], ny = y+u[i];
        if(nx<0 || nx>=m || ny<0 || ny>=n)  continue;

        if(mat[ny][nx]=='.' && !comp[p(nx,ny)])
            dfs(p(nx,ny));
        if(mat[ny][nx]=='*')
            cnt[cmp] ++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        cin >> mat[i];

    for(int y = 0; y < n; y++)
        for(int x = 0; x < m; x++)
            if(mat[y][x] == '.' && !comp[p(x,y)]) dfs(p(x,y)), cmp ++;

    while(k--)
    {
        int x, y;
        cin >> y >> x;
        cout << cnt[comp[p((x-1),(y-1))]] << endl;
    }

    return 0;
}
