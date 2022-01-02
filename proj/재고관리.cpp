#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>


int product_display(void);
int item_display(void);
int select_menu_item(void);
void hat(void);
void clothes(void);
void pants(void);
void shoes(void);
void save_file_hat(int i, int c);
void save_file_clothes(int i, int c);
void save_file_pants(int i, int c);
void save_file_shoes(int i, int c);
void load_file_hat(void);
void load_file_clothes(void);
void load_file_shoes(void);
void load_file_pants(void);
void plus_product_hat(void);
void plus_product_clothes(void);
void plus_product_pants(void);
void plus_product_shoes(void);
int select_box(void);
void see_box(int c);
int select_num(int c);
void del_hat(void);
void del_clothes(void);
void del_pants(void);
void del_shoes(void);
int del_box(void);
void add_hat(void);
void add_clothes(void);
void add_pants(void);
void add_shoes(void);
int add_box(void);
void minus_hat(void);
void minus_clothes(void);
void minus_pants(void);
void minus_shoes(void);
int minus_box(void);
void title1();

struct item                                //鼻ヶ 薑爾蒂 殮溘ж朝 掘褻羹
{
    char name[31];                          // 鼻ヶ 檜葷
    char color[31];                          // 鼻ヶ 儀
    char size[31];                             // 鼻ヶ 餌檜鍔
    int amount;                                 // 鼻ヶ 熱榆
};
struct item p[100] = { 0 };

void jaeg()

{
    system("mode con cols=140 lines=40");

    for (int i = 0; i < 100; i++)
        strcpy(p[i].name, "-");
    int p = 0;
    while ((p = product_display()) != 5)
		{
        switch (p) {
        case 1: load_file_hat(); hat();
            break;
        case 2: load_file_clothes(); clothes();
            break;
        case 3: load_file_pants(); pants();
            break;
        case 4: load_file_shoes(); shoes();
        default:break;
            //      case 5: back();
            //         break;
            //      default: break;
        }
    }
    return;
}

int product_display(void)               // ヶ犒 掘碟 釭顫頂朝 葬蝶お
{
    int select;
    system("cls");
    printf("\n忙式式式式式式式式式式式式式式式式式式式式式式式式式式  ヶ跡 掘碟 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
    printf("弛                        [1]薯 ヶ1 (賅 濠)                           弛\n");
    printf("弛                        [2]薯 ヶ2 ( 褡 )                            弛\n");
    printf("弛                        [3]薯 ヶ3 (夥 雖)                           弛\n");
    printf("弛                        [4]薯 ヶ4 (褐 嫦)                           弛\n");
    printf("弛                        [5]釭 陛 晦                                 弛\n");
    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
    select = _getch() - 48;
    return select;
}

int item_display(void)      //ヶ跡 掘碟縑憮 廓�� 摹鷗ж賊 釭顫釭朝 ル, 晦棟 摹鷗 葬蝶お
{
    int j, i, g = 0;
    int red = 4;
    int white = 7;
    system("cls");                  // 璽 蟾晦�值� 薯ヶ薑爾蒂 釭顫頂朝 ル 轎溘

    printf("忙式式式式式式式式式式式式式  1 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  6 式式式式式式式式式式式式式式式式式式式式式式式式式式式式  11 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  16 式式式式式式式式式式式式式忖\n");

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 21; j += 5) {
            printf("弛  薯ヶ貲 : %-20s弛", p[j - 1].name);
        }
        printf("\n");
        for (j = i + 1; j < 21; j += 5) {
            printf("弛   儀 鼻 : %-20s弛", p[j - 1].color);
        }
        printf("\n");
        for (j = i + 1; j < 21; j += 5) {
            printf("弛  餌檜鍔 : %-20s弛", p[j - 1].size);
        }
        printf("\n");
        for (j = i + 1; j < 21; j += 5) {
            if (p[j - 1].amount < 6) {          // 熱榆 5偃 檜ж橾陽 旋濠 儀鼻 滲唳
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), red);
                printf("弛   熱 榆 : %-20d弛", p[j - 1].amount);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), white);
            }
            else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), white);
                printf("弛   熱 榆 : %-20d弛", p[j - 1].amount);
            }
        }
        printf("\n");
        if (i == 0)
            printf("戍式式式式式式式式式式式式式式 2 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  7 式式式式式式式式式式式式式式式式式式式式式式式式式式式式  12 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  17 式式式式式式式式式式式式式扣\n");
        else if (i == 1)
            printf("戍式式式式式式式式式式式式式式 3 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  8 式式式式式式式式式式式式式式式式式式式式式式式式式式式式  13 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  18 式式式式式式式式式式式式式扣\n");
        else if (i == 2)
            printf("戍式式式式式式式式式式式式式式 4 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  9 式式式式式式式式式式式式式式式式式式式式式式式式式式式式  14 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  19 式式式式式式式式式式式式式扣\n");
        else if (i == 3)
            printf("戍式式式式式式式式式式式式式式 5 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式  10 式式式式式式式式式式式式式式式式式式式式式式式式式式式式  15 式式式式式式式式式式式式式式式式式式式式式式式式式式式式  20 式式式式式式式式式式式式式扣\n");

        else if (i == 4)
            printf("戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");

    }
    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
    return 0;

}

