#include<stdio.h>
#include<string.h>
int justify(char *a)
{
    int count=0,game=5,n,i;
    printf("Your answer: ");
    char b[10];
    while(game--)
    {
        gets(b);
        n=strlen(a);
        for(i=0; i<n; i++)
        {
            if(a[i]==b[i])
                count++;
            else
            {
                count=0;
                break;
            }
        }
        if(n==count)
        {
            printf("Right answer\n\n");
            break;
        }
        else
            printf("Wrong answer\n\n");
    }
    return game;
}
int main()
{
    printf("Welcome to hangman game!\nThink about following clues and guess the right answer.....\nUse lowercase word plz!\n\n\n");
    int i,j,n,count=0,game,next=1;
    char *a="sky",*c="river",*d="star",*e="c",*f="everest";
    if(next==1)
    {
        printf("Clue 1: It is blue and large and it is opposite side of sea\n");
        game=justify(a);
        if (game>0)
            next++;
    }
    if(next==2)
    {
        printf("\nClue 2: Child of sea and it is flowing\n");
        game=justify(c);
        if (game>0)
            next++;
    }
    if(next==3)
    {
        printf("\nClue 3: We see it in sky and it is small\n");
        game=justify(d);
        if (game>0)
            next++;
    }
    if(next==4)
    {
        printf("\nClue 4: Mother of programming language\n");
        game=justify(e);
        if (game>0)
            next++;
    }
    if(next==5)
    {
        printf("\nClue 5: Highest peak in the world\n");
        game=justify(f);
        if (game>0)
            next++;
    }
    if(game<1)
        printf("\nYou will be hung\n\n");
    else
        printf("\nYou are winner and free\n\n");
    return 0;
}
