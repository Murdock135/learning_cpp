#include <iostream>

int searchArray(int array[], int size, int element);

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;    

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    std::cout << index;
    
    return 0;

}

int searchArray(int array[], int size, int element){
    int index = -1;
    for(int i = 0; i < size; i++){
        array[i]==element ? index=i : index = -1;
    }
    if(index = -1){ std::cout << "number not in array" << '\n';}
    
    return index;
}