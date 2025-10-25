#include <iostream>
using namespace std;
int n;
int x[100];
void merge(int x[], int l, int m, int r) {
	int k = l;
	int j = m + 1;
	int temx[100] ;
	int i = l;
	for (;k<=m&&j<=r; i++) {
		if (x[k] < x[j]) {
			temx[i] = x[k];
			k++;
		}
		else {
			temx[i] = x[j];
			j++;
		}
	}
	for (; k <= m; k++, i++) {
		temx[i] = x[k];
	}
	for (; j <= r; j++, i++) {
		temx[i] = x[j];
	}
	for (i = l; i <= r; i++) {
		x[i] = temx[i];
	}

}
void mergesort(int x[], int l,int r) {
	if (l < r) {
		int m = (l + r) / 2;
		mergesort(x, l, m);
		mergesort(x, m + 1, r);
		merge(x, l, m, r);
	}
	else {
		return;
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	mergesort(x, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
}