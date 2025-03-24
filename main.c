#include <stdio.h>
#include <string.h>

char tasks[10][50];
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
        }
        else
        {
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

void sortList()
{
    char temp[10];

    for (int i = 0; i < idx - 1; i++)
    {
        for (int j = i + 1; j < idx; j++)
        {
            if (strcmp(tasks[i], tasks[j]) > 0)
            {
                strcpy(temp, tasks[i]);
                strcpy(tasks[i], tasks[j]);
                strcpy(tasks[j], temp);
            }
        }
    }
}

int main()
{
    int number;

    printf("Bienvenue dans votre todolist.\n\n");
    do {
        printf("1. Ajouter une nouvelle tâche\n");
        printf("2. Afficher la liste des tâches\n");
        printf("3. Trier la liste des tâches\n");
        printf("4. Quitter\n");
        printf("Choisissez une option (1-4) : ");
        scanf(" %d", &number);

        if (number < 1 || number > 4) {
            printf("Option invalide. Veuillez choisir un nombre entre 1 et 4.\n");
            continue;
        }

        switch (number) {
            case 1:
                addTask();
                break;
            case 2:
                showList();
                break;
            case 3:
                sortList();
                break;
            case 4:
                printf("Au revoir !\n");
                break;
        }
    } while (number != 4);

    return 0;
}
