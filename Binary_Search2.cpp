#include <iostream>
using namespace std;

int main () 
{
	int f=0, i, item, lr=0, up=4;
	
	int arr[] = {20, 40, 60, 80};
	
	cout << "Enter searching item : ";
	cin >> item;
	
	while (lr <= up)
	{
		int mid = (lr + up) / 2;
		
		if(arr[mid] == item)
		{
			f = 1;
			break;
		}
		else if (arr[mid] < item)
		{
			lr++;
		}
		else
		{
			up--;
		}
		
	}
		
	if (f == 1)
	{
		cout << "Item found";
	}
	else
	{
		cout << "Item not found.";
	}
}