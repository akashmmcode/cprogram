#include<stdio.h>
using namespace std;

#define odd(x) (x&1)
#define even(x) (!(x&1))

int main(){

	int x;
	cin >> x;
	int n =11;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a[i][j];
	for(int i=n-1;i>=0;i--)
		for(int j=n-1;j>=0;j--){
			int tmp = a[i][j];
			if((odd(i) && even(j)) || (even(i) && odd(j)))
				if(tmp == 0){
					cout << i << " " << j << "\n";
					return 0;
				}
		}
	cout << "0 1\n";
	return 0;
	
}