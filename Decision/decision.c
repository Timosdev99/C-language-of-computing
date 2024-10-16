#include <stdio>;

int maain() {
    int grade;

    printf("type in your grade: ");
    scanf("%d", &grade);

    if(grade < 10) {
        printf('yah dumb brr')
    }
    else {
        if(grade > 50) {
            printf('you passed');
            else {
                printf('you failed')
                if(grade > 70) {
                    printf('yah good brr')
                }

                else {
                    printf('youre okay')
                    if(grade > 90) {
                        printf('you got an A')
                    }
                }

            }
        }
    }

    return 0
}






