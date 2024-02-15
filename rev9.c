#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void swap(int *a,int *b)
{
	int temp;

	temp=*a;
	*a=*b;
	*b=temp;
}

void merge(int arr[], int p, int q, int r) {

  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);


    merge(arr, l, m, r);
  }
}

// function to find the partition position
int partition(int array[], int low, int high) {
  

  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// perform the bubble sort
void bubbleSort(int array[], int size) {


  for (int step = 0; step < size - 1; ++step) {
      
    for (int i = 0; i < size - step - 1; ++i) {
      
      if (array[i] > array[i + 1]) {
  
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


void array(int arr[], int n)
{
for (int i = 0; i < n; i++)
{
arr[i] = n - i - 1;
}
}

void bubble_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
			}
		}
	}
}


int main(){
//file creating
FILE *fp;
fp=fopen("file1.txt","w+");
srand(time(0));
for(int i=0;i<1e5;i++){
fprintf(fp,"%d ",rand());
}
fclose(fp);

//reading file 
int *arr1=(int*)malloc(1e5*sizeof(int)); //dynamic allocation of array
fp=fopen("file1.txt","r");
int size=500;
for(int i=0;i<size;i++)
	fscanf(fp,"%d",&arr1[i]);

fclose(fp);
int i=0;
int size_arr=5000;

//Bubble sort
printf("Bubble Sort\n");
while(i<5){

clock_t bst,bet;
bst=clock();
bubble_sort(arr1,size_arr);
bet=clock();
double diff=(double)(bet-bst)/CLOCKS_PER_SEC;
printf("%d: %f \n",size_arr,diff);
size_arr+=5000;
i++;
}


printf("MERGE_SORT\n");
int j=0;


//Merger sort
size_arr=5000;

while(j<5){
clock_t bst,bet;
bst=clock();
mergeSort(arr1,0,size_arr);
bet=clock();
double diff=(double)(bet-bst);
printf("%d : %f \n",size_arr,diff);
size_arr+=5000;
j++;
}

//QUICK SORT
printf("Quick Sort\n");
size_arr=5000;

int k=0;
while(k<5){
clock_t bst,bet;
bst=clock();
quickSort(arr1,0,size_arr);
bet=clock();
double diff=(double)(bet-bst)/CLOCKS_PER_SEC;
printf("%d : %f \n",size_arr,diff);
size_arr+=5000;
k++;
}
}

