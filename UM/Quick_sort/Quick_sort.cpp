/**Quick Sort**/

#include <iostream>
using namespace std;

void quickSort(int a[], int lf, int rg)
{
	int pos = (lf + rg) / 2;
	int pivot = a[pos];

	int x = lf, y = rg, tmp;

	cout << "QuickSort [(leftmark) " << lf << ", " << rg << "(rightmark)] Pivot: " << pivot << "[" << pos << "] ";
	cout << "( ";
	for (int i = lf; i <= rg; i++)
		cout << a[i] << " ";
	cout << ") --> \n";

	while (x <= y)
	{
		while (a[x] < pivot)
		{
			x++;
			cout << "( ";
			for (int i = lf; i <= rg; i++)
				cout << a[i] << " ";
			cout << ") x = " << x << " y = " << y << "\n";

		}
		while (a[y] > pivot)
		{
			y--;
			cout << "( ";
			for (int i = lf; i <= rg; i++)
				cout << a[i] << " ";
			cout << ") x = " << x << " y = " << y << "\n";

		}
		if (x <= y)
		{
			tmp = a[x];
			a[x] = a[y];
			a[y] = tmp;
			x++;
			y--;
			cout << "( ";
			for (int i = lf; i <= rg; i++)
				cout << a[i] << " ";
			cout << ") x = " << x << " y = " << y << "\n";
		}
	}

	cout << "( ";
	for (int i = lf; i <= rg; i++)
		cout << a[i] << " ";
	cout << ") x = " << x << " y = " << y << "\n";

	if (lf < y) {
		cout << "(Front): ";
		quickSort(a, lf, y);
	}
	if (x < rg) {
		cout << "(End): ";
		quickSort(a, x, rg);
	}
};

int main()
{
	int a[9] = {50,36,78,40,4,28,90,62,2}, n = 9;

	cout << "***Quick Sort***\nBefore:{ ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "}" << endl << endl;

	quickSort(a, 0, n - 1);

	cout << "\nAfter:{ ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "}" << endl;


	return 0;
}
