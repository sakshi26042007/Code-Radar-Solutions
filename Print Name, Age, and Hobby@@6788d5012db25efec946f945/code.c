#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;
    fgets(name, sizeof(name), stdin);  /
    scanf("%d", &age);
    getchar(); 
    fgets(hobby, sizeof(hobby), stdin);  
    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);

    return 0;
}