/*sum of odd position elements using pointers*/

#include <stdio.h>//header file

int main() //execution starts from here
{
    int arr[5]={10,12,16,18,20};// initialisation of array with int data type
    int sum=0;//declaration of sum=0 with int data type
    int *ptr;//declaration of pointer with int data type
    ptr=&arr;//assiging address of array to pointer
    for(int i=0;i<5;i++)//for loop iterate
    {
        if(i%2!=0)//condition to find odd indices
        {
            sum=sum+*ptr;//sum and value in the address is added and Assigned to sum to get to sum
        }
        *ptr++;//incrementing the pointer to get succeded indices values
       // dereference to next address
    }
    printf(" the value after adding odd positions of array: %d",sum);//finally printing the sum of odd position elements

    return 0;//return type
}

output:
the value after adding odd positions of array: 30

/*reverse the array using pointers*/

#include <stdio.h>//header file
#define N 5//macro declaration for lenth of an array
int main() //execution starts from here
{
    int arr[N]={10,12,16,18,20};//initialisation of array with int data type
    int sum=0;//declaration of int data type
    int *ptr;//declaration of pointer
    ptr=arr;//assigning array to pointer
    int temp;//declarating temp variable
   for(int i=0;i<N/2;i++)//for loop to iterate
   {
     temp=ptr[i];//first index value is assigned to temp
     ptr[i]=ptr[N-(i+1)];//(size -index+1 ) is assigned to respective pointer
     ptr[N-(i+1)]=temp;//finally this pointer value is assigned to temp for swapping
   }
   for(int i=0;i<N;i++)//for loop to print the output
   {
   printf("%d ",ptr[i]);//printining statement for reversing the array
   }
   
    return 0;//return type
}



output:
20  18  16  12  10 




