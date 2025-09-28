#include <stdio.h>

int main() 
{
    int school, dept;

    printf("Select School:\n");
    printf("1. School of Computer Science\n");
    printf("2. School of Engineering\n");
    printf("3. School of Business\n");
    printf("Enter choice: ");
    scanf("%d", &school);
    switch(school) {
        case 1:
            printf("Select Department:\n");
            printf("1. Department of Informatics\n");
            printf("2. Department of Machine Learning\n");
            scanf("%d", &dept);
            switch(dept) {
                case 1: printf("You selected Department of Informatics\n"); 
                break;
                case 2: printf("You selected Department of Machine Learning\n"); 
                break;
                default: printf("Invalid Department!\n");
            }
            break;
        case 2:
            printf("Select Department:\n");
            printf("1. Department of Electronics Engineering\n");
            printf("2. Department of Mechanical Engineering\n");
            scanf("%d", &dept);
            switch(dept) {
                case 1: printf("You selected Department of Electronics Engineering\n"); 
                break;
                case 2: printf("You selected Department of Mechanical Engineering\n"); 
                break;
                default: printf("Invalid Department!\n");
            }
            break;
        case 3:
            printf("Select Department:\n");
            printf("1. Department of Commerce\n");
            printf("2. Department of Purchasing\n");
            scanf("%d", &dept);
            switch(dept) {
                case 1: printf("You selected Department of Commerce\n"); 
                break;
                case 2: printf("You selected Department of Purchasing\n"); 
                break;
                default: printf("Invalid Department!\n");
            }
            break;
        default:
            printf("Invalid School!\n");
    }
    return 0;
}
