/* Fawzy - 8251818 */
#include <iostream>
using namespace std;

void Avg(double x, int y)
{
	cout << "The Average = " << x << " / " << y << " = " << x / y << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
}

void Start()
{
	cout << "=-=-= Average Calculator =-=-=" << endl;
	cout << "Average = Sum of all values / Number of values" << endl << endl;
}

int main()
{
	char Re;

	do
	{
		Start();
		int n;
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
		cout << "Enter the Number of values -> ";
		cin >> n;
	
		while (n <= 0)
		{
			cout << "Enter a Positive number! -> ";
			cin >> n;
		}

			double* arr = new double[n];
			double sum = 0;
			for (int i = 0; i < n; i++)
			{
				cout << "Enter the Value num " << i + 1 << " -> ";
				cin >> arr[i];

				sum += arr[i];
			}
			
			Avg(sum, n);
			delete[] arr;
			
			cout << "Wanna Restart ?" << endl;
			cout << "Y: Restart" << endl;
			cout << "N: Exit" << endl;
			cout << "Ur Choice : ";
			cin >> Re;

			while (Re != 'y' && Re != 'Y' && Re != 'N' && Re != 'n')
			{
				cout << "Please Enter Y or N -> ";
				cin >> Re;
			}
			if (Re == 'y' || Re == 'Y')
			{
				system("cls");
			}
			else
			{
				cout << "-=-=-=-=-=-=-" << endl;
				cout << "GoodBye!" << endl;
			}

		} while (Re == 'y' || Re == 'Y');
	
	system("pause");
}