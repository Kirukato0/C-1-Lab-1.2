// ДЗ ЛАБ 1 ЗАДАНИЕ 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    char s;
    float x, a, b;
    printf("Choose your function (+, -, *, /): "); scanf_s("%c", &s);
    if (s == '+' || s == '-'
        || s == '*' || s == '/') {
        printf("a = "); scanf_s("%f", &a);
        printf("b = "); scanf_s("%f", &b);
        switch (s) {
        case '+':
            printf("Addition ");
            printf("%f", a);
            printf("+");
            printf("%f", b);
            printf("=");
            x = a + b;
            printf("%f \n", x);
            break;
        case '-':
            printf("Subtraction ");
            printf("%f", a);
            printf("-");
            printf("%f", b);
            printf("=");
            x = a - b;
            printf("%f\n", x);
            break;
        case '*':
            printf("Multiplication ");
            printf("%f", a);
            printf("*");
            printf("%f", b);
            printf("=");
            x = a * b;
            printf("%f\n", x);
            break;
        case '/':
            if (b != 0) {
                printf("Division ");
                printf("%f", a);
                printf("/");
                printf("%f", b);
                printf("=");
                x = a / b;
                printf("%f\n", x);
            }
            else printf("Divided be zero!");
        }

    }
    else printf("You have to use signs of the programm!!!");
    system("pause");
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
