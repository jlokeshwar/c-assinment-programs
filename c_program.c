
//sum of function
#include <stdio.h>

 int add(int ,int );
 
 int main()
 {
     int m=10,n=20,sum;
     sum = add(m,n);
     printf("sum of %d",sum);
     return 0;
 }
 
 int add(int a,int b)
 {
     return (a+b);
 }




// function calling with passing argument

#include <stdio.h>

 
 void fun( int,int );  //function declaration
 int main()
 {
     int m=10,n=20;
     fun(m,n);//function with passing arguments to the function
    return 0;
    
 }
 void fun(int m,int n)  //fnction defination section and it takes formal arguments m and n
 {
     printf("the sum of m and n:%d", m+n);
 }
 


// function call by reference

#include <stdio.h>

 
 void fun( int*,int* );  //function declaration
 int main()
 {
     int m=10,n=20;
     fun(&m,&n);//function with passing arguments to the function
    return 0;
    
 }
 void fun(int *m,int *n)  //fnction defination section and it takes formal arguments m and n
 {
     printf("the sum of m and n by call by referance :%d", *m+*n);
 }




// returning type function 

#include <stdio.h>

 int returning(); //function declaration
 int main()
 {
     int hello=returning();  //function calling and storing the value obtained from called function after executing returning function
     printf("%d",hello);
     
 }
 int returning() // return type is int as we returning integer value
 {
     int localvalue=10;
     return localvalue;//returning local value
 }




// swapping the function

 #include<stdio.h>  
      void swap(int, int);  // function declaration
      
    int main()  
    {  
        int a, b;  
      
        printf("Enter values for a and b\n");  
        scanf("%d%d", &a, &b);  
      printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
      swap(a, b);  
      
        return 0;  
    }  
      
    void swap(int x, int y)  
    {  
        int temp;  
      
        temp = x;  
        x    = y;  
        y    = temp;  
      
        printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
    }  




//swapping without using temp    

#include<stdio.h>  
      void swap(int, int);  // function declaration
      
    int main()  
    {  
        int a, b;  
      
        printf("Enter values for a and b\n");  
        scanf("%d%d", &a, &b);  
      printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
      swap(a, b);  
      
        return 0;  
    }  
      
    void swap(int x, int y)  
    {  
          x=x+y;
          y=x-y;
          x=x-y;
      
         
      
        printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
    }  



// area of rectangle using functions
#include <stdio.h>

 int areaofrectangle(int length,int breath)
{
    
   int area;
   area=length*breath;
   return area;

}
int main()
{
    int i=10, j=20;
    int area=areaofrectangle(i,j);
    printf("%d\n",area);

    return 0;
}


