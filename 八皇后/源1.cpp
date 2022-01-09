#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
int a[1000], b[1000], c[1000], d[1000], n, s;
//a存行
//b存列
//c存左下到右上的对角线（行+列的和相同）
//d存右下到左上的对角线（行-列的差相同）
//清零数组
void print() {
    int i; s++;
    if (s <= 3) {
        for (i = 1; i <= n; i++)
        {
            printf("%d", a[i] );
        }
        printf("\n");
        //cout << a[i] << " ";
        //cout << endl;
    }
}
int search(int i) {
    int j;
    for (j = 1; j <= n; j++)
        if (b[j] == 0 && c[i + j] == 0 && d[i - j + n] == 0) {//判断
            a[i] = j;//写进去（第i行第j个） 
            b[j] = 1;//占行 
            c[i + j] = 1; d[i - j + n] = 1;//占对角线 
            if (i == n)print();//满足条件输出 
            else search(i + 1);//继续推 
            b[j] = 0; c[i + j] = 0; d[i - j + n] = 0;//回溯
        }
    return 0;
}
int main()
{
    scanf("%d", &n);
    //cin >> n;
    search(1);
    printf("%d", s );
    printf("\n");
    //GIT更改测试
    // 分支修改V1
    // cout << s << endl;
    return 0;
}