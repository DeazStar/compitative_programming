int select(int arr[], int i)
{
    arr[i];
}


void selectionSort(int arr[], int n)
{
  //code here
  
  int min_position, i, j;
  int tmp;
  
  for (i = 0; i < n; i++){
    min_position = i;
      
    for (j = i; j < n; j++)
    {
        if (arr[min_position] > arr[j])
        {
            min_position = j;
        }
    }
    
    select(arr, min_position);
    
    if (min_position != i)
    {
        tmp = arr[min_position];
        arr[min_position] = arr[i];
        arr[i] = tmp;
    }
  }
}
