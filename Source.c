#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include < locale.h >
#include <math.h>
#define M_PI       3.14159265358979323846

int main() {
    setlocale(LC_CTYPE, "RUS");
    char symbol;
    double a, b;



    // Ввод данных
    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol);
    printf("Введите угол в градусах: ");
    scanf("%lf", &a);
    printf("Введите длину прилежащего катета: ");
    scanf("%lf", &b);

    // Перевод угла в радианы
    double a_rad = a * M_PI / 180.0;

    // Вычисление противолежащего катета через тангенс
    double pr_k = b * tan(a);


    printf("Противолежащий катет: %.2f\n", pr_k);
    printf("Рисунок треугольника:\n");

    // Рисование треугольника с прямым углом в правом нижнем углу
    for (int y = 0; y < pr_k; y++) {
        // Количество символов в строке пропорционально текущей высоте
        int num_chars = (int)(double)(y + 1) * b / pr_k;

        // Пробелы для выравнивания по правому краю
        int spaces = b - num_chars;
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }

        // Символы треугольника
        for (int i = 0; i < num_chars; i++) {
            printf("%c", symbol);
        }
        printf("\n");
    }





    return 0;
}
