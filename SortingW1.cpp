//
// Created by Rabbi Islam Emon on 5/31/2025.
//
#include<iostream>
using namespace std;

void printData(int nums[], int n);
void menu();
void Swap(int* a, int* b);

int main()
{
    int n;
    cout<<"Enter the number of Elements: ";
    cin>>n;

    int nums[n];
    for (int i=0; i<n ; i++)
    {
        cin>>nums[i];
    }
    cout<<"\ndata before Sorting: ";
    printData(nums,n);
    menu();
}

void selectionSort(int nums[], int n)
{
    int i,j,minIndex;
    for (i = 0; i<n; i++)
    {
        minIndex = i;
        for (j = i+1; j<n; j++)
        {
            if (nums[minIndex] > nums[j])
                minIndex = j;
        }
        Swap(&nums[minIndex], &nums[j]);
    }
}
void Swap(int* a, int* b)
{
    const int temp = *a;
    *a = *b;
    *b= temp;
}
void menu()
{
    cout<<"\n1.selection sort\n";
    cout<<"\n2.Bubble Sort\n";
    cout<<"\n2.Print Data\n";
}
void printData(int nums[], int n)
{
    for (int i=0; i<n; i++)
        cout<<nums[i];
}
