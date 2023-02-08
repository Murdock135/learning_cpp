///**Open Addressing: Linear Probing**/
//
#include <iostream>
using namespace std;
//
//class HashNode
//{
//public:
//    int key;
//    int value;
//    HashNode(int, int);
//};
//
//HashNode::HashNode(int key, int value)
//{
//    this->key = key;
//    this->value = value;
//}
//
//class HashMap
//{
//public:
//    HashMap();
//    int HashFunc(int);
//    void insertNode(int, int);
//    int searchNode(int);
//    void deleteNode(int);
//    void display();
//private:
//    HashNode** htable;
//    HashNode* dummy;
//    int HTsize; // size of hash table
//    int s; // current size
//};
//
//HashMap::HashMap()
//{
//    HTsize = 10;
//    s = 0;
//    htable = new HashNode *[HTsize];
//    dummy = new HashNode(-1, -1); // dummy node for delete operation
//
//    // Initialise all elements of array as NULL
//    for (int i = 0; i < HTsize; i++)
//        htable[i] = NULL;
//}
//
//int HashMap::HashFunc(int k) // This implements hash function to find index for a key
//{
//    return (k % HTsize);
//}
//
//void HashMap::insertNode(int k, int v)
//{
//    if (s == HTsize)
//    {
//        cout << "Hash table is full." << endl;
//        return;
//    }
//
//    HashNode* temp = new HashNode(k, v);
//    int index = HashFunc(k);
//
//    // find next free space
//    while (htable[index] != NULL && htable[index]->key != -1)
//    {
//        index = (index + 1) % HTsize;
//    }
//    temp->key = index;
//
//    htable[index] = temp;
//    s++;
//}
//
//void HashMap::deleteNode(int k)
//{
//    int index = HashFunc(k);
//
//    // finding the node with given key
//    while (htable[index] != NULL)
//    {
//        // if node found
//        if (htable[index]->key == k)
//        {
//            HashNode* temp = htable[index];
//
//            htable[index] = dummy; // insert dummy node here for further use
//            s--;  // reduce count
//        }
//        index = (index + 1) % HTsize;
//    }
//}
//
//int HashMap::searchNode(int k)
//{
//    int index = HashFunc(k);
//    int counter = 0;
//
//    // finding the node with given key
//    while (htable[index] != NULL)
//    {
//        if (counter++ > HTsize) // if htable does not contain the key we're searching for
//            return -1;
//
//        // if node found return its value
//        if (htable[index]->key == k)
//            return htable[index]->value;
//        else
//            return -1;
//        index = (index + 1) % HTsize;
//    }
//
//}
//
//void HashMap::display()
//{
//    bool Empty = true;
//    for (int i = 0; i < HTsize; i++)
//    {
//        if (htable[i] != NULL && htable[i]->key != -1)
//        {
//            cout << "key = " << htable[i]->key << "  value = " << htable[i]->value << endl;
//            Empty = false;
//        }
//    }
//    if (Empty == true)
//        cout << "(Empty hash table)\n";
//
//}
//
//int main()
//{
//    HashMap* h1 = new HashMap;
//
//    h1->display();
//
//    cout << "\n###Insert Node into Hash Table###\n";
//    for (int i = 0; i < 5; i++)
//    {
//        h1->insertNode(i, 2 * i);
//
//    }
//
//    int x = 2;
//    h1->display();
//    cout << "\n###Insert Another Node at Index " << x << "###\n";
//    h1->insertNode(x, 40);
//    h1->display();
//
//    cout << "\n###Delete Node " << x << "###\n";
//    h1->deleteNode(x);
//    h1->display();
//
//    cout << "\n###Insert Another Node at Index " << x << "###\n";
//    h1->insertNode(x, 14);
//    h1->display();
//
//    int a = 4;
//    if (h1->searchNode(a) == -1)
//        cout << "No element found at key " << a << endl;
//    else
//        cout << "Element found at key " << a << "; value is " << h1->searchNode(a) << endl;
//
//    return 0;
//}


/**Chaining (Open Hashing)**/
class HashNode
{
public:
    int key;
    int value;
    HashNode* next;
    HashNode(int, int);
};


HashNode::HashNode(int key, int value)
{
    this->key = key;
    this->value = value;
    this->next = NULL;
}


class HashMap
{
public:
    HashMap();
    ~HashMap();
    int HashFunc(int);
    void insertNode(int, int);
    int searchNode(int);
    void deleteNode(int);
    void display();
private:
    HashNode** htable;
    int HTsize; // size of hash table
};

HashMap::HashMap()
{
    HTsize = 10;
    htable = new HashNode *[HTsize];

    // Initialise all elements of array as NULL
    for (int i = 0; i < HTsize; i++)
        htable[i] = NULL;
}

HashMap::~HashMap()
{
    for (int i = 0; i < HTsize; ++i)
    {
        HashNode* entry = htable[i];
        while (entry != NULL)
        {
            HashNode* prev = entry;
            entry = entry->next;
            delete prev;
        }
    }
    delete[] htable;
}

int HashMap::HashFunc(int k) // This implements hash function to find index for a key
{
    return (k % HTsize);
}

void HashMap::insertNode(int k, int v)
{
    int index = HashFunc(k);
    HashNode* prev = NULL;
    HashNode* entry = htable[index];

    // traverses till the end of the list
    while (entry != NULL)
    {
        prev = entry;
        entry = entry->next;
    }

    entry = new HashNode(k, v);
    if (prev == NULL) // no node yet
        htable[index] = entry;
    else
        prev->next = entry;
}

void HashMap::deleteNode(int k)
{
    int index = HashFunc(k);

    HashNode* entry = htable[index];
    HashNode* prev = NULL;

    if (entry == NULL || entry->key != k) //checks if the key is in the hash table
    {
        cout << "No Element found at key " << k << endl;
        return;
    }

    while (entry->next != NULL)
    {
        prev = entry;
        entry = entry->next;
    }

    if (prev != NULL)
        prev->next = entry->next;

    cout << "Key = " << k << " deleted" << endl;
    htable[index] = NULL;
    delete entry;

}

int HashMap::searchNode(int k)
{
    int index = HashFunc(k);
    bool flag = false;

    HashNode* entry = htable[index];
    while (entry != NULL)
    {
        if (htable[index]->key == k)
        {
            cout << "Element found at key " << k << ": ";
            cout << entry->value << endl;
            flag = true;
        }
        entry = entry->next;
    }

    if (!flag)
        cout << "Key " << k << " not found\n";
}

void HashMap::display()
{
    cout << "Key\tValue" << endl;
    for (int i = 0; i < HTsize; i++)
    {
        cout << i << "\t";

        HashNode* current = htable[i];

        while (current != NULL)
        {
            cout << current->value << " --> ";
            current = current->next;
        }

        cout << "NULL" << endl;
    }
    cout << endl;
}

int main()
{
    int a[] = { 15, 11, 27, 8, 12 };
    int n = sizeof(a) / sizeof(a[0]);
    HashMap h1;

    for (int i = 0; i < n; i++)
        h1.insertNode(i, a[i]);
    h1.display();
    h1.insertNode(11, 20);
    h1.display();

    h1.searchNode(3);

    h1.deleteNode(3);
    h1.display();

    h1.searchNode(3);

    return 0;
}
