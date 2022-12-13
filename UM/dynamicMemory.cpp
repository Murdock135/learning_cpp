#include <iostream>
using namespace std;

int *p, *q;
p = new int;
*p = 34;
cout << "Initial p = " << p << ", *p = " << *p << endl;
p = new int;
*p = 18;
cout << "New p = " << p << ", *p = " << *p << endl; // different address
*q = 45;
cout << "Initial q = " << q << ", *q = " << *q << endl;
delete q;
q = NULL; // to be sure not to delete the same block of memory again
q = new int;
*q = 62;
cout << "New q = " << q << ", *q = " << *q << endl; // memory deallocated