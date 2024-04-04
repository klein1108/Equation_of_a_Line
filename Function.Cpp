/**
*   @file      Equation of a Line
*   @author    Lucas Klein
*   @version   v1
*   @date      November-2020
**/

#include<stdio.h>

int main(void){
    int x_1=0;
    int x_2=0;
    int y_1,y_2;

    int y,x;
    int yy,xx;
    int a,b;
    int choice;

    char grafico;

    while(x_1==x_2){
        printf("digite seus valores:\n");
        scanf("%d ",&y_1);
        scanf("%d ",&x_1);
        scanf("%d ",&y_2);
        scanf("%d",&x_2);
        printf("\nPontos escolhidos: (%d,%d) e (%d,%d)\n\n",y_1,x_1,y_2,x_2);

        if(x_1==x_2){
            printf("\n\ncomando invalido\n");
            printf("nao pode haver dois pontos de x iguais\n\n");

        }

        if(y_1>y_2){
            y=y_1;
            x=x_1;
            yy=y_2;
            xx=x_2;
        } else {
            y=y_2;
            x=x_2;
            yy=y_1;
            xx=x_1;
        }
    }

    while(1){
        printf("\nESCOLHA ALGUMA ACAO:\n");
        printf("(1)- Para atribuir valores\n");
        printf("(2)- Para mostrar qual o maior par de pontos\n");
        printf("(3)- Para mostrar a equacao da reta\n");
        printf("(4)- Para mostrar o grafico da reta\n");
        printf("(0)- Para finalizar o programa\n\n");
        scanf("%d",&choice);

       if(choice==0){
            printf("\n\nObrigado por utilizar o programa\nAte mais!!!\n\n\n");
            return 0;
        }

        if(choice==1){
            x_1=0;
            x_2=0;
                                                                  //pra resetar os valores e entrar no while
            while(x_1==x_2){
                printf("digite seus valores:\n");
                scanf("%d ",&y_1);
                scanf("%d ",&x_1);
                scanf("%d ",&y_2);
                scanf("%d",&x_2);
                printf("\nPontos escolhidos: (%d,%d) e (%d,%d)\n\n",y_1,x_1,y_2,x_2);

                if(x_1==x_2){
                    printf("\n\ncomando invalido\n");
                    printf("nao pode haver dois pontos de x iguais\n\n");

                }

                if(y_1>y_2){
                    y=y_1;
                    x=x_1;
                    yy=y_2;
                    xx=x_2;
                } else {
                    y=y_2;
                    x=x_2;
                    yy=y_1;
                    xx=x_1;
                }
            }       //fim do while(x_1==x_2)
        }          // fim do if(choice==1)

        a=((y-yy)/(x-xx));
        b=((y/a)-x);

       if(choice==2){
            printf("\no maior par de pontos e o (%d,%d)\n\n",y,x);
        }

       if(choice==3){
            if(b>0){
                printf("\nEquacao da reta: y=%d.x+%d \n\n",a,b);
            }

            if(b<0){
                printf("\nEquacao da reta: y=%d.x%d \n\n",a,b);
            }
        }

        if(choice==4){
            for(int l=((y+x));l>=-((y+x));l--){
                for(int c=-((y+x)*5);c<=((y+x)*5);c++){
                        grafico=' ';
                        if((c==0)||(l==0))
                            grafico='+';
                    if(l==((a*c)+b))
                        grafico='x';
                    printf("%c",grafico);
                }
            printf("\n");
            }
        }



    }  //fim do while(1)
return 0;
}
