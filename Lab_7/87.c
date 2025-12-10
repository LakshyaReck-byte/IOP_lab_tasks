#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

void readStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %s", s[i].name);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
}

void displayHighScorers(struct Student s[], int n) {
    printf("\nStudents with marks > 500:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].marks > 500)
            printf("Roll: %d, Name: %s, Marks: %d\n", s[i].roll, s[i].name, s[i].marks);
    }
}

int main() {
    struct Student s[10];
    readStudents(s, 5);
    displayHighScorers(s, 5);
    return 0;
}


