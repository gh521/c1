#include <stdio.h>

void main()
{
    int qian = 0;
    printf("jrcqglxt");
    while (1)
    {
        int a = 0;
        printf("1---cq\n");
        printf("2---qq\n");
        printf("3---ye\n");
        printf("4---tc\n");
        printf("qinshurugongnengbianhao\n");
        scanf("%d", &a);
        if (a == 1)
        {
            int cun;
            char x;
            printf("jinrucunqiangongnengqinshurujine：\n");
            scanf("%d", &cun);
            qian += cun;
            printf("cunqianchengong,dianjihuichejie\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            int qu;
            char x;
            printf("qinshuruquchudejine\n");
            scanf("%d", &qu);
            qian -= qu;
            printf("quqianchengongdianjihuichejixue\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 3)
        {
            char x;
            printf("qu e wei %d/n", qian);
            printf("dianjihuichejixue\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 4)
        {
            printf("tuichu\n");
            break;
        }
    }
    return 0;
}