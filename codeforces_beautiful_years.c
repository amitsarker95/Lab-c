#include<stdio.h>
#include<stdbool.h>
int main()
{
    int year;
    scanf("%d", &year);



    for(int i=year+1; ; i++)
    {
        int current_year = i;

        int freq[10] = {0};
        bool repeat = false;
        while(current_year > 0)
        {
            int d = current_year % 10;
            current_year /= 10;
            freq[d]++;

            if(freq[d] >= 2)
            {
                repeat = true;
            }
        }
        if(!repeat){
            printf("%d\n", i);
            break;
        }

        printf("\n");
    }




    return 0;
}





