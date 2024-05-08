#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long n ;
	cout << "請輸入已知項數" << endl ; 
	cin >> n ;
	long long a[n][2] , deno[n] ;
	for( long long i=0 ; i<n ; i++ ){
		cout << "請輸入x值" << endl ; 
		cin >> a[i][0] ; // 輸入x值 ;
		cout << "請輸入y值" << endl ; 
		cin >> a[i][1] ; // 輸入y值 ; 
		deno[i] = 1 ;
	}
	long long m , tot , nume ;
	for( long long i=0 ; i<n ; i++ ){
		for( int j=0 ; j<n ; j++ ){
			if( j == i ){
				j++ ;
				if( j == n ){
					break ;
				}
			}
			deno[i] = deno[i]*(a[i][0] - a[j][0]) ;  
		}
	} // 製造分母 ;
	 
    while( true ){
    	cout << "請輸入欲求第幾項的值，若要終止程式，請輸入0" << endl ;
    	cin >> m ;
    	if( m == 0 ){
    		break ;
		}
		tot = 0 ;
		for( long long i=0 ; i<n ; i++ ){
			nume = 1 ;
		    for( long long j=0 ; j<n ; j++ ){
			    if( j == i ){
				    j++ ;
				    if( j == n ){
					    break ;
				    }
			    }
			    nume = nume*( m - a[j][0]) ;
		    }
		    tot += a[i][1]*nume/deno[i] ;	
	    }
	    cout << "第" << m << "項對應的值為" << tot << endl ;
	}
}
