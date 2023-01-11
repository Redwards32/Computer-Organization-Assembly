#include <stdio.h>
int main(int argc, const char * argv[]) {
    int number_of_punish;
    int line_typo;
    int i;
    
    
    printf("Enter the number of repititions for the punishment line: ");
    scanf("%d", &number_of_punish);
    
    while (number_of_punish <= 0){
        printf("You entered an invalid amount of numbers of reputation!\n");
        printf("Enter the number of repititions for the punishment line: ");
        scanf("%d", &number_of_punish);
    }
    
    printf("Enter the line you wish to enter the typo: ");
    scanf("%d", &line_typo);
    
    while(line_typo <= 0 || line_typo > number_of_punish){
        printf("You entered an invalid value for the typo placement!\n");
        printf("Enter the line you wish to enter the typo: ");
        scanf("%d", &line_typo);
    }
    
    
    for (i = 1; i < number_of_punish + 1; i++){
        if (i != line_typo){
            printf("Coding in C is fun and interesting!\n");
        }
        if (i == (line_typo)){
            printf("Cading in C is fun end interesting!\n");
        }
    }
    return 0;
    
}
