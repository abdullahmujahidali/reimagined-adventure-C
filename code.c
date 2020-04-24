// C PROGRAM

#include<stdio.h>

#define LENGTH 4 // for passing the 2d array in switchArray function

void switchRow(int array[],int length){
if(length==0){
return;
}

if(array[0]==1){ // first element of array is 1
array[0] = 2; // switch from 1 to 2
}else{
array[0] = 1; // else switch from 2 to 1
}
// pass the address of the next element (increment the memory pointer of array)
switchRow(++array,length-1); // recursive

}

void switchArray(int array[][LENGTH],int numRow, int numCol){
for(int i=0;i<numRow;i++){
// pass address of first element using "&"
// pass numCol to act as length input of switchRow function
switchRow(&array[i],numCol);
}
}

int main(){
int rows = 2;
int cols = LENGTH;

int arr[rows][cols];

// populate the 2d array with sample values
//
// 1st row
arr[0][0] = 2;
arr[0][1] = 2;
arr[0][2] = 1;
arr[0][3] = 2;

// 2nd row
arr[1][0] = 1;
arr[1][1] = 2;
arr[1][2] = 1;
arr[1][3] = 2;

// display to view before switching
printf("\nBefore switching: \n");
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}

// do the switching
switchArray(arr,rows,cols);

// // display to view after switching
printf("\nAfter switching: \n");
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}

return 0;
}
