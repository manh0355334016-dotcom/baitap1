#include <iostream>
using namespace std;
void selectionsort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int mina = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[mina]) {
				mina = j;
			}
		}
		swap(a[i], a[mina]);
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
	selectionsort(x, n);
	return 0;
}