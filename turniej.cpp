#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <stdexcept>

// comment

using namespace std;
int main() {
    int n=1; int m, w, k, g, q, r;
    while(n!=0){
        cin >> n;
        if ( n%2==0 ){
            m = n-1;
        }
        else {
            m = n;
        }
        int t[n][m];
        for( w=0; w < m; w++ ){
            for( k=0; k < n; k++ ){
                t[k][w]=0;
            }
        }
        for( k=0; k < n; k++ ){
            cout << "k: " << k;
            g=1;
            for(w=k; w < m; w++ ){
                cout << " w: " << w << " g: " << g;
                if( t[k][w]==0 ){
                        cout << " empt ";
                    if(g==k+1){
                        cout << " g == k+1 ";
                        if(n%2==0){
                            cout << " even ";
                            t[k][w]=n;
                            t[n-1][w]=k+1;
                                cout << "\n";
                            cout << "-Gracz " << k+1 << " w dniu " << w+1 << " gra z graczem: " << n << "\n";
                            cout << "-Gracz " << n-1+1 << " w dniu " << w+1 << " gra z graczem: " << k+1 << "\n";
//

for(q=0; q < m; q++ ){
            for(r=0; r < n; r++ ){
                if ( t[r][q] < 10 ) {
                    if ( t[r][q] == 0 ){
                        cout << "   _" ;
                    } else {
                        cout << "   " << t[r][q];
                    }
                }
                else if ( t[r][q] > 9 && t[r][q] < 100 ){
                    cout << "  " << t[r][q];
                }
                else if (t[r][q] > 99 && t[r][q] < 1000 ){
                    cout << " " << t[r][q];
                }
            }
            cout << endl;
        }

//

                        }
                    }
                    else {
                        cout << " odd " ;
                        t[k][w]=g;
                        t[g-1][w]=k+1;
                        cout << "\n";
                        cout << "-Gracz " << k+1 << " w dniu " << w+1 << " gra z graczem: " << g << "\n";
                        cout << "-Gracz " << g-1+1 << " w dniu " << w+1 << " gra z graczem: " << k+1 << "\n";
//

for(q=0; q < m; q++ ){
            for(r=0; r < n; r++ ){
                if ( t[r][q] < 10 ) {
                    if ( t[r][q] == 0 ){
                        cout << "   _" ;
                    } else {
                        cout << "   " << t[r][q];
                    }

                }
                else if ( t[r][q] > 9 && t[r][q] < 100 ){
                    cout << "  " << t[r][q];
                }
                else if (t[r][q] > 99 && t[r][q] < 1000 ){
                    cout << " " << t[r][q];
                }
            }
            cout << endl;
        }

//

                    }
                }
                g++;
            }
            for( w=0; w < k; w++ ){
                cout << " w: " << w;
                if( t[k][w]==0 ){
                        cout << " empt ";
                    if( g==k+1 ){
                        cout << " g == k+1 " ;
                        if( n%2==0 ){
                                cout << " even ";
                            t[k][w]=n;
                            t[n-1][w]=k+1;
                            cout << "\n";
                            cout << "1+Gracz " << k+1 << " w dniu " << w+1 << " gra z graczem: " << n << "\n";
                            cout << "2+Gracz " << n-1+1 << " w dniu  " << w+1 << " gra z graczem: " << k+1 << "\n";
//

for(q=0; q < m; q++ ){
            for(r=0; r < n; r++ ){
                if ( t[r][q] < 10 ) {
                    if ( t[r][q] == 0 ){
                        cout << "   _" ;
                    } else {
                        cout << "   " << t[r][q];
                    }
                }
                else if ( t[r][q] > 9 && t[r][q] < 100 ){
                    cout << "  " << t[r][q];
                }
                else if (t[r][q] > 99 && t[r][q] < 1000 ){
                    cout << " " << t[r][q];
                }
            }
            cout << endl;
        }

//

                        }
                    }
                    else {
                        cout << " odd ";
                        t[k][w]=g;
                        t[g-1][w]=k+1;
                        cout << "\n";
                        cout << "3+Gracz " << k+1 << " w dniu " << w+1 << " gra z graczem: " << g << "\n";
                        cout << "4+Gracz " << g-1+1 << " w dniu " << w+1 << " gra z graczem: " << k+1 << "\n";
//

for(q=0; q < m; q++ ){
            for(r=0; r < n; r++ ){
                if ( t[r][q] < 10 ) {
                    if ( t[r][q] == 0 ){
                        cout << "   _" ;
                    } else {
                        cout << "   " << t[r][q];
                    }

                }
                else if ( t[r][q] > 9 && t[r][q] < 100 ){
                    cout << "  " << t[r][q];
                }
                else if (t[r][q] > 99 && t[r][q] < 1000 ){
                    cout << " " << t[r][q];
                }
            }
            cout << endl;
        }

//

                    }
                }
                g++;
            }
        }
        cout << "\n\n\n";

        for(w=0; w < m; w++ ){
            for(k=0; k < n; k++ ){
                if ( t[k][w] < 10 ) {
                    if ( t[k][w] == 0 ){
                        cout << "   _" ;
                    } else {
                        cout << "   " << t[k][w];
                    }

                }
                else if ( t[k][w] > 9 && t[k][w] < 100 ){
                    cout << "  " << t[k][w];
                }
                else if (t[k][w] > 99 && t[k][w] < 1000 ){
                    cout << " " << t[k][w];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
