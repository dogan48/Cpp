#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	double fact (double n)
	{
		if(n==0) return 1;
		else return fact(n-1)*n;
	}
int main(int argc, char** argv) {
	
	
	double x=fact(60);

std ::	cout<<x;
	
		
		
	return 0;
}
