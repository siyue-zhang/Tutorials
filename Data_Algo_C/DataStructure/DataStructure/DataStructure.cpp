
#include <iostream>
#include <stdio.h> // for cpp

using namespace std;

int main()
{

/*
	int A[10] = {2,4,5,6,12};

	cout<<sizeof(A)<<endl; // A[5] size is 20, 4 bytes per number
	// endl move to the next line

	cout <<A[1]<<"\n"; // cout is for cpp
	printf("%d\n", A[8]); // printf is for c

	int B[5] = { 1,2,3,4,66};

	for (int x:B)
	{
		cout << x << endl;
	}
*/
	int a=10;
	int *p;
	p = &a;
	
	cout<<*p<<endl;

	return 0;
}
