#include <stdio.h>

int main() {
    int choice, choice2;
    
    printf("Choose your planet:\n");
    printf("1. Earth\n2. Pluto\n3. Jupiter\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nWhat information about Earth do you want?\n");
        printf("1. Position from Sun\n");
        printf("2. Age of Earth\n");
        printf("3. Atmosphere percentage\n");
        printf("4. Water percentage\n");
        printf("5. Diameter\n");
        scanf("%d", &choice2);

        if (choice2 == 1)
            printf("Earth is the third planet from the Sun.\n");
        else if (choice2 == 2)
            printf("Earth is about 4.54 billion years old.\n");
        else if (choice2 == 3)
            printf("Earth’s atmosphere is 78%% nitrogen and 21%% oxygen.\n");
        else if (choice2 == 4)
            printf("Earth is nearly 71%% covered with water.\n");
        else if (choice2 == 5)
            printf("Earth’s diameter is about 12,742 km.\n");
        else
            printf("Invalid Earth choice.\n");
    }

    else if (choice == 2) {
        printf("\nWhat information about Pluto do you want?\n");
        printf("1. What is Pluto?\n");
        printf("2. Why is Pluto not a full planet?\n");
        printf("3. Moons of Pluto\n");
        printf("4. Orbit time\n");
        scanf("%d", &choice2);

        if (choice2 == 1)
            printf("Pluto is a dwarf planet in the Kuiper Belt.\n");
        else if (choice2 == 2)
            printf("Pluto does not clear its orbit, so it is a dwarf planet.\n");
        else if (choice2 == 3)
            printf("Pluto has 5 moons: Charon, Nix, Hydra, Kerberos, Styx.\n");
        else if (choice2 == 4)
            printf("Pluto takes 248 Earth years to orbit the Sun.\n");
        else
            printf("Invalid Pluto choice.\n");
    }

    else if (choice == 3) {
        printf("\nWhat information about Jupiter do you want?\n");
        printf("1. What is Jupiter?\n");
        printf("2. Why is Jupiter a gas giant?\n");
        printf("3. Number of moons\n");
        printf("4. Great Red Spot\n");
        printf("5. Temperature compared to Earth\n");
        scanf("%d", &choice2);

        if (choice2 == 1)
            printf("Jupiter is the largest planet in our Solar System.\n");
        else if (choice2 == 2)
            printf("Jupiter is made mostly of hydrogen and helium.\n");
        else if (choice2 == 3)
            printf("Jupiter has over 95 moons.\n");
        else if (choice2 == 4)
            printf("The Great Red Spot is a massive storm lasting hundreds of years.\n");
        else if (choice2 == 5)
            printf("Jupiter is much colder than Earth.\n");
        else
            printf("Invalid Jupiter choice.\n");
    }

    else {
        printf("Invalid planet choice.\n");
    }

    return 0;
}








