//structures question 1 - using structures to find volume and total surface area of the box

#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void calculateBoxProperties(struct Box *box, double *volume, double *surfaceArea) {
    *volume = box->length * box->width * box->height;
    *surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    (*boxPtr).length = 5.0;
    (*boxPtr).width = 3.0;
    (*boxPtr).height = 4.0;

    double volume, surfaceArea;

    calculateBoxProperties(boxPtr, &volume, &surfaceArea);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);


    boxPtr->length = 7.0;
    boxPtr->width = 2.0;
    boxPtr->height = 6.0;

    calculateBoxProperties(boxPtr, &volume, &surfaceArea);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
