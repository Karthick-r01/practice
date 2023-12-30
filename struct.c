#include<stdio.h>
struct student {
    int Id;
    char* name;
    char* dep;
};

void main() {
    struct student s1;
    s1.Id=15;
    s1.name="student15";
    s1.dep="computer science";

    printf("%d\n", s1.Id);
    printf("%s\n", s1.name);
    printf("%s\n", s1.dep);
    return 0;
}