void title1() //顫檜ぎ л熱 title 衛濛
{
   printf("\n\n\n\n\n");
   printf("                         ﹤﹤       ﹤﹤          ﹤﹤         ﹤         ﹤          ﹤﹤         ﹤﹤﹤﹤﹤﹤﹤﹤     ﹤﹤﹤﹤﹤﹤        \n");
   printf("                         ﹤﹤      ﹤ ﹤         ﹤  ﹤        ﹤﹤       ﹤         ﹤  ﹤        ﹤                   ﹤                  \n");
   printf("                         ﹤ ﹤    ﹤  ﹤        ﹤    ﹤       ﹤ ﹤      ﹤        ﹤    ﹤       ﹤                   ﹤                  \n");
   printf("                         ﹤  ﹤  ﹤   ﹤       ﹤      ﹤      ﹤  ﹤     ﹤       ﹤      ﹤      ﹤       ﹤﹤﹤﹤﹤  ﹤                  \n");
   printf("                         ﹤   ﹤﹤    ﹤      ﹤        ﹤     ﹤   ﹤    ﹤      ﹤        ﹤     ﹤               ﹤  ﹤﹤﹤﹤﹤﹤        \n");
   printf("                         ﹤    ﹤     ﹤     ﹤﹤﹤﹤﹤﹤﹤    ﹤    ﹤   ﹤     ﹤﹤﹤﹤﹤﹤﹤    ﹤               ﹤  ﹤                  \n");
   printf("                         ﹤           ﹤    ﹤            ﹤   ﹤     ﹤  ﹤    ﹤            ﹤   ﹤﹤﹤﹤﹤﹤﹤   ﹤  ﹤                  \n");
   printf("                         ﹤           ﹤   ﹤              ﹤  ﹤      ﹤ ﹤   ﹤              ﹤                   ﹤  ﹤                  \n");
   printf("                         ﹤           ﹤  ﹤                ﹤ ﹤       ﹤﹤  ﹤                ﹤                  ﹤  ﹤﹤﹤﹤﹤﹤        \n");
   
}

