#include <iostream>
#include "functions.h"
using namespace std;

int main (){
	int choice, n1, n2;
	char choice2;
	
	do{
		do{
			cout << endl <<"===================="<< endl;
			cout <<	"[0] - Exit" << endl;
			cout <<	"[1] - Addition"<< endl;
			cout <<	"[2] - Multiplication"<< endl;
			cout <<	"[3] - Subraction"<< endl;
			cout <<	 endl <<"===================="<< endl;
			cout << endl << "Select Function: "<< endl;
			cin >> choice;

			if (choice > 3 || choice < 0){
			cout << "\nIncorrect input."<< endl;
				system("pause");
				system("cls");
			}
		}while (choice > 3 || choice < 0);
		
		if (choice == 0)
			break;
		cout <<  endl;
		n1 = getNum();
		n2 = getNum();
		
		cout << endl << "Input:" << n1 <<"\t"<< n2 << endl;
		switch (choice){
			case 1:
				cout << endl <<"===================="<< endl;
				cout<< endl << "Sum = "<< sum (n1, n2)<< endl;
				cout << endl <<"===================="<< endl;
				break;
			case 2:
				cout << endl <<"===================="<< endl;
				cout << endl<< "Product = "<< product (n1, n2)<< endl;
				cout << endl <<"===================="<< endl;
				break;
			case 3:
				cout << endl <<"===================="<< endl;
				cout << endl<< "Difference = "<< difference (n1, n2)<< endl;
				cout << endl <<"===================="<< endl;
				break;
		}
		
		do{
			cout << endl << endl <<"Do you want to try again? (y/n): ";
			cin >>  choice2;
			if (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N')
			cout << "\nInvalid choice. Choose 'Y' or 'N'"<< endl;
		}while (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N');
		
		cout << endl ;
		system ("pause");
		system ("cls");
	}while (choice2 == 'y' || choice2 == 'Y');
	
	cout << endl << "Programmed by: Flonie Mae P. Romulo";
	return 0;
}

