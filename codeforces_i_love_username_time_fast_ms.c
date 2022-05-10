#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){

        scanf("%d", &arr[i]);
    }

    int answer = 0, minValue = arr[0], maxValue = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > maxValue || arr[i] < minValue){
            answer++;
        };
        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
        if(arr[i] < minValue){
            minValue = arr[i];
        }

        }

    printf("%d", answer);


return 0;
}



