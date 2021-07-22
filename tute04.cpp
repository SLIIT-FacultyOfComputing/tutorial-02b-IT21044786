/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long nCr(int n,int r)
{
	
	long nt,rt,st;
	nt=1;
	for(int x=n;x>=1;x--){
		nt=nt*x;
	}
	
	rt=1;
	for(int x=r;x>=1;x--){
		rt=rt*x;
	}
	
	st=1;
	for(int x=(n-r);x>=1;x--){
		st=st*x;
	}
	
	return nt/(rt*st);
}
