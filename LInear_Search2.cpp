#include <iostream>
using namespace std;

int main () 
{
	int item, i=0;
	
	int arr[] = {20, 40, 60, 80};
	
	cout << "Enter the searching item : ";
	cin >> item;
	
	while (i < 5)
	{
		if (arr[i] == item)
		{
			cout << "Item found at " << i;
			break;	
		}
		
		i++;	
	}	
	
	return 0;
}