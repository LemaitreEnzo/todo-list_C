#include <stdio.h>

char *tasks[10];
int idx = 0;

void addTask()
{
    printf("Quelle tâche voulez-vous ajouter? ");
    scanf("%s", tasks[idx]);
    idx++;
    
    while (1)
    {
        char newTask;
        printf("Voulez-vous ajouter un autre élément (o ou n)? ");
        scanf(" %c", &newTask);
        if (newTask == 'o')
        {
            printf("Quelle tâche voulez-vous ajouter? ");
            scanf("%s", tasks[idx]);
            idx++;
        }else {
            break;
        }
    }
}

void showList()
{
    for (int i = 0; i < idx; i++)
    {
        printf("%s\n", tasks[i]);
    }
}

void sortList(){

}



int main()
{
    printf("Bienvenue dans votre todolist.\n");

    addTask();

    printf("Voici votre liste de tâches :\n");
    showList();

    return 0;
}
