#include <stdio.h>

int main() {
    float fsc_marks, nts_marks;

    printf("Enter your FSc marks ");
    scanf("%f", &fsc_marks);

    printf("Enter your NTS marks");
    scanf("%f", &nts_marks);

    if (fsc_marks >= 70 && nts_marks >= 70) {
        printf("Oxford University - IT\n");
    } else if (fsc_marks >= 70 && nts_marks >= 60) {
        printf("Oxford University - Electronics\n");
    } else if (fsc_marks >= 70 && nts_marks >= 50) {
        printf("Oxford University - Telecommunication\n");
    } else if (70 >= fsc_marks >= 60 && nts_marks >= 50) {
        printf("MIT - IT\n");
    } else if (59 >= fsc_marks >= 50 && nts_marks >= 50) {
        printf("MIT - Chemical\n");
    } else if (40 < fsc_marks < 50 && nts_marks >= 50) {
        printf("MIT - Computer\n");
    } else {
        printf('you do not qualify");
    }

    return 0;
}
