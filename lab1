#include <iostream>
int factorial(int num, int rez)
{
    if (num != 0) 
    {
        rez *= num;
        num--;
        factorial(num, rez);
    }
    else {
        return rez;
    }
}
void task_1() 
    {
    std::cout << "1\n\n";

    int num;
    std::cout << "Vvedite chislo: ";
    std::cin >> num;
    for (int i = 0; i <= num; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            std::cout << k << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}
void task_2() {
    std::cout << "2\n";
    int n, k;
    std::cout << "\nVvedite n and k, n>k: ";
    std::cin >> n >> k;
    if (k <= n) {
        std::cout << "\nRezultat: " << float(factorial(n, 1)) / (factorial(n - k, 1) * factorial(k, 1)) << "\n\n";
    }
    else {
        std::cout << "\nError, vy vveli K>N\n\n";
    }
}
void task_3() {
    std::cout << "3\n";
    std::cout << "\nDlya zabershenia vvedite 0\n\n" << "Vvedite chisla: ";
    int summ = 0, num, koll = 0;
    std::cin >> num;
    while (num != 0) {
        koll++;
        summ += num;
        std::cin >> num;
    }
    std::cout << "\nRezultat: " << double(summ) / koll << "\n\n";
}
int main() {
    int num;
    bool run = true;
    while (run)
    {
        std::cout << "Vvedite nomer zadaniya 1-3, 4 - exit: ";
        std::cin >> num;
        std::cout << '\n';
        switch (num)
        {
        case 1:
            task_1();
            break;
        case 2:
            task_2();
            break;
        case 3:
            task_3();
            break;
        case 4:
            run = false;
            break;
        }
    }
}
