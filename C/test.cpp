#include "stdio.h"
#include "time.h"
void printCal(int d, int top)
{
    int i, j, n, k;
    n = top - (7 - d) - 28;
    n = (n > 0) ? 0 : n;
    for (j = 1; j <= n; ++j)
        printf("%5d", top - n + j);
    for (; j < d + 1; ++j)
        printf("%5c", ' ');
    k = 1;
    for (; j <= 7; ++j)
        printf("%5d", k++);
    putchar('\n');
    for (i = 2; i <= 6; ++i, putchar('\n'))
        for (j = 1; j <= 7; ++j)
        {
            if (k > top)
                break;
            printf("%5d", k++);
        }
}
int main()
{
    char *month[] = {"Gieng", "Hai", "Ba", "Tu", "Nam", "Sau",
                     "Bay", "Tam", "Chin", "Muoi", "Muoi Mot", "Chap"};
    int m, y, top;
    struct tm tmstruct;

    printf("Nhap thang, nam(sau1900): ");
    scanf("%d%d", &m, &y);
    tmstruct.tm_sec = 0;
    tmstruct.tm_min = 0;
    tmstruct.tm_hour = 0;
    tmstruct.tm_mday = 1;
    tmstruct.tm_mon = m - 1;
    tmstruct.tm_year = y - 1900;
    mktime(&tmstruct);

    switch (m)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        top = 30;
        break;
    case 2:
        top = 28 + ((y % 4 == 0 && y % 100) || y % 400 == 0);
        break;
    default:
        top = 31;
    }
    printf("Thang %s %d\n", month[m - 1], y);
    printf(" CN Hai Ba Tu Nam Sau Bay\n");
    printCal(tmstruct.tm_wday, top);
    return 0;
}