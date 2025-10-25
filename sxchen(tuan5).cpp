#include <iostream>
using namespace std;
void insertsort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int t = a[i];
		int j = i;
		while (j > 0 && t < a[j - 1]) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = t;
		cout << "buoc " << i << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	int x[100];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	insertsort(x, n);
}