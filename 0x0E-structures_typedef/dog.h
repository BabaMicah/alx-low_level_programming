 #include "dog.h"
  2 #include <stdlib.h>
  3
  4 /**
  5  * new_dog - creates a new dog.
  6  * @name: name of the dog.
  7  * @age: age of the dog.
  8  * @owner: owner of the dog.
  9  *
 10  * Return: struct dog.
 11  * if fails, returns NULL.
 12  */
 13 dog_t *new_dog(char *name, float age, char *owner)
 14 {
 15         dog_t *p_dog;
 16         int i, lname, lowner;
 17
 18         p_dog = malloc(sizeof(*p_dog));
 19         if (p_dog == NULL || !(name) || !(owner))
 20         {
 21                 free(p_dog);
 22                 return (NULL);
 23         }
 24
 25         for (lname = 0; name[lname]; lname++)
 26                 ;
 27
 28         for (lowner = 0; owner[lowner]; lowner++)
 29                 ;
 30
 31         p_dog->name = malloc(lname + 1);
 32         p_dog->owner = malloc(lowner + 1);
 33
 34         if (!(p_dog->name) || !(p_dog->owner))
 35         {
 36                 free(p_dog->owner);
 37                 free(p_dog->name);
 38                 free(p_dog);
 39                 return (NULL);
 40         }
 41
 42         for (i = 0; i < lname; i++)
 43                 p_dog->name[i] = name[i];
 44         p_dog->name[i] = '\0';
 45
 46         p_dog->age = age;
 47
 48         for (i = 0; i < lowner; i++)
 49                 p_dog->owner[i] = owner[i];
 50         p_dog->owner[i] = '\0';
 51
 52         return (p_dog);
 53 }
 54

