#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateKitchen(struct Kitchen *kitchenArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Kitchen Appliance %d:\n", i + 1);
        printf("Appliance: ");
        scanf("%s", kitchenArray[i].appliance); // Assuming appliance does not contain spaces
        printf("Use: ");
        scanf("%s", kitchenArray[i].use); // Assuming use does not contain spaces
        printf("Material: ");
        scanf("%s", kitchenArray[i].material); // Assuming material does not contain spaces
        printf("Temperature Rating (in °C): ");
        scanf("%d", &kitchenArray[i].tempRating);
    }
}

// Function to print the structure elements
void printKitchen(struct Kitchen *kitchenArray, int arraySize) {
    printf("\nKitchen Appliance Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Kitchen Appliance %d:\n", i + 1);
        printf("Appliance: %s\n", kitchenArray[i].appliance);
        printf("Use: %s\n", kitchenArray[i].use);
        printf("Material: %s\n", kitchenArray[i].material);
        printf("Temperature Rating: %d°C\n", kitchenArray[i].tempRating);
    }
}

