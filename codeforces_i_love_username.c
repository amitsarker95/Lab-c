#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){

        scanf("%d", &arr[i]);
    }

    int answer = 0;

    for(int i=0; i<n; i++){
        if(i == 0) continue;
        bool isMax = true, isMin = true;

        for(int j=0; j<i; j++){
            if(arr[j] <= arr[i]){
                isMin = false;
            }

            if(arr[j] >= arr[i]){
                isMax = false;
            }
        }

        if(isMax || isMin){
                answer++;
            }
    }
    printf("%d", answer);


return 0;
}


