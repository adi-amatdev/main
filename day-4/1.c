
#include <stdio.h>

int main()
{
    //a
    int arr1[10]; //array has been declared of 10 elements.
    //b
    int n=10;
    int arr2[n];//array has been declared using variable n and n is intialised to a value of 10.
    //c
    int arr[]={10,20,30,40};//array size is not declared, 4 elements exist.
    //d
    int arr[6] = { 10, 20, 30, 40 }// array has been declared with 6 elements and 4 elements have been entered .
    //e
    int arr[ ]; //compilation error will occur as no size nor element has been entered
    //f
    int arr[5];
    arr[3 / 2] = 2;//declared 5 elements and dividing its index
    //g
     int arr[2] = { 10, 20, 30, 40, 50 };//will result in a warning as more elements than that alloted from memory is entered 
     //h
     int arr[2];
printf("%d ", arr[3]);
printf("%d ", arr[-2]);// will result in garbage values 
}
