#include<stdio.h>

int main(){
int n;
scanf("%d", &n);


int arr[n];
for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

//value sowping
for(int i=0, j=n-1; i<j; i++, j--){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j] = temp;
}

/*
int rvrc_arr[n];
for(int i=0; i<n; i++){
    rvrc_arr[n-1-i] = arr[i];
}
*/
for(int j=0; j<n; j++){
    printf("%d ",arr[j]);
}


/*
int size = sizeof(arr)/sizeof(arr[0]);

printf("Total size of the array : %d\n",size);
*/

return 0;
}
