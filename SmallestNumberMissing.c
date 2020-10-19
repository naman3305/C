
#include<stdio.h>
void merge(int arr[], int si,int mid, int ei);
void mergeSort(int arr[], int si, int ei);
int smallest(int arr[],int size);

int main()
{
int size;
scanf("%d",&size);
//input array
int arr[size];
for(int i = 0; i < size; i++){
scanf("%d",&arr[i]);
}

mergeSort(arr,0,size-1);

for(int i = 0; i < size; i++){
printf("%d ",arr[i]);
}

printf("\n%d",smallest(arr,size));
}

void merge(int arr[], int si,int mid, int ei){
int temp[ei-si+1];


//i--first half
//j--second half
//k--for new array

int i = si , j = mid+1, k= 0;

while(i<=mid && j<=ei){
if(arr[i]<=arr[j]){
temp[k]=arr[i];
k++;
i++;
}
else{
temp[k] = arr[j];
k++;
j++;
}
}


//2nd half array finishes

while(i<=mid){
temp[k] = arr[i];
k++;
i++;
}


//first half array finishes

while(j<=ei){
temp[k] = arr[j];
k++;
j++;

}

//copied temp array into original array
for(int i = si; i<=ei ; i++){
arr[i] = temp[i-si];
}
}

void mergeSort(int arr[], int si, int ei){

if(si<ei){
int mid =(si+ei)/2;
mergeSort(arr,si,mid);
mergeSort(arr,mid+1,ei);
merge(arr,si,mid,ei);
}
}


int smallest(int arr[],int n){


int flag = 0;
for(int i = 0; i < n; i++ ){
for(int j = 0; j<n ; j++){
if(arr[j]==i){
flag=1;
}
}
if(flag==0){
return i;
}
flag = 0;
if(i==n-1 && flag==0){
return -1;
}
}


return 0;

}
