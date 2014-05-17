#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

void funcao_logo (){

    Sleep (500);
    system ("color 2");
    printf ("\n\n           /////////////////////////////////////////////////////\n");
    printf ("           /////////  BEM VINDO AO HAMBURGUER DE GATO //////////\n");
    printf ("           /////////////////////////////////////////////////////\n");
    Sleep (750);
    system ("cls");

    system ("color 1");
    printf ("\n\n           |||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf ("           |||||||||  BEM VINDO AO HAMBURGUER DE GATO ||||||||||\n");
    printf ("           |||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep (750);
    system ("cls");

    system ("color 4");
    printf ("\n\n           /////////////////////////////////////////////////////\n");
    printf ("           /////////  BEM VINDO AO HAMBURGUER DE GATO //////////\n");
    printf ("           /////////////////////////////////////////////////////\n");
    Sleep (750);
    system ("cls");

    system ("color 7");
    printf ("\n\n           |||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf ("           |||||||||  BEM VINDO AO HAMBURGUER DE GATO ||||||||||\n");
    printf ("           |||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep (750);
}


int main()

{
   int i, quantidade = 0, quantidade2= 0 , quantidade3= 0, menu1, menu2, menu3, teleEntrega = 0, mesa1 = 0, zona = 0, reinicio;
   float item, item2, item3, total1 = 0, total2 = 0, total3 = 0, totalGeral;

    funcao_logo();

    printf ("\n\nDeseja encomendar um lanche? (0 - Nao 1 - Sim): ");
    scanf ("%d", &menu1);

    if (menu1 == 1)
    {
    printf ("\nCardapio Lanches\n\n");
    printf ("Item \t\t\tDescricao \t\t\t\t\tValor R$\n\n");
    printf ("1 - Burguer Gato \tFile de gato, queijo, tomate, alface \n\t\t\te ovo\t\t\t\t\t\t16,00\n\n");
    printf ("2 - Burguer Miau \tLombo de gato picado, maionese \n\t\t\tqueijo,tomate,alface,milho e ervilha\t\t13,50\n\n");
    printf ("3 - Coracao Gato \tCoracao de gato, maionese, queijo \n\t\t\ttomate,alface,milho,ervilha e ovo\t\t14,90\n\n");
    printf ("4 - Gato Acebolado \tBife de hambúrguer, cebola, maionese \n\t\t\tqueijo, alface, tomate, milho, ervilha e ovo\t12,00\n\n");
    printf ("5 - Gato da Casa \tLombo de gato picado, calabresa maionese \n\t\t\tbacon, queijo,tomate,alface,milho e ervilha\t13,50\n\n");
    printf ("6 - Torrada de Gato \tPao de forma,maionese,presunto \n\t\t\tqueijo, bife de file mignon, alface e ovo\t 9,90\n\n");
    printf ("7 - Super Gato \t\tPao de forma grande, maionese ,presunto \n\t\t\tqueijo, bife de file mignon, alface e ovo\t12,90\n\n");

    printf ("\n\nEscolha seu pedido....: ");
    scanf ("%f", &item);
    printf ("\nInforme a quantidade....: ");
    scanf ("%d", &quantidade);

    if (item==1)
        total1=quantidade*16.00;
    else if (item==2)
        total1=quantidade*13.50;
    else if (item==3)
        total1=quantidade*14.90;
    else if (item==4)
        total1=quantidade*12.00;
    else if (item==5)
        total1=quantidade*13.50;
    else if (item==6)
        total1=quantidade*9.90;
    else if (item==7)
        total1=quantidade*12.90;

    }
    else if (menu1 == 0)
    {

    }
    /*else if (menu1 >= 2)
    {
        while (menu1 >=2)
        {
            printf ("\nATENCAO!! Opcao invalida! comece novamente!\n\n\a\a");
            system ("pause");
            printf ("\n\nDeseja reiniciar o programa? (0 - Nao 1 - Sim): ");
            scanf ("%d", &reinicio);
                fflush(stdin);
                if (reinicio == 0)
                    return 0;
                else if (reinicio == 1)
                    {
                    system ("cls");
                    main();
                    }
                else if (reinicio >=2)
                    {
                    printf ("\nATENCAO!! Opcao invalida! comece novamente!\n\n\a\a\a\a");
                    system ("pause");
                    return 0;
                    }
        }
    }*/

    system ("cls");
    funcao_logo();

    printf ("\n\nDeseja adicionar bebidas ao pedido? (0 - Nao 1 - Sim): ");
    scanf ("%d", &menu2);

    if (menu2 == 1)
    {
        printf ("\n\nCardapio Bebidas\n\n");
        printf ("Item \t\t\tDescricao \t\t\t\t\tValor R$\n\n");
        printf ("1 - Refri Lata \t\tCoca, Sprite, Kuat, Fanta \t\t\t3,50\n\n");
        printf ("2 - Refri 2 Litros \tCoca, Sprite, Kuat, Fanta \t\t\t6,00\n\n");
        printf ("3 - Suco Lata \t\tUva, Pessego e Laranja \t\t\t\t4,00\n\n");
        printf ("4 - Cerveja Lata \tKaiser, Skoll, Brahma \t\t\t\t4,50\n\n");
        printf ("5 - Cerveja Long \tBrahma Extra, Heineken \t\t\t\t5,50\n\n");
        printf ("6 - Agua Mineral \tFonte Ijui, Crystal, Sarandi \t\t\t2,50\n\n");
        printf ("\n\nEscolha seu pedido....: ");
        scanf ("%f", &item2);
        printf ("\nInforme a quantidade....: ");
        scanf ("%d", &quantidade2);

        if (item2==1)
            total2=quantidade2*3.50;
        else if (item2==2)
            total2=quantidade2*6.00;
        else if (item2==3)
            total2=quantidade2*4.00;
        else if (item2==4)
            total2=quantidade2*4.50;
        else if (item2==5)
            total2=quantidade2*5.50;
        else if (item2==6)
            total2=quantidade2*2.50;
    }

    else if (menu2 == 0)
    {

    }
  /*  else if (menu2 >= 2)
    {
        while (menu2 >=2)
        {
            printf ("\nATENCAO!! Opcao invalida! comece novamente!\n\n\a\a");
            system ("pause");
            printf ("\n\nDeseja reiniciar o programa? (0 - Nao 1 - Sim): ");
            scanf ("%d", &reinicio);
                if (reinicio == 0)
                    return 0;
                else if (reinicio == 1)
                    {
                    system ("cls");
                    main();
                    }
                else if (reinicio >=2)
                    {
                    printf ("\nATENCAO!! Opcao invalida! comece novamente!\n\n\a\a\a\a");
                    system ("pause");
                    return 0;
                    }
        }
    }
*/
    system ("cls");
    funcao_logo();

    printf ("\n\nDeseja adicionar petiscos ao pedido? (0 - Nao 1 - Sim): ");
    scanf ("%d", &menu3);

    if (menu3 == 1)
    {
    printf ("\n\nCardapio Petiscos\n\n");
    printf ("Item \t\t\tDescricao \t\t\t\t\tValor R$\n\n");
    printf ("1 - Porcao Batata \tBatata Pequena \t\t\t\t\t7,50\n\n");
    printf ("2 - Porcao Batata \tBatata Media \t\t\t\t\t11,00\n\n");
    printf ("3 - Porcao Batata \tBatata Grande \t\t\t\t\t15,00\n\n");
    printf ("4 - Porcao Calabresa \tCalabresa na chapa Pequena \t\t\t8,50\n\n");
    printf ("5 - Porcao Calabresa \tCalabresa na chapa Media \t\t\t13,00\n\n");
    printf ("6 - Porcao Calabresa \tCalabresa na chapa Grande \t\t\t19,00\n\n");
    printf ("\n\nEscolha seu pedido....: ");
    scanf ("%f", &item3);
    printf ("\nInforme a quantidade....: ");
    scanf ("%d", &quantidade3);

    if (item3==1)
        total3=quantidade3*7.50;
    else if (item3==2)
        total3=quantidade3*11.00;
    else if (item3==3)
        total3=quantidade3*15.00;
    else if (item3==4)
        total3=quantidade3*8.50;
    else if (item3==5)
        total3=quantidade3*13.00;
    else if (item3==6)
        total3=quantidade3*19.00;
    }

    else if (menu3 == 0)
    {

    }
    else if (menu3 >= 2)
    {
        printf ("\nATENCAO!! Opcao invalida! comece novamente!\n\n\a\a");
        system ("pause");
        return 0;
    }

    system ("cls");
    funcao_logo();

    printf ("\n\nO pedido eh tele-entrega? (0 - Nao 1 - Sim 2 - Retira): ");
    scanf ("%d", &teleEntrega);

    if (teleEntrega == 0)
    {
        printf ("\nFavor informar o numero da mesa1 (de 1 ate 10) do cliente: ");
        scanf ("%d", &mesa1);
        while (mesa1 >=11)
        {
            printf ("\nATENCAO!! Opcao invalida! comece novamente!\n\n\a\a");
            system ("pause");
            printf ("\nFavor informar o numero da mesa1 (de 1 ate 10) do cliente: ");
            scanf ("%d", &mesa1);
        };
    }

    else if (teleEntrega == 1)
    {
        printf ("\n\nZona \t\t\tValor R$ \t\tTempo Estimado Trajeto\n");
        printf ("\n 1 - Centro \t\tR$  6,00 \t\t 20 Minutos");
        printf ("\n 2 - Sul \t\tR$ 12,00 \t\t 45 Minutos");
        printf ("\n 3 - Norte \t\tR$  9,00 \t\t 25 Minutos");
        printf ("\n 4 - Leste \t\tR$  8,00 \t\t 20 Minutos");
        printf ("\n 5 - Oeste \t\tR$  7,00 \t\t 17 Minutos");
        printf ("\n\nFavor informar a zona da cidade para calcular tarifa de tele-entrega: ");
        scanf ("%d", &zona);

    }

    system ("cls");
    funcao_logo();

    if ((menu1 == 0) && (menu2 == 0 ) && (menu3 == 0))
    {
        printf ("\n\n\nATENCAO!! Pedido vazio, por favor verifique e tente novamente!\n\n");
        system ("pause");
        return 0;
    }
    else
    {

    if ((mesa1 >=1) && (mesa1 <=10))
        printf ("\n\n\t\t\tResumo do Pedido Mesa %d\n\n", mesa1);
    else if (teleEntrega == 1)
        printf ("\n\n\t\t\tResumo do Pedido Tele-Entrega\n\n");
    else if (teleEntrega == 2)
        printf ("\n\n\t\t\tResumo do Pedido Retira\n\n");

    printf ("\nAguarde enquanto calculamos o seu pedido ");
    printf (". ");
    Sleep (500);
    printf (". ");
    Sleep (500);
    printf (". ");
    Sleep (500);
    printf (". ");
    Sleep (500);
    printf (". ");
    Sleep (500);
    printf (". ");
    Sleep (500);
    printf (". ");
    Sleep (500);
    printf (". \n");
    Sleep (500);

    printf ("\nItem \tDescricao\t\tValor\t\tQuantidade\tValor Total\n");
    printf ("----------------------------------------------------------------------------\n");

    if (item == 0); //resumo pedido lanche começa aqui

    if (item >= 1)
    {
        printf ("\n%0.0f",item);
        if (item == 1)
            printf ("\tBurguer Gato \t\tR$ 16,00");
        else if (item == 2)
            printf ("\tBurguer Miau \t\tR$ 13,50");
        else if (item == 3)
            printf ("\tCoracao Gato \t\tR$ 14,90");
        else if (item == 4)
            printf ("\tGato Acebolado \t\tR$ 12,00");
        else if (item == 5)
            printf ("\tGato da Casa \t\tR$ 13,50");
        else if (item == 6)
            printf ("\tTorrada de Gato \tR$  9,90");
        else if (item == 7)
            printf ("\tSuper Gato \t\tR$ 12,90");
            printf("\t\t%d",quantidade);
            printf ("\tR$ %0.2f",total1);
    } //resumo pedido lanche termina aqui

    if (item2 == 0); //resumo pedido bebida começa aqui

    if (item2 >= 1)
    {
        printf ("\n%0.0f",item2);
    if (item2 == 1)
        printf ("\tRefri Lata \t\tR$  3,50");
    else if (item2 == 2)
        printf ("\tRefri 2 Litros \t\tR$  6,00");
    else if (item2 == 3)
        printf ("\tSuco Lata \t\tR$  4,00");
    else if (item2 == 4)
        printf ("\tCerveja Lata \t\tR$  4,50");
    else if (item2 == 5)
        printf ("\tCerveja Long \t\tR$  5,50");
    else if (item2 == 6)
        printf ("\tAgua Mineral \t\tR$  2,90");
    printf("\t\t%d",quantidade2);
    printf ("\tR$ %0.2f",total2);
    } //resumo pedido bebida termina aqui

    if (item3 == 0); //resumo pedido petiscos começa aqui

    if (item3 >= 1)
    {
        printf ("\n%0.0f",item3);
    if (item3 == 1)
        printf ("\tBatata Pequena \t\tR$  7,50");
    else if (item3 == 2)
        printf ("\tBatata Media \t\tR$ 11,00");
    else if (item3 == 3)
        printf ("\tBatata Grande \t\tR$ 15,00");
    else if (item3 == 4)
        printf ("\tCalabresa Pequena \tR$  8,50");
    else if (item3 == 5)
        printf ("\tCalabresa Media \tR$ 13,00");
    else if (item3 == 6)
        printf ("\tCalabresa Grande \tR$ 19,00");
    printf("\t\t%d",quantidade3);
    printf ("\tR$ %0.2f",total3);
    } //resumo pedido petiscos termina aqui

    if (teleEntrega == 1)
    {
            if (zona == 1)
            {
            printf ("\n\nTaxa de Tele-Entrega para o Centro eh R$ 6,00");
            totalGeral = total1 + total2 + total3 + 6;
            }
            else if (zona == 2)
            {
            printf ("\n\nTaxa de Tele-Entrega para a Zona Sul eh R$ 12,00");
            totalGeral = total1 + total2 + total3 + 12;
            }
            else if (zona == 3)
            {
            printf ("\n\nTaxa de Tele-Entrega para a Zona Norte eh R$ 9,00");
            totalGeral = total1 + total2 + total3 + 9;
            }
            else if (zona == 4)
            {
            printf ("\n\nTaxa de Tele-Entrega para a Zona Leste eh R$ 8,00");
            totalGeral = total1 + total2 + total3 + 8;
            }
            else if (zona == 5)
            {
            printf ("\n\nTaxa de Tele-Entrega para a Zona Oeste eh R$ 7,00");
            totalGeral = total1 + total2 + total3 + 7;
            }
        }

        else if (teleEntrega == 0)
            totalGeral = total1 + total2 + total3;
        else if (teleEntrega == 2)
            totalGeral = total1 + total2 + total3;

    printf ("\n\nO valor total a pagar eh\t\t\t\t\tR$ %0.2f\n\n\n",totalGeral);

    printf ("Data do Pedido: ");
    system ("\nDATE/t");
    }

    system ("pause");
}
