#include <stdio.h>
#include <string.h>
int main(){
    int num;
    scanf("%d", &num);
    
    struct {
        char name[50];
        int id;
        int score;
    }student[num];
    
    
    int i;
    for (i = 0; i < num; i++){
        scanf("%s", student[i].name);
        scanf("%d", &student[i].id);
        scanf("%d", &student[i].score);
    }
    
    for (i = 0; i < num; i++){
        if (student[i].score >= 60){
            printf("%s %d\n", student[i].name, student[i].id);
        }
    }
    
    return 0;
}
