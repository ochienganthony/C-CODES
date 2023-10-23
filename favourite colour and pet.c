#include <stdio.h>
#include <stdlib.h>

int main()
{
    char favoriteColor[50]; // Define a char array to store the color
    char favoritePet[50];   // Define a char array to store the pet

    printf("Enter your favorite color: ");
    fgets(favoriteColor, sizeof(favoriteColor), stdin); // Read a string including spaces

    printf("Enter your favorite pet: ");
    fgets(favoritePet, sizeof(favoritePet), stdin); // Read a string including spaces

    printf("Your favorite color is: %s", favoriteColor);
    printf("Your favorite pet is: %s", favoritePet);

    return 0;
}
