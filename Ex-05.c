#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigo = 0, compra = 0;
    int stockUm = 6, stockDois = 3, stockTres = 8, quantidade = 0;
    float resultado = 0;

    do
    {

        printf("Adicionar uma venda ? \n1: para Sim\n2: para exibir o total de ventas: ");
        scanf("%d", &codigo);
        printf("\n");
        switch (codigo)
        {
        case 1:

            quantidade++;
            printf("==============    Menu   ============== \n");
            printf("1 |Ventilador| R$: 165,60 | Stock: %d | \n", stockUm);
            printf("2 |Cadeira G.| R$: 100,60 | Stock: %d | \n", stockDois);
            printf("3 |Teclado   | R$: 70,60  | Stock: %d | \n", stockTres);
            printf("=======================================\n");
            printf("\n");
            printf("selecione os produtos vendidos: ");
            scanf("%d", &compra);

            switch (compra)
            {
            case 1:
                stockUm = stockUm - 1;
                resultado = resultado + 165.60;
                break;
            case 2:
                stockDois = stockDois - 1;
                resultado = resultado + 100.00;
                break;
            case 3:
                stockTres = stockTres - 1;
                resultado = resultado + 70.00;
                break;
            default:
                break;

                break;
            }
        case 2:
        default:
            break;
        }

    } while (codigo != 2);

    system("cls");

    printf("Numero de vendas: %d \n", quantidade);
    printf("Lucro: %.2f \n", resultado);

    return 0;
}