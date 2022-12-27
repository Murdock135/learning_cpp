// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IntegerSet.h"
using namespace std;


int main()
{
    //set1
    IntegerSet set1(5); 
    //set2
    bool a[] = { 0,0,1 };
    int sizea = sizeof(a) / sizeof(a[0]);
    IntegerSet set2(a,sizea);
    //set3
    IntegerSet set3(3);
    set3.setVal(3);
    //set4
    bool b[] = { 1,1,0,0,1 };
    int sizeb = sizeof(b) / sizeof(b[0]);
    IntegerSet set4(b, sizeb);
    //set5
    bool c[] = { 0,0,1,0,0 };
    int sizec = sizeof(c) / sizeof(c[0]);
    IntegerSet set5(c, sizec);
    //set6
    bool d[] = { 0,0,1,0,1 };
    int sized = sizeof(d) / sizeof(d[0]);
    IntegerSet set6(d, sized);

    //d
    cout << "(d)" << endl;
    cout << "Test PrintSet function" << endl;

    cout << "Set 1: ";
    set1.printSet();
    cout << endl;

    cout << "Set 2: ";
    set2.printSet();
    cout << endl;

    cout << "Set 3: ";
    set3.printSet();
    cout << endl;

    cout << "Set 4: ";
    set4.printSet();
    cout << endl;

    cout << "Set 5: ";
    set5.printSet();
    cout << endl;

    cout << "Set 6: ";
    set6.printSet();
    cout << endl;



    cout << "------------------" << endl;
    cout << "Test setval() function" << endl;
    set1.setVal(2, true);
    cout << "set1.setVal(2, true) gives " << endl;
    cout << "Set 1 =";
    set1.printSet();

    cout << "------------------" << endl;
    cout << "Test [] operator" << endl;
    cout << "set1[2] = ";
    cout << set1[2];
    cout << endl;

    cout << "------------------" << endl;
    cout << "Test = operator" << endl;

    cout << "Set 1: ";
    set1.printSet();
    cout << endl;

    cout << "Set 2: ";
    set2.printSet();
    cout << endl;

    cout << "Setting set1 = set2, set1 becomes " << endl;
    set1 = set2;
    cout << "Set 1: ";
    set1.printSet();
    //c
    cout << "------------------" << endl;
    cout << "(c)" << endl;
    cout << "~ Test insert() function ~ " << endl;

    cout << "Set 1: ";
    set1.printSet();
    cout << endl;

    cout << "After inserting 5, set 1 becomes: " << endl;
    set1.insert(5);
    set1.printSet();
    //a
    cout << "------------------" << endl;
    cout << "(a)" << endl;
    cout << "~ Test Union() function ~ " << endl;
    cout << "Union of Set 3 and Set 4 is " << endl;

    cout << "Set 3: ";
    set3.printSet();
    cout << endl;

    cout << "Set 4: ";
    set4.printSet();
    cout << endl;

    IntegerSet set3u4;
    set3u4 = set3.unions(set4);
    cout << "set3union4: ";
    set3u4.printSet();
    //b
    cout << "------------------" << endl;
    cout << "(b)" << endl;
    cout << "~ Test Intersection() function ~ " << endl;
    cout << endl;

    //Intersection between set 3 and set 4
    cout << "Intersection of Set 3 and Set 4 is " << endl;

    cout << "Set 3: ";
    set3.printSet();
    cout << endl;

    cout << "Set 4: ";
    set4.printSet();
    cout << endl;

    IntegerSet set3i4;
    set3i4 = set3.intersection(set4);
    cout << "set3intersection4: ";
    set3i4.printSet();

    //Intersection between set 3 and set 4
    cout << "Intersection of Set 3 and Set 5 is " << endl;
    cout << "Set 3: ";
    set3.printSet();
    cout << endl;

    cout << "Set 5: ";
    set5.printSet();
    cout << endl;

    IntegerSet set3i5;
    set3i5 = set3.intersection(set5);
    cout << "set3intersection5: ";
    set3i5.printSet();


    //e
    cout << "------------------" << endl;
    cout << "(e)" << endl;
    cout << "~ Test isEqual() function ~ " << endl;
    cout << "Are set3 and set5 equal? " << endl;

    cout << "Set 3: ";
    set3.printSet();
    cout << endl;

    cout << "Set 5: ";
    set5.printSet();
    cout << endl;

    set3.isEqualTo(set5);
    cout << endl;

    cout << "Are set6 and set3 equal? " << endl;

    cout << "Set 6: ";
    set6.printSet();
    cout << endl;

    cout << "Set 3: ";
    set3.printSet();
    cout << endl;


    set6.isEqualTo(set3);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
