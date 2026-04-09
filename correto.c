#include <stdio.h>

 int main(){
	char a;
		
        printf("Drama?\nresponda com S ou N\n");
        scanf("%c",&a);
        

        if (a == 'S' || a=='s')
        {
            printf("Aventura"); 
            scanf(" %c", &a);
            if (a == 'S'|| a=='s') {
                printf("Suspense");
                scanf(" %c", &a);
                if (a == 'S'|| a=='s') 
                {
                    printf("Te indico LOST.\n");
                }
                else if if (a == 'S'|| a=='s')
                {
                    printf("Fantasia?");
                    scanf(" %c",&a);
                    if (a == 'S'|| a=='s')
                    {
                        printf("Game of Thrones");
                    }

                }
            }   
        }
        else if (if (a == 'N'|| a=='n')
        {
			printf("Comedia");
		}
        else
        {
            printf("invalido");
        }
      

