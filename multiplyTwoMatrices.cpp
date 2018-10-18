/* C++ Program - Multiply Two Matrices */
		
#include<iostream>
//#include<conio.h>
//#include<stdio.h>
//#include<stdlib.h>
using namespace std;
int main()
{
	//clrscr();
	int x,y,z;
	cout<<"Two matrices are X*Y, Y*Z! Enter the value of X,Y,Z\n";
	cin>>x>>y>>z;
	int mat1[x][y], mat2[y][z], mat3[x][z], sum=0, i, j, k;


	cout<<"Enter first matrix element "<<x<<"*"<<y<<":\n";
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter second matrix element "<<y<<"*"<<z<<":\n";
	for(i=0; i<y; i++)
	{
		for(j=0; j<z; j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"Multiplying two matrices...\n";
	for(i=0; i<x; i++)
	{
		for(j=0; j<z; j++)
		{
			sum=0;
			for(k=0; k<y; k++)
			{
				sum = sum + mat1[i][k] * mat2[k][j];
			}
			mat3[i][j] = sum;
		}
	}
	cout<<"\nMultiplication of two Matrices : \n";
	for(i=0; i<x; i++)
	{
		for(j=0; j<z; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<"\n";
	}
	//getch();
	return 0;
}
