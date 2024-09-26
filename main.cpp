#include <stdio.h>;
#include <conio.h>;
#include <stdlib.h>;
//Программа расчета калорийности продуктов (вес*калорийность и 
//сложение ингредиентов). 

void main(){
    short int selector = -1;
    Eat* array = (Eat*)malloc(sizeof(Eat)*100);
    int counter = 0;
    while (selector){
        printf("1 - Добавить продукт\n2 - Рассчитать итоговую калорийность\n0 - Выход\n");
        scanf_s("%d",&selector);
        switch(selector){
            case 1:{
                printf("Введите вес: ");
                scanf_s("%d",*(array[i].weight));
                printf("Введите калорийность на 100 грамм: ");
                scanf_s("%d",*(array[i].callories));
            }
            case 2:{}
            case 0:{selector =0;break}
            default:{printf("Неверный номер действия, повторите попытку\n")}
        }
    }
}
