#include <iostream>
using namespace std;

int n;
int x[100];
int phandoan(int x[], int left, int right) {
	int i = left + 1;
	int j = right;
	int pivot = left;
	while (i <= j) {
		while (x[i] < x[pivot]) i++;
		while (x[j] > x[pivot]) j--;
		if (i < j)
		{
			swap(x[i], x[j]);
			i++; j--;
		}
	}
	pivot = j;
	swap(x[left], x[j]);
	return pivot;
}
void quicksort(int x[], int left, int right) {

	if (right <= left) {
		return;
	}
	else {
		int p = phandoan(x, left, right);
		quicksort(x, left, p - 1);
		quicksort(x, p + 1, right);
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	quicksort(x, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	return 0;
}