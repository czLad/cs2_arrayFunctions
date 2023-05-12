//
// Created by myatz on 4/4/2023.
//

#include "functions.h"
void arrayFunctions()
{
    const int size = 12;
    const int numUsed = 10;
    int array[size];
    fillArray(array, size, 0);
    printArray(array, size);
    output("\n");
    fillArray(array, numUsed);
    printArray(array, numUsed);
    output("\n");
    shiftLeft(array, size, 3, numUsed);
    printArray(array, numUsed);
    output("\n");
    shiftRight(array, size, 3, numUsed);
    printArray(array, numUsed);
    output("\n");
    remove(array, size, numUsed, 5);
    printArray(array, numUsed);
    output("\n");
    insert(array, size, numUsed, 7, 3);
    printArray(array, numUsed);
    output("\n");
    insertionSort(array, numUsed);
    printArray(array, numUsed);
}

void insertionSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
            int j = i;
            while(arr[j] > arr[j + 1] && j >= 0)
            {
                swap(arr[j], arr[j+1]);
                j--;
            }
    }
}
void shiftLeft(int arr[], int size, int index, int numUsed)
{
    while(index < numUsed - 1)
    {
        arr[index] = arr[index + 1];
        index++;
    }
}
void shiftLeft(int arr[], int index, int size)
{
    while(index < size - 1)
    {
        arr[index] = arr[index + 1];
        index++;
    }
}
void shiftRight(int arr[], int size, int index, int numUsed)
{
    int maxIndex = 0;
    maxIndex = numUsed - 1;
    for(int i = index; i < maxIndex; i++)
    {
        numUsed --;
        arr[numUsed] = arr[numUsed - 1];
    }
}
void remove(int arr[], int size, int numUsed, int value)
{
    for(int i = 0; i < numUsed; i++)
    {
        if(arr[i] == value)
        {
            arr[i] = 0;
            break;
        }
    }
}
void remove(int arr[], int numUsed, int value)
{
    for(int i = 0; i < numUsed; i++)
    {
        if(arr[i] == value)
        {
            arr[i] = 0;
            break;
        }
    }
}
void insert(int arr[], int size, int numUsed, int value, int index)
{
    if(index < numUsed)
    {
        arr[index] = value;
    }
}
void insert(int arr[], int numUsed, int value, int index)
{
    if(index < numUsed)
    {
        arr[index] = value;
    }
}
void fillArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}
void fillArray(int arr[], int size, int defaultValue)
{
    for(int i=0; i < size; i++)
    {
        arr[i] = defaultValue;
    }
}
void printArray(const int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "   ";
    }
}
void swap(int &frontValue, int &backValue)
{
    int temp = frontValue;
    frontValue = backValue;
    backValue = temp;
}
void output(std::string message)
{
    std::cout << message;
}