#include <stdio.h>
#include <string.h>
typedef struct{
    char name[12];
    int age;
    char gender;
    } player_t;
int main(void)
{
    player_t player1 = { "Brusco", 23, 'M' }, player2;
    strcpy(player2.name, "July");
    player2.age = 21;
    player2.gender = 'F';
    printf("player1: name = %s; age = %d; gender = %c\n", player1.name, player1.age, player1.gender);
    printf("player2: name = %s; age = %d; gender = %c\n", player2.name, player2.age, player2.gender);
    return 0;
}
