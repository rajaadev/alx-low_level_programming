#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initializes a variable of data_type struct dog
 *@d: pointer to struct dog to initialize
 * @name: name member of the structure dog to initialize
 * @age:age member of the structure dog to initialize
 * @owner: owner member of the structure dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
