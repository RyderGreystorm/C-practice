#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner);

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
  d = malloc(sizeof(dog_t));

    if (d == NULL)
        return NULL;

    d->name = name;
    d->age = age;
    d->owner = owner;

    return d;      

}


