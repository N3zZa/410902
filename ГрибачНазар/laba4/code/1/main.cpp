#include <iostream>

using namespace std;

int main()
{
    int n = 8;
    int K[n] = {0, 0, 1, 4, 0, 10, 0, 0};

    int i = 0;

    for (int q = 0; q < n; q++)
    {
        if (K[q])
        {                  /* если элемент не равен нулю выполняется код */
            K[i++] = K[q]; /* меняет первый элемент на элемент, который не равен нулю; записываем в i количество ненулевых значений(сохраняем индекс для того чтобы добавить в конец нули) */
        }
    }
    for (; i < n; i++)
    { /* добавиляем в конец нули */
        K[i] = 0;
    }

    for (int q = 0; q < n; q++)
    { /* вывод в консоль */
        cout << K[q] << ' ';
    }

    return 0;
}
