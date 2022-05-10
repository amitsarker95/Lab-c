#include<stdio.h>
#include<string.h>

int main(){

char arr[10];
gets(arr);

int freq[10] = {0};

for(int i=0; i<9; i++){
    int c = arr[i];
    int digit = c - '0';
    arr[digit]++;
}

int answer;

for(int i=0; i<=9; i++){
    if(freq[i] == 0){
        answer = 90;
    }
}

printf("%d\n", answer);


return 0;
}
