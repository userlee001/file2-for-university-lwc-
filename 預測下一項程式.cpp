#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long n ;
	cout << "�п�J�w������" << endl ; 
	cin >> n ;
	long long a[n][2] , deno[n] ;
	for( long long i=0 ; i<n ; i++ ){
		cout << "�п�Jx��" << endl ; 
		cin >> a[i][0] ; // ��Jx�� ;
		cout << "�п�Jy��" << endl ; 
		cin >> a[i][1] ; // ��Jy�� ; 
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
	} // �s�y���� ;
	 
    while( true ){
    	cout << "�п�J���D�ĴX�����ȡA�Y�n�פ�{���A�п�J0" << endl ;
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
	    cout << "��" << m << "���������Ȭ�" << tot << endl ;
	}
}
