#include <stdio.h>
#define size 5
// int pole1[5] = {5, 4, 3, 2, 1};
// int pole2[5] = {0};
// int pole3[5] = {0};
// int poleset[3][size] = {{7, 6, 5, 4, 3, 2, 1}, {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0}};
int poleset[3][size] = {{0},{0},{0}};
int counter = 0;
int top[3] = {size - 1, -1, -1};
int pop(int pole);
void push(int pole, int ele);
int not(int pole1, int pole2);
void display();
void towerOfHanoi(int hieght, int poleIni, int poleFin)
{
    if (hieght == 1)
    {
        display();
        push(poleFin, pop(poleIni));
        return;
    }
    towerOfHanoi(hieght - 1, poleIni, not(poleIni, poleFin));
    display();
    push(poleFin, pop(poleIni));
    towerOfHanoi(hieght - 1, not(poleIni, poleFin), poleFin);
    display();
}

int main()
{
    for (int i = size; i > 0; i--)
    {
        poleset[0][counter++] = i;
    }
    display();
    towerOfHanoi(size, 0, 2);
}
int pop(int pole)
{
    top[pole] = top[pole] - 1;
    int ans = poleset[pole][top[pole] + 1];
    poleset[pole][top[pole] + 1] = 0;
    return ans;
}
void push(int pole, int ele)
{
    top[pole] = top[pole] + 1;
    poleset[pole][top[pole]] = ele;
}
int not(int pole1, int pole2)
{
    int arr[] = {1, 1, 1};
    arr[pole1] = 0;
    arr[pole2] = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i])
        {
            return i;
        }
    }
}
void display()
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", poleset[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}
