#include<stdio.h>
#include "pe12-2a.h"



void clear_input_stream(void)
{
	while (getchar() != '\n')
		continue;
}

int set_mode(int mode) {
    if (mode == 0) {
        printf("Metric mode selected\n");
    } else if (mode == 1) {
        printf("Us mode selected\n");
    } else {
        printf("Invalid mode\n");
    }
    return 0;
}

int METRIC; // 1 = kilometers, 2 = miles


double get_info(double *distance) {
    int choice;
    printf("Choose the unit (1 for km or 2 for miles):\n");

    // Read user input for unit choice
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter distance in kilometers: ");
            scanf("%lf", distance);  // Get the distance in kilometers
            printf("You entered %.2f kilometers.\n", *distance);
            METRIC = 1;  // Set unit to kilometers
            break;
        case 2:
            printf("Enter distance in miles: ");
            scanf("%lf", distance);  // Get the distance in miles
            printf("You entered %.2f miles.\n", *distance);
            METRIC = 2;  // Set unit to miles
            break;
        default:
            
            *distance = -1;  // Error value for invalid input
            clear_input_stream();
            
            break;
    }

    return *distance;  // Return the distance entered by the user
}


int show_info(double *my_distance){
double mileage;
double my_dist;

// Convert the distance and calculate mileage
if (METRIC == 1) {
    mileage = *my_distance / 100;
    printf("Distance received: %.2f\n", *my_distance);
    printf("Mileage (KM/L): %lf\n", mileage);

} else if (METRIC == 2) {
    mileage = *my_distance / 60;
    printf("Distance received: %.2f\n", *my_distance);
    printf("Mileage (MPG): %lf\n", mileage);
}

if (*my_distance == -1) {
    clear_input_stream();
    printf("Error: Invalid distance entered.\n");
    return -1; // Error code
}



return 0;
}

