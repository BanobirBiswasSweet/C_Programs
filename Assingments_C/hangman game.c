#include <stdio.h>
#include <string.h>

    typedef struct
    {
        char name[10];
        int score;
    } player;

    void error_m(int x);
    void menu();
    char choice();
    void game(player *p);
    void highestscores();
    void getusername(player *p);


    int main() {
        int choice;
        player play;

        while(choice!=3) {
            menu();
            scanf("%d",&choice);
            switch(choice){
                case 1: getusername(&play);
                        game(&play);
                    break;
                case 2: highestscores();
                    break;
                case 3: printf("Good Bye!");
        }
    }
    }

    void menu() {
        printf("\nWELCOME TO HANGMAN!!!\n");
        printf("Please choose a number\n");
        printf("1. Play a new game\n");
        printf("2. See highest score\n");
        printf("3. Exit\n");
    }

    void getusername(player *play){

    printf("Please enter your name: ");
    scanf("%s", &play->name);

}

    void game(player *play) {
        char category[20];
        char word[20];

        FILE *hmPtr;

    if ( (hmPtr = fopen( "hangman.dat", "r" )) == NULL ) {
        printf( "File could not be opened\n" );
    }
    else {
        int i = 0;
        srand ( time(NULL) );
        int j = rand() % 4;
        while(!feof(hmPtr)) {
            fscanf(hmPtr,"%s %s",category, word);
            if (i == j) {
                int turns=0;
                int x;

                char input[1];
                char get[20];
                char print[20];

                strcpy(get,word);

                printf("Category: %s\n\n", category);
                 word[strlen(word)];
                for(x=0; x<strlen(word); x++) {if
                    (word[x]=='_'){printf(" ");}else{
                    printf("-");}
                }

                while(turns < 6) {
                    printf("\nEnter a letter: ");
                    getchar();
                    input[0] = getchar();
                    printf("\n");


                    for(x=0; x<strlen(word); x++) {
                       if(word[x]=='_'){printf(" ");}
                        else if(get[x]==input[0]) {
                            printf("%c",input[0]);
                            print[x]=input[0];
                        }
                        else if(get[x]==print[x]) {
                            printf("%c",print[x]);

                        }
                        else {
                            printf("-");
                        }
                    }

                    if(strstr(print,word)) {
                        printf("\n\nYou got the correct answer!\n");

                        break;
                    }
                    else if(!strstr(get,&input[0])) {
                        turns++;
                    }

                }


             printf("\n");
            }
        }
        fclose( hmPtr );
    }
}

void highestscores(){

    printf("Highest Scores:\n");

}

void error_m(int x) {
    switch (x) {
    case 0 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("____________\n\n");
    break;
    case 1 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf("\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf("__|_________\n\n");
    break;
    case 2 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf("__|_________\n\n");
    break;
    case 3 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf("__|_________\n\n");
    break;
    case 4 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/ | \n");
    printf(" | O \n");
    printf(" |\n");
    printf(" |\n");
    printf(" |\n");
    printf("__|_________\n\n");
    break;
    case 5 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/ | \n");
    printf(" | O \n");
    printf(" | |\n");
    printf(" | |\n");
    printf(" |\n");
    printf("__|_________\n\n");
    break;
    case 6 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/ | \n");
    printf(" | O \n");
    printf(" | \\|\n");
    printf(" | | \n");
    printf(" |\n");
    printf("__|_________\n\n");
    break;
    case 7 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/ | \n");
    printf(" | O \n");
    printf(" | \\|/\n");
    printf(" | | \n");
    printf(" |\n");
    printf("__|_________\n\n");
    break;
    case 8 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/ | \n");
    printf(" | O \n");
    printf(" | \\|/\n");
    printf(" | | \n");
    printf(" | /\n");
    printf("__|_________\n\n");
    break;
    case 9 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/ | \n");
    printf(" |  O \n");
    printf(" | \\|/\n");
    printf(" | | \n");
    printf(" | / \\\n");
    printf("__|_________\n\n");
    break;
    case 10 :
    printf("Amount of wrong letters: %d\n\n", x);
    printf(" _______\n");
    printf(" |/ | \n");
    printf(" | X \n");
    printf(" | \\|/\n");
    printf(" | | \n");
    printf(" | / \\\n");
    printf("__|_________\n\n");
    break;

}
}
