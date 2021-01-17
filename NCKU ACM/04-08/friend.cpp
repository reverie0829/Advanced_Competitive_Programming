#include<bits/stdc++.h>

using namespace std;

#define maxN 200005

int dis[maxN], sz[maxN];

inline void init ( void ){
    for ( int i = 0 ; i < maxN ; i++ )
        dis[i] = i;
}

int find ( int a ){
    return dis[a] == a ? a : dis[a] = find ( dis[a] );
}

inline void Union ( int a, int b ){
    dis[find ( a )] = find ( b );
}

inline bool same ( int a, int b ){
    return find ( a ) == find ( b );
}

int main(){
    ios::sync_with_stdio ( false );
    cin.tie ( 0 );

    int n, m, a, b, type, an, bn;
    cin >> n >> m;
    init();
    while ( m-- ){
        cin >> type >> a >> b;
        an = a + n, bn = b + n;
        if ( type == 1 ){
            if ( same ( a, bn ) || same ( an, b ) ){
                cout << "nani\n";
                continue;
            }
            Union ( a, b );
            Union ( an, bn );
        }
        else if ( type == 2 ){
            if ( same ( a, b ) || same ( an, bn ) ){
                cout << "nani\n";
                continue;
            }
            Union ( a, bn );
            Union ( b, an );
        }
        else if ( type == 3 ){
            if ( same ( a, b ) || same ( an, bn ) )
                cout << "friend\n";
            else if ( same ( an, b ) || same ( a, bn ) )
                cout << "enemy\n";
            else
                cout << "none\n";
        }
    }
}