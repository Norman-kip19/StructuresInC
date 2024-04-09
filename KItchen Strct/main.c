#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 2; // Change this if you want a different size
    struct Kitchen kitchenArray[arraySize];

    // Populate the structure array
    populateKitchen(kitchenArray, arraySize);

    // Print the structure elements
    printKitchen(kitchenArray, arraySize);

    return 0;
}

