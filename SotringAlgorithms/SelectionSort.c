void SelectionSort(int arr[], int n)
{
  int temp;

	for(int i=0; i < n-1; i++)
	{
		int Imin = i;
		for(int j=i+1; j< n; j++)
		{
			if(arr[j] < arr[Imin])
			{
				Imin = j;
			}
		}
		temp = arr[Imin];
		arr[Imin] = arr[i];
		arr[i] = temp;
	}
}
