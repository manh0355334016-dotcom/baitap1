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
		cout << "Buoc " << i << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
void insertsort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int t = a[i];
		int j = i;
		while (j > 0 && t < a[j - 1]) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = t;
		cout << "Buoc " << i << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
void bubblesort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
		cout << "Buoc " << i << endl;
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
	int k = 1;
	while (k) {
		cout << "1.Selection sort" << endl;
		cout << "2.Insert sort" << endl;
		cout << "3.Bubble sort" << endl;
		cin >> k;
		switch (k) {
		case 1: selectionsort(x, n); break;
		case 2: insertsort(x, n); break;
		case 3: bubblesort(x, n); break;
		default: k = 0;
		}
	}
	return 0;
}