int select_menu_item(void)      // 營堅褻餌 晦棟 葬蝶お
{
    system("cls");
    int select = 0;
    item_display();
    printf("\n");
    printf("\n忙式式式式式式式式式式式式式式式式式式式式式式式式式式  <錳ж衛朝 詭景 廓�ㄧ� 援腦衛螃> 式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
    printf("弛                                   1.薯ヶ 薑爾 蹺陛                                       弛\n");
    printf("弛                                   2.薯ヶ 薑爾 餉薯                                       弛\n");
    printf("弛                                   3.薯ヶ 殮堅                                            弛\n");
    printf("弛                                   4.薯ヶ 轎堅                                            弛\n");
    printf("弛                                   0.釭陛晦                                               弛\n");
    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
    select = _getch() - 48;
    return select;
}

void hat(void)                  // 羅廓簞 ヶ跡縑 渠и л熱
{
    int p;
    system("cls");
    while ((p = select_menu_item()) != 0)
    {
        switch (p)
        {
        case 1: plus_product_hat();         // 1廓擊 揚毓擊陽 薯ヶ 蹺陛 晦棟 ��轎
            break;
        case 2: del_hat();                  // 2廓擊 揚毓擊陽 薯ヶ 餉薯 晦棟 ��轎
            break;
        case 3:  add_hat();                 // 3廓擊 揚毓擊陽 殮堅 晦棟 ��轎
            break;
        case 4: minus_hat();                // 4廓擊 揚毓擊陽 轎堅 晦棟 ��轎
            break;
        default: break;
        }
    }
}

void clothes(void)              // 舒廓簞 ヶ跡縑 渠и л熱
{
    int p;
    system("cls");

    while ((p = select_menu_item()) != 0)
    {
        switch (p)
        {
        case 1:plus_product_clothes();
            break;
        case 2: del_clothes();
            break;
        case 3: add_clothes();  
            break;
        case 4:  minus_clothes(); 
            break;
        default: break;
        }
    }
}

void pants(void)                        // 撮廓簞 ヶ跡縑 渠и л熱
{
    int p;
    system("cls");

    while ((p = select_menu_item()) != 0)
    {
        switch (p)
        {
        case 1: plus_product_pants();
            break;
        case 2: del_pants();
            break;
        case 3: add_pants();
            break;
        case 4: minus_pants();
            break;
        default: break;
        }
    }
}

void shoes(void)                    // 啻廓簞 ヶ跡縑 渠и л熱
{
    int p;
    system("cls");

    while ((p = select_menu_item()) != 0)
    {
        switch (p)
        {
        case 1: plus_product_shoes();
            break;
        case 2:  del_shoes();
            break;
        case 3: add_shoes();
            break;
        case 4: minus_shoes();
            break;
        default: break;
        }
    }
}



void plus_product_hat(void)     //薯ヶ 蹺陛 л熱
{
    int c, i, g = 0;

    system("cls");

    c = select_box();
    i = select_num(c);
    save_file_hat(i, c);
}
void plus_product_clothes(void)     //薯ヶ 蹺陛 л熱
{
    int c, i, g = 0;

    system("cls");

    c = select_box();
    i = select_num(c);
    save_file_clothes(i, c);
}
void plus_product_pants(void)     //薯ヶ 蹺陛 л熱
{
    int c, i, g = 0;

    system("cls");

    c = select_box();
    i = select_num(c);
    save_file_pants(i, c);
}
void plus_product_shoes(void)     //薯ヶ 蹺陛 л熱
{
    int c, i, g = 0;

    system("cls");

    c = select_box();
    i = select_num(c);
    save_file_shoes(i, c);
}

int select_num(int c)
{
    int select = 1;

    while (1) {
        see_box(c);
        return select;
        break;
    }

}

int select_box(void)      //賃廓 蘊檣雖 高擊 殮溘ж朝 л熱.
{
    system("cls");
    int select = 0;
    while (1) {
        item_display();
        printf("\n");
        printf("\t               忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
        printf("\t               弛                   蹺陛й 嬪纂蒂 堅腦撮蹂.[1~20]                    弛\n");
        printf("\t               弛       嬪纂1:[1~5] 嬪纂2:[6~10] 嬪纂3:[11~15] 嬪纂4:[16~20]       弛\n");
        printf("\t               戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
        printf("\t                蘊 廓��>>");
        scanf("%d", &select);

        if (select < 1 || select > 20) {
            printf("\n\n殮溘 й 熱 橈朝 高殮棲棻.");
            system("cls");
        }
        else {
            return select;
            break;
        }
    }
}

void see_box(int c)
{
    system("cls");
    int i;
}

int del_box(void)      //賃廓 蘊檣雖 高擊 殮溘ж朝 л熱.
{
    system("cls");
    int select = 0;
    while (1) {
        item_display();
        printf("\n");
        printf("\t               忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
        printf("\t               弛                   餉薯й 嬪纂蒂 堅腦撮蹂.[1~20]                    弛\n");
        printf("\t               弛       嬪纂1:[1~5] 嬪纂2:[6~10] 嬪纂3:[11~15] 嬪纂4:[16~20]       弛\n");
        printf("\t               戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
        printf("\t                蘊 廓��>>");
        scanf("%d", &select);

        if (select < 1 || select > 20) {
            printf("\n\n殮溘 й 熱 橈朝 高殮棲棻.");
            system("cls");
        }
        else {
            return select;
            break;
        }
    }
}


int add_box(void)      //賃廓 蘊檣雖 高擊 殮溘ж朝 л熱.
{
    system("cls");
    int select = 0;
    while (1) {
        item_display();
        printf("\n");
        printf("\t               忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
        printf("\t               弛                   殮堅й 嬪纂蒂 堅腦撮蹂.[1~20]                    弛\n");
        printf("\t               弛       嬪纂1:[1~5] 嬪纂2:[6~10] 嬪纂3:[11~15] 嬪纂4:[16~20]       弛\n");
        printf("\t               戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
        printf("\t                蘊 廓��>>");
        scanf("%d", &select);

        if (select < 1 || select > 20) {
            printf("\n\n殮溘 й 熱 橈朝 高殮棲棻.");
            system("cls");
        }
        else {
            return select;
            break;
        }
    }
}


int minus_box(void)      //賃廓 蘊檣雖 高擊 殮溘ж朝 л熱.
{
    system("cls");
    int select = 0;
    while (1) {
        item_display();
        printf("\n");
        printf("\t               忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
        printf("\t               弛                   轎堅й 嬪纂蒂 堅腦撮蹂.[1~20]                    弛\n");
        printf("\t               弛       嬪纂1:[1~5] 嬪纂2:[6~10] 嬪纂3:[11~15] 嬪纂4:[16~20]       弛\n");
        printf("\t               戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
        printf("\t                蘊 廓��>>");
        scanf("%d", &select);

        if (select < 1 || select > 20) {
            printf("\n\n殮溘 й 熱 橈朝 高殮棲棻.");
            system("cls");
        }
        else {
            return select;
            break;
        }
    }
}

void save_file_hat(int i, int c)            // 薯ヶ蹺陛 塽 だ橾 盪濰 л熱
{
    system("cls");
    int g = 0;
    g = 5 * (i - 1) + (c - 1);     //蘊=4(16~20廓) 廓��=4 橾��, g= 5*3+3 = 18 -> 18廓 寡翮縑 盪濰

    FILE* fp = NULL;
    char fname[100] = { 0 };

    printf("\n\n\t\t\t    薯ヶ貲擊 殮溘ж撮蹂:");
    scanf("%s", fname);

    fp = fopen("hat.txt", "w");     //hat.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    strcpy(p[g].name, fname);
    printf("\n\t\t\t    儀鼻擊 殮溘ж撮蹂:");
    scanf("%s", &p[g].color);

    printf("\n\t\t\t    餌檜鍔蒂 殮溘ж撮蹂:");
    scanf("%s", &p[g].size);
    printf("\n\t\t\t    熱榆擊 殮溘ж撮蹂:");
    scanf("%d", &p[g].amount);

    for (int k = 0; k < 100; k++) {
        fprintf(fp, "%s %s %s %d ", p[k].name, p[k].color, p[k].size, p[k].amount); //hat.txtだ橾縑 p[0]~p[99] 掘褻羹 盪濰
        fputc('\n', fp);
    }
    fclose(fp);

    printf("\n\n\n\t\t\t        檜葷:%s, 儀鼻:%s, 餌檜鍔:%s, 熱榆:%d\n", p[g].name, p[g].color, p[g].size, p[g].amount); //掘褻羹縑 盪濰 腎橫 氈朝雖 �挫�
    printf("\n\t\t\t            薯ヶ 蹺陛陛 諫猿腎歷蝗棲棻.");

    _getch();
}

void save_file_clothes(int i, int c)            // 薯ヶ蹺陛 塽 だ橾 盪濰 л熱
{
    system("cls");
    int g = 0;
    g = 5 * (i - 1) + (c - 1);     //蘊=4(16~20廓) 廓��=4 橾��, g= 5*3+3 = 18 -> 18廓 寡翮縑 盪濰

    FILE* fp = NULL;
    char fname[100] = { 0 };

    printf("\n\n\t\t\t    薯ヶ貲擊 殮溘ж撮蹂:");
    scanf("%s", fname);

    fp = fopen("clothes.txt", "w");     //clothes.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    strcpy(p[g].name, fname);
    printf("\n\t\t\t    儀鼻擊 殮溘ж撮蹂:");
    scanf("%s", &p[g].color);

    printf("\n\t\t\t    餌檜鍔蒂 殮溘ж撮蹂:");
    scanf("%s", &p[g].size);
    printf("\n\t\t\t    熱榆擊 殮溘ж撮蹂:");
    scanf("%d", &p[g].amount);

    for (int k = 0; k < 100; k++) {
        fprintf(fp, "%s %s %s %d ", p[k].name, p[k].color, p[k].size, p[k].amount); //clothes.txtだ橾縑 p[0]~p[99] 掘褻羹 盪濰
        fputc('\n', fp);
    }
    fclose(fp);

    printf("\n\n\n\t\t\t        檜葷:%s, 儀鼻:%s, 餌檜鍔:%s, 熱榆:%d\n", p[g].name, p[g].color, p[g].size, p[g].amount); //掘褻羹縑 盪濰 腎橫 氈朝雖 �挫�
    printf("\n\t\t\t            薯ヶ 蹺陛陛 諫猿腎歷蝗棲棻.");

    _getch();
}

void save_file_pants(int i, int c)            // 薯ヶ蹺陛 塽 だ橾 盪濰 л熱
{
    system("cls");
    int g = 0;
    g = 5 * (i - 1) + (c - 1);     //蘊=4(16~20廓) 廓��=4 橾��, g= 5*3+3 = 18 -> 18廓 寡翮縑 盪濰

    FILE* fp = NULL;
    char fname[100] = { 0 };

    printf("\n\n\t\t\t    薯ヶ貲擊 殮溘ж撮蹂:");
    scanf("%s", fname);

    fp = fopen("pants.txt", "w");     //pants.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    strcpy(p[g].name, fname);
    printf("\n\t\t\t    儀鼻擊 殮溘ж撮蹂:");
    scanf("%s", &p[g].color);

    printf("\n\t\t\t    餌檜鍔蒂 殮溘ж撮蹂:");
    scanf("%s", &p[g].size);
    printf("\n\t\t\t    熱榆擊 殮溘ж撮蹂:");
    scanf("%d", &p[g].amount);

    for (int k = 0; k < 100; k++) {
        fprintf(fp, "%s %s %s %d ", p[k].name, p[k].color, p[k].size, p[k].amount); //pants.txtだ橾縑 p[0]~p[99] 掘褻羹 盪濰
        fputc('\n', fp);
    }
    fclose(fp);

    printf("\n\n\n\t\t\t        檜葷:%s, 儀鼻:%s, 餌檜鍔:%s, 熱榆:%d\n", p[g].name, p[g].color, p[g].size, p[g].amount); //掘褻羹縑 盪濰 腎橫 氈朝雖 �挫�
    printf("\n\t\t\t            薯ヶ 蹺陛陛 諫猿腎歷蝗棲棻.");

    _getch();
}

void save_file_shoes(int i, int c)            // 薯ヶ蹺陛 塽 だ橾 盪濰 л熱
{
    system("cls");
    int g = 0;
    g = 5 * (i - 1) + (c - 1);     //蘊=4(16~20廓) 廓��=4 橾��, g= 5*3+3 = 18 -> 18廓 寡翮縑 盪濰

    FILE* fp = NULL;
    char fname[100] = { 0 };

    printf("\n\n\t\t\t    薯ヶ貲擊 殮溘ж撮蹂:");
    scanf("%s", fname);

    fp = fopen("shoes.txt", "w");     //shoes.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    strcpy(p[g].name, fname);
    printf("\n\t\t\t    儀鼻擊 殮溘ж撮蹂:");
    scanf("%s", &p[g].color);

    printf("\n\t\t\t    餌檜鍔蒂 殮溘ж撮蹂:");
    scanf("%s", &p[g].size);
    printf("\n\t\t\t    熱榆擊 殮溘ж撮蹂:");
    scanf("%d", &p[g].amount);

    for (int k = 0; k < 100; k++) {
        fprintf(fp, "%s %s %s %d ", p[k].name, p[k].color, p[k].size, p[k].amount); //shoes.txtだ橾縑 p[0]~p[99] 掘褻羹 盪濰
        fputc('\n', fp);
    }
    fclose(fp);

    printf("\n\n\n\t\t\t        檜葷:%s, 儀鼻:%s, 餌檜鍔:%s, 熱榆:%d\n", p[g].name, p[g].color, p[g].size, p[g].amount); //掘褻羹縑 盪濰 腎橫 氈朝雖 �挫�
    printf("\n\t\t\t            薯ヶ 蹺陛陛 諫猿腎歷蝗棲棻.");

    _getch();
}

void load_file_hat(void)
{
    int i;
    FILE* fp;
    fp = fopen("hat.txt", "r");     //hat.txt蒂 だ橾 檗晦 賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    for (i = 0; i < 100; i++) {
        fscanf(fp, "%s %s %s %d  ", p[i].name, &p[i].color, &p[i].size, &p[i].amount);  //hat.txt縑 氈朝 薑爾菟擊 掘褻羹縑 盪濰
    }
    fclose(fp);
}

void load_file_clothes(void)
{
    int i;
    FILE* fp;
    fp = fopen("clothes.txt", "r");     //clothes.txt蒂 だ橾 檗晦 賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    for (i = 0; i < 100; i++) {
        fscanf(fp, "%s %s %s %d  ", p[i].name, &p[i].color, &p[i].size, &p[i].amount);  //clothes.txt縑 氈朝 薑爾菟擊 掘褻羹縑 盪濰
    }
    fclose(fp);
}

void load_file_pants(void)
{
    int i;
    FILE* fp;
    fp = fopen("pants.txt", "r");     //pants.txt蒂 だ橾 檗晦 賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    for (i = 0; i < 100; i++) {
        fscanf(fp, "%s %s %s %d  ", p[i].name, &p[i].color, &p[i].size, &p[i].amount);  //pants.txt縑 氈朝 薑爾菟擊 掘褻羹縑 盪濰
    }
    fclose(fp);
}

void load_file_shoes(void)
{
    int i;
    FILE* fp;
    fp = fopen("shoes.txt", "r");     //shoes.txt蒂 だ橾 檗晦 賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    for (i = 0; i < 100; i++) {
        fscanf(fp, "%s %s %s %d  ", p[i].name, &p[i].color, &p[i].size, &p[i].amount);  //shoes.txt縑 氈朝 薑爾菟擊 掘褻羹縑 盪濰
    }
    fclose(fp);
}

void del_hat(void)              // 薯ヶ 餉薯 л熱
{
    int c, i, g = 0;
    int m = 0;
    //c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    char z[20] = { 0 };             //餉薯瞪 薑爾 z縑 盪濰
    char w[20] = { 0 };             //餉薯瞪 薑爾 w縑 盪濰
    char x[20] = { 0 };
    char name12[20] = { '-' };
    char color12[20] = { '-' };//斜傖 蟾晦�倆牉� 檜葷 補幗縑 奢寥檜 儅啖憮 だ橾 頂辨檜 и蘊噶 渡啖颶 斜楚憮 -鳶殮
    char size12[20] = { '-' };
    system("cls");

    c = del_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;
    strcpy(w, p[g].color);
    strcpy(z, p[g].name);
    strcpy(x, p[g].size);
    FILE* fp = NULL;
    fp = fopen("hat.txt", "w");     //hat.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    }
    system("cls");
    printf("\n\t\t\t            %d蘊 (擊)蒂 餉薯ж啊蝗棲棻....\n", c);
    strcpy(p[g].name, name12);
    strcpy(p[g].color, color12);
    strcpy(p[g].size, size12);
    p[g].amount = 0;

    for (int k = 0; k < 100; k++) {   //蹺陛
        fprintf(fp, " %s %s %s %d ", p[k].name, p[k].color, p[k].size, p[k].amount);
    }
    fclose(fp);

    printf("\n\t\t\t            檜葷:%s......餉薯 諫猿", z, p[g].name);
    printf("\n\t\t\t            儀鼻:%s.......餉薯諫猿", w, p[g].color);
    printf("\n\t\t\t            餌檜鍔:%d......餉薯諫猿", x, p[g].size);
    printf("\n\t\t\t            熱榆:%d.......餉薯諫猿", m, p[g].amount);
    printf("\n\t\t\t            蘊:%d,廓��:%d, 檜葷:%s, color:%s, size:%s, amount:%d", c, i, p[g].name, p[g].color, p[g].size, p[g].amount);
    printf("\n\t\t\t            .....餉薯陛 諫猿腎歷蝗棲棻!!!");
    _getch();
}


void del_pants(void)              // 薯ヶ 餉薯 л熱
{
    int c, i, g = 0;
    int m = 0;
    //c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    char z[20] = { 0 };             //餉薯瞪 薑爾 z縑 盪濰
    char w[20] = { 0 };             //餉薯瞪 薑爾 w縑 盪濰
    char x[20] = { 0 };
    char name12[20] = { '-' };
    char color12[20] = { '-' };//斜傖 蟾晦�倆牉� 檜葷 補幗縑 奢寥檜 儅啖憮 だ橾 頂辨檜 и蘊噶 渡啖颶 斜楚憮 -鳶殮
    char size12[20] = { '-' };
    system("cls");

    c = del_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;
    strcpy(w, p[g].color);
    strcpy(z, p[g].name);
    strcpy(x, p[g].size);
    FILE* fp = NULL;
    fp = fopen("pants.txt", "w");     //pants.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    }
    system("cls");
    printf("\n\t\t\t            %d蘊 (擊)蒂 餉薯ж啊蝗棲棻....\n", c);
    strcpy(p[g].name, name12);
    strcpy(p[g].color, color12);
    strcpy(p[g].size, size12);
    p[g].amount = 0;

    for (int k = 0; k < 100; k++) {   //蹺陛
        fprintf(fp, " %s %s %s %d ", p[k].name, p[k].color, p[k].size, p[k].amount);
    }
    fclose(fp);

    printf("\n\t\t\t            檜葷:%s......餉薯 諫猿", z, p[g].name);
    printf("\n\t\t\t            儀鼻:%s.......餉薯諫猿", w, p[g].color);
    printf("\n\t\t\t            餌檜鍔:%d......餉薯諫猿", x, p[g].size);
    printf("\n\t\t\t            熱榆:%d.......餉薯諫猿", m, p[g].amount);
    printf("\n\t\t\t            蘊:%d,廓��:%d, 檜葷:%s, color:%s, size:%s, amount:%d", c, i, p[g].name, p[g].color, p[g].size, p[g].amount);
    printf("\n\t\t\t            .....餉薯陛 諫猿腎歷蝗棲棻!!!");
    _getch();
}

void del_clothes(void)              // 薯ヶ 餉薯 л熱
{
    int c, i, g = 0;
    int m = 0;
    //c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    char z[20] = { 0 };             //餉薯瞪 薑爾 z縑 盪濰
    char w[20] = { 0 };             //餉薯瞪 薑爾 w縑 盪濰
    char x[20] = { 0 };
    char name12[20] = { '-' };
    char color12[20] = { '-' };//斜傖 蟾晦�倆牉� 檜葷 補幗縑 奢寥檜 儅啖憮 だ橾 頂辨檜 и蘊噶 渡啖颶 斜楚憮 -鳶殮
    char size12[20] = { '-' };
    system("cls");

    c = del_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;
    strcpy(w, p[g].color);
    strcpy(z, p[g].name);
    strcpy(x, p[g].size);
    FILE* fp = NULL;
    fp = fopen("clothes.txt", "w");     //clothes.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    }
    system("cls");
    printf("\n\t\t\t            %d蘊 (擊)蒂 餉薯ж啊蝗棲棻....\n", c);
    strcpy(p[g].name, name12);
    strcpy(p[g].color, color12);
    strcpy(p[g].size, size12);
    p[g].amount = 0;

    for (int k = 0; k < 100; k++) {   //蹺陛
        fprintf(fp, " %s %s %s %d", p[k].name, p[k].color, p[k].size, p[k].amount);
    }
    fclose(fp);

    printf("\n\t\t\t            檜葷:%s......餉薯 諫猿", z, p[g].name);
    printf("\n\t\t\t            儀鼻:%s.......餉薯諫猿", w, p[g].color);
    printf("\n\t\t\t            餌檜鍔:%d......餉薯諫猿", x, p[g].size);
    printf("\n\t\t\t            熱榆:%d.......餉薯諫猿", m, p[g].amount);
    printf("\n\t\t\t            蘊:%d,廓��:%d, 檜葷:%s, color:%s, size:%s, amount:%d", c, i, p[g].name, p[g].color, p[g].size, p[g].amount);
    printf("\n\t\t\t            .....餉薯陛 諫猿腎歷蝗棲棻!!!");
    _getch();
}

void del_shoes(void)              // 薯ヶ 餉薯 л熱
{
    int c, i, g = 0;
    int m = 0;
    //c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    char z[20] = { 0 };             //餉薯瞪 薑爾 z縑 盪濰
    char w[20] = { 0 };             //餉薯瞪 薑爾 w縑 盪濰
    char x[20] = { 0 };
    char name12[20] = { '-' };
    char color12[20] = { '-' };//斜傖 蟾晦�倆牉� 檜葷 補幗縑 奢寥檜 儅啖憮 だ橾 頂辨檜 и蘊噶 渡啖颶 斜楚憮 -鳶殮
    char size12[20] = { '-' };
    system("cls");

    c = del_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;
    strcpy(w, p[g].color);
    strcpy(z, p[g].name);
    strcpy(x, p[g].size);
    FILE* fp = NULL;
    fp = fopen("shoes.txt", "w");     //shoes.txt 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");

    }
    system("cls");
    printf("\n\t\t\t            %d蘊 (擊)蒂 餉薯ж啊蝗棲棻....\n", c);
    strcpy(p[g].name, name12);
    strcpy(p[g].color, color12);
    strcpy(p[g].size, size12);
    p[g].amount = 0;

    for (int k = 0; k < 100; k++) {   //蹺陛
        fprintf(fp, " %s %s %s %d", p[k].name, p[k].color, p[k].size, p[k].amount);
    }
    fclose(fp);

    printf("\n\t\t\t            檜葷:%s......餉薯 諫猿", z, p[g].name);
    printf("\n\t\t\t            儀鼻:%s.......餉薯諫猿", w, p[g].color);
    printf("\n\t\t\t            餌檜鍔:%d......餉薯諫猿", x, p[g].size);
    printf("\n\t\t\t            熱榆:%d.......餉薯諫猿", m, p[g].amount);
    printf("\n\t\t\t            蘊:%d,廓��:%d, 檜葷:%s, color:%s, size:%s, amount:%d", c, i, p[g].name, p[g].color, p[g].size, p[g].amount);
    printf("\n\t\t\t            .....餉薯陛 諫猿腎歷蝗棲棻!!!");
    _getch();
}

void add_hat(void)              //殮堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int aaa; //add偃熱

    system("cls");

    c = add_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;

    FILE* fp = NULL;
    fp = fopen("hat.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 殮堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠殮堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &aaa);
    p[g].amount += aaa;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       殮堅 瞪// 蘊:%d 偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       殮堅 ��// 蘊:%d 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       殮堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void add_clothes(void)              //殮堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int aaa; //aaa偃熱

    system("cls");

    c = add_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;

    FILE* fp = NULL;
    fp = fopen("clothes.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 殮堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠殮堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &aaa);
    p[g].amount += aaa;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       殮堅 瞪// 蘊:%d 偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       殮堅 ��// 蘊:%d 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       殮堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void add_pants(void)              //殮堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int aaa; //aaa偃熱

    system("cls");

    c = add_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;

    FILE* fp = NULL;
    fp = fopen("pants.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 殮堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠殮堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &aaa);
    p[g].amount += aaa;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       殮堅 瞪// 蘊:%d 偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       殮堅 ��// 蘊:%d 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       殮堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void add_shoes(void)              //殮堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int aaa; //aaa偃熱

    system("cls");

    c = add_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);
    m = p[g].amount;

    FILE* fp = NULL;
    fp = fopen("shoes.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 殮堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠殮堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &aaa);
    p[g].amount += aaa;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       殮堅 瞪// 蘊:%d 偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       殮堅 ��// 蘊:%d 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       殮堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void minus_hat(void)                //轎堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int bbb; //bbb偃熱

    system("cls");

    c = minus_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);        //''
    m = p[g].amount;              //''

    FILE* fp = NULL;
    fp = fopen("hat.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 轎堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠轎堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &bbb);
    p[g].amount -= bbb;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       轎堅 瞪// 蘊:%d,偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       轎堅 ��// 蘊:%d, 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       轎堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void minus_clothes(void)                //轎堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int bbb; //bbb偃熱

    system("cls");

    c = minus_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);        //''
    m = p[g].amount;              //''

    FILE* fp = NULL;
    fp = fopen("clothes.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 轎堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠轎堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &bbb);
    p[g].amount -= bbb;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       轎堅 瞪// 蘊:%d,偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       轎堅 ��// 蘊:%d, 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       轎堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void minus_pants(void)                //轎堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int bbb; //bbb偃熱

    system("cls");

    c = minus_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);        //''
    m = p[g].amount;              //''

    FILE* fp = NULL;
    fp = fopen("pants.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 轎堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠轎堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &bbb);
    p[g].amount -= bbb;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       轎堅 瞪// 蘊:%d,偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       轎堅 ��// 蘊:%d, 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       轎堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void minus_shoes(void)                //轎堅 л熱
{
    int  m = 0;
    int c, i, g = 0;//c -> 蘊 廓�� i -> 蘊 寰縑 薯ヶ 廓��
    int bbb; //bbb偃熱

    system("cls");

    c = minus_box();
    i = select_num(c);
    g = 5 * (i - 1) + (c - 1);        //''
    m = p[g].amount;              //''

    FILE* fp = NULL;
    fp = fopen("shoes.txt", "w");     //殮溘脹 檜葷戲煎 だ橾"噙晦"賅萄煎 翱棻.(熱薑 ж晦 嬪п憮)
    if (fp == NULL)
    {
        printf("だ橾 翮晦縑 褒ぬц蝗棲棻.");
    }
    system("cls");
    printf("\n\t\t\t       ≠%d蘊 %s(擊)蒂 轎堅ж啊蝗棲棻....", c, p[g].name);

    printf("\n\t\t\t       ≠轎堅й 偃熱蒂 殮溘ж撮蹂.>>");                                           //偃熱 熱薑
    scanf("%d", &bbb);
    p[g].amount -= bbb;

    for (int k = 0; k < 100; k++) {             //蹺陛
        fprintf(fp, " %d ", p[k].amount);      // 熱薑 �� 薑爾 だ橾縑 盪濰
    }
    fclose(fp);
    printf("\n\n\t\t\t       轎堅 瞪// 蘊:%d,偃熱:%d\n", c, m); //熱薑 瞪 薑爾 轎溘
    printf("\n\t\t\t       轎堅 ��// 蘊:%d, 偃熱:%d\n", c, p[g].amount);//熱薑 �� 薑爾 轎溘
    printf("\n\t\t\t       轎堅蒂 諫猿ц蝗棲棻!!!");

    _getch();
}

void hat_check(void) {

}