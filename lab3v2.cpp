#include <iostream>

using namespace std;
void sort1(int* mas, int num) {
    int helpnum;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (mas[j] > mas[j + 1]) {
                helpnum = mas[j + 1];
                mas[j + 1] = mas[j];
                mas[j] = helpnum;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << mas[i] << ' ';
    }
}
void sort2(char* mas, int num) {
    int mass[int('z') + 1] = { 0 };//counting the number of letters
    for (int i = 0; i < num; i++)
    {
        for (int j = int('a'); j <= 'z'; j++)
        {
            if (int(mas[i]) == j) {//counting the number of letters
                mass[j] += 1;
                break;
            }
        }
    }
    for (int i = int('a'); i <= int('z'); i++)
    {
        for (int j = mass[i]; j > 0; j--)
        {
            cout << char(i) << " ";
        }
    }
}
void sort3(int* arr, int size) {
    int left_size = size / 2;
    int right_size = size - left_size;
    if (size > 1)
    {
        sort3(&arr[0], left_size);
        sort3(&arr[left_size], right_size);
    }
    int arr2[1000];
    int cnt, lcnt, rcnt;
    rcnt = left_size;
    cnt = lcnt = 0;
    while ((lcnt < left_size) or (rcnt < size))
    {
        if (arr[lcnt] < arr[rcnt]) {
            arr2[cnt++] = arr[lcnt++];
        }
        else
        {
            arr2[cnt++] = arr[rcnt++];
        }
        if (lcnt == left_size) {
            for (int i = rcnt; i < size; i++)
            {
                arr2[cnt++] = arr[i];
            }
            break;
        }
        if (rcnt == size) {
            for (int i = lcnt; i < left_size; i++)
            {
                arr2[cnt++] = arr[i];
            }
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr2[i];
    }
}

int main()
{
    int sort_num;
    int ct_mas;
    cout << "Select a sort: \n1.Bubble sort\n2.Counting sort\n3.Merge sort\n" << endl;
    cin >> sort_num;
    switch (sort_num)
    {
    case 1:
    {
        cout << "Enter the number of elements of the integer array: ";
        cin >> ct_mas;
    int arr[1000] = { 0 }; //dynamic array declaration
    cout << "Enter values for an integer array: \n";
    for (int i = 0; i < ct_mas; i++)
    {
        cin >> arr[i];
    }
    sort1(arr, ct_mas); }
    break;
    case 2:
    {cout << "Enter the number of elements of the literal array: ";
    cin >> ct_mas;
    char arr1[1000] = { 0 }; //dynamic array already character type
    cout << "Enter values for literal array: \n";
    for (int i = 0; i < ct_mas; i++)
    {
        cin >> arr1[i];
    }
    sort2(arr1, ct_mas); //pass a pointer to an array and the number of elements in the array to the function
    }
    break;
    case 3:
    {cout << "Enter the number of integer array elements: ";
    cin >> ct_mas;
    int arr1[1000] = { 0 };
    cout << "Enter values for integer array: \n";
    for (int i = 0; i < ct_mas; i++)
    {
        cin >> arr1[i];
    }
    sort3(arr1, ct_mas);
    for (int i = 0; i < ct_mas; i++)
    {
        cout << arr1[i] << " ";
    }
    break;
    }
    default:
        cout << "\nThere's no such thing" << endl;
        break;
    }
    return 0;
}