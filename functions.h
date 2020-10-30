#include <iostream>
using namespace std;
int counter = 0;

int getNum(){
	int n;
	
	 do{
	 	counter++;
	 	cout << "Input number: " <<endl; ;
		cin >>  n;
	 }while (counter<1);
	
	return n;
}

int sum (int a, int b){
	return (a + b);
}

int product (int a, int b){
	return (a * b);
}

int difference (int a, int b){
	return (a - b);
}
