#include <iostream>
using namespace std;
void bubblesort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
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
	bubblesort(x, n);
}