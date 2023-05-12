//
// Created by myatz on 4/4/2023.
//

#ifndef ARRAYFUNCTIONS_FUNCTIONS_H
#define ARRAYFUNCTIONS_FUNCTIONS_H
#include <iostream>
void arrayFunctions();

void insertionSort(int arr[], int size);
void fillArray(int arr[], int size);
void fillArray(int arr[], int size, int defaultValue);
void printArray(const int arr[], int size);
void shiftLeft(int arr[], int size, int index, int numUsed);
void shiftLeft(int arr[], int index, int size);
void shiftRight(int arr[], int size, int index, int numUsed);
void remove(int arr[], int size, int numUsed, int value);
void remove(int arr[], int numUsed, int value);
void insert(int arr[], int size, int numUsed, int value, int index);
void insert(int arr[], int numUsed, int value, int index);
void swap(int &frontValue, int &backValue);

void output(std::string message);
#endif //ARRAYFUNCTIONS_FUNCTIONS_H
