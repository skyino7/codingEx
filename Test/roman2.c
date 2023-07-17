#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *str = "ML";//"XX" "IV" "VII"
    int S_size = strlen(str);
    int i = 0;
    int j, k = 0, l = 0, nextm, flag;
    int sum = 0;
    char roman[7] = "IVXLCDM";
    int Num[7] = {1, 5, 10, 50, 100, 500, 1000};
    //1 5 10 50 100 500 1000
    //0 1 2  3   4   5   6
    int *index = malloc(sizeof(int) * S_size);
    //int* index = {2,2,0,1};
    //char roman1[7][2] = "I1V5X10L50C100D500M100"
    for (j = 0; j < S_size;)
    {
        if (str[j] == roman[k])
        {
            index[j] = k;
            j++;
            k = 0;
        }
        else
            k++;
    }
    /*for (;l < S_size; l++)
    {
        printf("%d\n", index[l]);
    }*/
    
    for (; i < S_size;)
    {
        for (;l < 7;)
        {
            if (str[i] == roman[l])//CXLII
            {
                for (nextm = l + 1; nextm < 7; nextm++)
                {
                    if (str[i + 1] == roman[nextm])
                        {
                            sum += Num[nextm] - Num[l];
                            i += 2;
                            l = 0;
                            flag = 1;
                        }
                }
                if (flag == 0)
                {
                    sum += Num[l];
                    i++;
                    l = 0;
                }
            }
            else
                l++;
            flag = 0;
        }
            
    }
    printf("%d\n", sum);
    
    

    return 0;
}