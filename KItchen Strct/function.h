#ifndef FUNCTION_H
#define FUNCTION_H

struct Kitchen {
    char appliance[100];
    char use[100];
    char material[50];
    int tempRating;
};

void populateKitchen(struct Kitchen *kitchenArray, int arraySize);
void printKitchen(struct Kitchen *kitchenArray, int arraySize);

#endif

