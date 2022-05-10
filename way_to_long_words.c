#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d", &n);


   for(int i=0; i<n; i++){\
    char word[101];
    scanf("%s", &word);
    int length = strlen(word);

    if(length <= 10){
        printf("%s",word);
    }else if(length >= 10){
      printf("%c%d%c\n", word[0],length-2, word[length-2]);
    }

   }




return 0;
}




