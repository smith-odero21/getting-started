/* struct */
#include <stdio.h>
#include <string.h>

struct person {
    char title[8];
    char lastname[32];
    int age;
};

int main() {
    struct person smith;

    strncpy(smith.title, "Eng.", 7);
    strncpy(smith.lastname, "Smith", 31);
    smith.age = 21;

    printf("%s %s of the age %d\n",
            smith.title,
            smith.lastname,
            smith.age);

    return 0;
}