#include <stdio.h>

int main() 
{
    FILE *file;
    int size=1000;
    int array[size];
    int i = 0,sum=0;

    // Open the file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    // Read weight from the file and store in the array
    while (fscanf(file, "%d", &array[i]) != EOF) {
        i++;
    }

    fclose(file);

    for(int j=0;j<size;j++)
    {
        sum=sum+array[j];
    }
    printf("average weight is:\n");
    printf("%d",sum/size);
    return 0;
}