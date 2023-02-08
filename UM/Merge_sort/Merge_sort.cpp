/**Merge Sort: Array-based Lists**/

#include <iostream>
using namespace std;

const int n = 10;

void display(int a[], int x, int y)
{
	cout << "( ";
	for (int i = x; i <= y; i++)
		cout << a[i] << " ";
	cout << ")";
}

void Merge(int a[], int first, int mid, int last)
{
	int leftIndex = first;
	int rightIndex = mid + 1;
	int tempIndex = first;
	int temp[n];

	cout << "Merge: ";
	display(a, first, mid);
	cout << " + ";
	display(a, rightIndex, last);
	cout << "--> ";

	while (leftIndex <= mid && rightIndex <= last)
	{
		if (a[leftIndex] <= a[rightIndex])
			temp[tempIndex++] = a[leftIndex++];
		else
			temp[tempIndex++] = a[rightIndex++];
	}

	//  Copy the remaining elements of first sub-array, if there are any
	while (leftIndex <= mid)
		temp[tempIndex++] = a[leftIndex++];

	// Copy remaining elements of last sub-array, if there are any
	while (rightIndex <= last)
		temp[tempIndex++] = a[rightIndex++];

	// copy temp to original array
	for (int i = first; i <= last; i++)
		a[i] = temp[i];

	display(a, first, last);
	cout << endl;
}

void mergeSort(int a[], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		cout << "Split [mid=" << mid << "]";
		display(a, low, high);
		cout << " --> ";
		display(a, low, mid);
		cout << "  ";
		display(a, mid + 1, high);
		cout << endl;
		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);
		Merge(a, low, mid, high);
	}
}

int main()
{

	int a[n] = { 12, 14, 25, 8, 35, 89, 56, 85, 16, 15 };

	cout << "***Merge Sort***\nBefore: ";
	display(a, 0, n - 1);
	cout << endl;

	mergeSort(a, 0, n - 1);

	cout << "After: ";
	display(a, 0, n - 1);
	cout << endl;
	return 0;
}
