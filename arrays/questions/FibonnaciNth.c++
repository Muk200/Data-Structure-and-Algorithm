#include<iostream>
using namespace std;

//using Recursive method

int Fibonacci(int n)
{
if (n <= 1) 
return n; 
return Fibonacci(n - 1) + Fibonacci(n - 2); 
}


int main()

// SIMPLE METHOD

//formula of nth term
// (n-1)th + (n-2)th
{
/*
int n, t1 = 0, t2 = 1, nextTerm = 0, i;
cout << "Enter the n value: ";
cin >> n;

if(n == 0 || n == 1) 
cout << n; 
else
nextTerm = t1 + t2;

for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}

cout << t2;
*/

//using Recursive method


{
int n;
cout << "Enter the n value: ";
cin >> n;
cout << Fibonacci(n-1);
}

}

