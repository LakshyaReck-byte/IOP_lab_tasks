#include<stdio.h>

struct students{
    int roll_no;
    char name[50];
    int marks;
};

int main(){
    FILE *file;
    struct students s;
    int n;

    file = fopen("SVNITSTUDENT.DAT", "w");

    printf("enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("\n--student %d--\n", i+1);
        printf("enter roll no: ");
        scanf("%d", &s.roll_no);
        printf("enter name: ");
        scanf("%s", s.name);
        printf("enter marks: ");
        scanf("%d", &s.marks);

        fprintf(file, "\n--student %d--\n Roll no: %d\n Name: %s\n Marks: %d\n",i+1, s.roll_no, s.name, s.marks);
    }

    fclose(file);

    printf("\nData written succesfully");
    return 0;
}