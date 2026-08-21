// Addition using Function
#include<stdio.h>
int add(); // Function declaration
int main()
{
  int x;
  x = add(); // Calling add() and storing returned value

  printf("%d", x); // Displaying the result
  return 0;
}
int add () // Function definition
{
  int no1 = 10, no2 = 20;
  int res = no1 + no2;  // Adding two numbers

  return res;  // Returning the sum
}


// Even/Odd using Function and
#include<stdio.h>
int evenodd();  // Function declaration
int main()
{
  int x;
  x = evenodd();  // Get result from function
  if(x == 1)   // 1 means even, 0 means odd
    printf("Even");
  else
    printf("Odd");

  return 0;
}
int evenodd()  // Checks whether the number is even or odd
{
  int no = 6;
  if(no % 2 == 0)  // Check divisibility by 2
    return 1;
  else
    return 0; 
}


// Even/Odd using char Return Type
#include<stdio.h>
char evenodd();  
char main()
{
  char x;
  x = evenodd();
  if(x == 'A')   // 'A' represents even
    printf("Even");
  else
    printf("Odd");

  return 0;
}
char evenodd() // Returns a character based on the result
{
  char no = 6;
  if(no % 2 == 0)  // Check whether number is divisible by 2
    return 'A';
  else
    return 'B'; 
}

// Calling Function Directly in if
#include<stdio.h>
int evenodd();
int main()
{
  int x;
  x = evenodd();  // Function result is stored in x
  if(evenodd() == 1) // Function is called again for condition
    printf("Even");
  else
    printf("Odd");

  return 0;
}
int evenodd()
{
  int no = 6;
  if(no % 2 == 0)
    return 1;
  else
    return 0; 
}


// Function Result Directly in if
#include<stdio.h>
int evenodd();
int main()
{
  int x;
  x = evenodd(); // Store the returned value
  if(evenodd()) // Non-zero value means true
    printf("Even");
  else
    printf("Odd");

  return 0;
}
int evenodd() // Returns 1 for even and 0 for odd
{
  int no = 6;
  if(no % 2 == 0)  // Modulus checks the remainder
    return 1;
  else
    return 0; 
}


// Prime Number using Function
#include<stdio.h>
int isprime();
int main()
{
  int res = isprime(); 
  if(res==1)   // 1 indicates that the number is prime
    printf("No is prime");
  else
    printf("No is not prime");
  return 0; 
} // main ends here

int isprime()  // Checks whether the entered number is prime
{
  int no;
  printf("Enter a Number: ");
  scanf("%d", &no);

  int flag=0;
  for (int i=2; i<no; i++)  // Check for factors between 2 and no-1
  {
    if (no%i==0) // If divisible, number is not prime
    {
      flag=1;
      break;
    }
  }
  if(flag==0) // No factor found means prime
    return 1;
  else
    return 0;
}



