#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile = fopen("myhw", "r");
    FILE *outputFile = fopen("answer-hw3", "w");

    if (inputFile == NULL) {
        printf("Error: Unable to open input file.\n");
        return 1;
    }
    if (outputFile == NULL) {
        printf("Error: Unable to open output file.\n");
        fclose(inputFile);
        return 1;
    }

    int size;
    fscanf(inputFile, "%d", &size); // Read the size of the array

    int *data = (int *)malloc(size * sizeof(int));
    if (data == NULL) {
        printf("Error: Memory allocation failed.\n");
        fclose(inputFile);
        fclose(outputFile);
        return 1;
    }

    int sum = 0, max = -__INT_MAX__;
    for (int i = 0; i < size; i++) {
        fscanf(inputFile, "%d", &data[i]);
        sum += data[i];
        if (data[i] > max) {
            max = data[i];
        }
    }

    double average = (double)sum / size;

    // Print to screen
    printf("Array size: %d\n", size);
    printf("Data: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\nAverage: %.2f\n", average);
    printf("Maximum: %d\n", max);

    // Write to output file
    fprintf(outputFile, "Array size: %d\n", size);
    fprintf(outputFile, "Data: ");
    for (int i = 0; i < size; i++) {
        fprintf(outputFile, "%d ", data[i]);
    }
    fprintf(outputFile, "\nAverage: %.2f\n", average);
    fprintf(outputFile, "Maximum: %d\n", max);

    // Free allocated memory and close files
    free(data);
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
