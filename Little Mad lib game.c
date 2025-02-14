#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void) {
    char color[20];
    char pluralNoun[20];
    char celebrity1[20];
    char celebrity2[20];

    printf("Enter a color: ");
    scanf("%s" , color);
    printf("Enter plural noun : ");
    scanf("%s" , pluralNoun);
    printf("Enter celebrity name: ");
    scanf("%s%s", celebrity1, celebrity2);

    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralNoun);
    printf("I love %s %s \n", celebrity1, celebrity2);




    return 0;
}
