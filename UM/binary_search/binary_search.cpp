/**Binary Search**/

#include <iostream>
using namespace std;

void binarySearch(int a[], int length, int key)
{

	int first = 0, last = length - 1, mid;
	int counter = 0;
	bool found = false, repeat = false;

	while (first <= last && !found)
	{
		++counter;
		mid = (last + first) / 2;
		cout << "\t#" << counter << " First: " << first << " Last: " << last << " Mid: " << mid << endl;

		if (a[mid] == key)
		{
			cout << key << " found at " << mid << " (#" << counter << ")\n";
			found = true;
			break;
		}
		else if (a[mid] > key)
			last = mid - 1;
		else
			first = mid + 1;
	}

	if (!found)
		cout << key << " not found. \n";
}

int main()
{
	const int length = 13;
	int data[length] = { 2,20,38,41,49,56,62,70,88,95,100,135,145 }, data1[13];

	binarySearch(data, length, 20);

	return 0;
}
