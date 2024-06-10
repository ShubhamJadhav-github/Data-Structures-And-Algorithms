#include<stdio.h>

int main()
{
    int array[10] = {5, 21, 34, 49, 51, 63, 72, 85, 91, 98};
    int low = 0, high = 9, mid;
    int value;
    printf("\nC Programming | Shubham Jadhav\n");
    printf("------------------------------\nBinary Search Algorithm");
    printf("\n\nGive Sorted Array - \n");
    for(int i=0; i<=9; i++)
    {
        printf("%d  ", array[i]);
    }

    printf("\n\nEnter Search Value: ");
    scanf("%d", &value);


    while(1)
    {
        if(low <= high)
        {
            mid = (low + high) / 2;
            if(array[mid] == value)
            {
                printf("Value %d found at index %d\n\n", value, mid);
                break;
            }
            else if(array[mid] > value)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else
        {
            printf("Value %d NOT FOUND\n\n", value);
            break;
        }
    }
    return 0;
}
