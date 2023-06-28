#include <iostream>
using namespace std;


void LEADER(int arr[], int size)
{
	int right_max = arr[size-1];


	cout << right_max << " ";
	
	for (int i = size-2; i >= 0; i--)
	{
		if (right_max < arr[i])
		{		
			right_max = arr[i];
			cout << right_max << " ";
		}
	}
}


int main()
{
	int arr[] = {7, 10, 4, 10, 6, 5, 2};
	int n = sizeof(arr)/(sizeof(arr[0]));
    /* cout << n<<endl;*/
	LEADER(arr, n);
	return 0;
}
/* solving using two for loops will make it O(n*n)*/
/* above time complexity is O(n)*/
