#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
int a[1000], b[1000], c[1000], d[1000], n, s;
//a����
//b����
//c�����µ����ϵĶԽ��ߣ���+�еĺ���ͬ��
//d�����µ����ϵĶԽ��ߣ���-�еĲ���ͬ��
//��������
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
        if (b[j] == 0 && c[i + j] == 0 && d[i - j + n] == 0) {//�ж�
            a[i] = j;//д��ȥ����i�е�j���� 
            b[j] = 1;//ռ�� 
            c[i + j] = 1; d[i - j + n] = 1;//ռ�Խ��� 
            if (i == n)print();//����������� 
            else search(i + 1);//������ 
            b[j] = 0; c[i + j] = 0; d[i - j + n] = 0;//����
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
    //GIT���Ĳ���
    // ��֧�޸�V1
    // cout << s << endl;
    return 0;
}