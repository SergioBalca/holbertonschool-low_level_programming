#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog- Defines the name, age and owner of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct dog defines variables to store data
 * from a dog, like the name of the dog, its age
 * and the name of the owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);


#endif /* MAIN_H */
