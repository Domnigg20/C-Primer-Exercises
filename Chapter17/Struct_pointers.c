
#include <stdio.h>



struct gas {
float distance;
float gals;
float MPG;
};

float gas_dist (struct gas* mpg) {

   printf("Enter car gals: ");
    scanf("%f", &mpg->MPG);

    printf("Enter distance: ");
    scanf("%f", &mpg->distance);

    mpg->MPG =(mpg->distance)/ (mpg->MPG);

    return mpg->MPG;

}

int main(void) {
    struct gas mycar;

    float result =  gas_dist(&mycar);
    printf("Miles per gallon: %.2f\n", result);
    return 0;



}
