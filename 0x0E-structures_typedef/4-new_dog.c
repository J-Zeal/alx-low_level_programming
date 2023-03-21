#include <stdlib.h>
#include "dog.h"
/**
* new_dog - makes a new struct dog
* @name: his/her name
* @age: how old is he
* @owner: who are you
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int i, namel, ownerl;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (namel = 0; name[namel]; namel++)
;
namel++;
dog->name = malloc(namel * (sizeof(char)));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < namel; i++)
dog->name[i] = name[i];

dog->age = age;

for (ownerl = 0; owner[ownerl]; ownerl++)
;
ownerl++;
dog->owner = malloc(ownerl * (sizeof(char)));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < ownerl; i++)
dog->owner[i] = owner[i];
return (dog);
}
