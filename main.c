#include <stdio.h>
#include <stdlib.h>

int main()
{
    double item1price,item2price,item3price,item4price,item5price;
    double item1quantity,item2quantity,item3quantity,item4quantity,item5quantity;
    char item1[20],item2[20],item3[20],item4[20],item5[20];
    printf("SHOPPING LIST\n");
    printf("_____________\n");
    printf("MENU\n");
    printf("1. Maize flour - KES 200\n");
    printf("2. Sugar - KES 150\n");
    printf("3. Cooking oil - KES 400\n");
    printf("4. Lentils - KES 300\n");
    printf("5. Soap - KES 150\n");
    printf("_____________\n");
    printf("ENTER ITEM1:");
    scanf("%s",&item1);
    printf("ENTER PRICE:");
    scanf("%lf",&item1price);
    printf("QUANTITY:");
    scanf("%lf",&item1quantity);
    printf("ITEM 1 COST: %.0lf\n",item1price*item1quantity);

    printf("ENTER ITEM2:");
    scanf("%s",&item2);
    printf("ENTER PRICE:");
    scanf("%lf",&item2price);
    printf("QUANTITY:");
    scanf("%lf",&item2quantity);
    printf("ITEM 2 COST: %.0lf\n",item2price*item2quantity);

    printf("ENTER ITEM3:");
    scanf("%s",&item3);
    printf("ENTER PRICE:");
    scanf("%lf",&item3price);
    printf("QUANTITY:");
    scanf("%lf",&item3quantity);
    printf("ITEM 3 COST: %.0lf\n",item3price*item3quantity);

    printf("ENTER ITEM4:");
    scanf("%s",&item4);
    printf("ENTER PRICE:");
    scanf("%lf",&item4price);
    printf("QUANTITY:");
    scanf("%lf",&item4quantity);
    printf("ITEM 4 COST: %.0lf\n",item4price*item4quantity);

    printf("ENTER ITEM5:");
    scanf("%s",&item5);
    printf("ENTER PRICE:");
    scanf("%lf",&item5price);
    printf("QUANTITY:");
    scanf("%lf",&item5quantity);
    printf("ITEM 5 COST: %.0lf\n",item5price*item5quantity);
    printf("ALL ITEMS BOUGHT:\n");
    printf("%.0lf  %s\n",item1quantity,item1);
    printf("%.0lf  %s\n",item2quantity,item2);
    printf("%.0lf  %s\n",item3quantity,item3);
    printf("%.0lf  %s\n",item4quantity,item4);
    printf("%.0lf  %s\n",item5quantity,item5);
    printf("TOTAL COST: %.0lf\n",item1price*item1quantity+item2price*item2quantity+item3price*item3quantity+item4price*item4quantity+item5price*item5quantity);

    return 0;
}
