#include <stdio.h>

int main() {
    //ȷ������
    int count = 0;
    int person[50]= {};
    int killNumber = 0;//�������
    int deathFlag = 0;//��������
    int deathNumber = 0;//
    int number = 0;//�������

    printf("����������������");
    scanf("%d",&count);
    //���̸�ÿ���˱��
    for (int i = 0; i < count; ++i) {
        person[i] = i+1;
    }
    //ȷ�����ֵı��
    printf("��������ֱ�ţ�");
    scanf("%d",&killNumber);
    //��ʼ��Ϸ
    /*
     * ��α�ʾ���� ʹ��-1����ʾ����״̬
     * ʲô�����ֹͣѭ�������������=1 ���� ��������=count-1 ----����Ҫһ��ֵ����¼��������
     * ʹ��һ�������������ֵ -1������ʾĳ��״̬
     */
    for (int i = 0; i < count; ++i) {
        //�ж�һ�����Ƿ����
        if (person[i]!=1){
            //��Ҫ����
            number++;
            //����Ƿ񱨵��������
            if (number==killNumber){
                //ɱ��֮ǰ�������˵ı��
                printf("%d",person[i]);
                //ɱ�������
                person[i]=-1;
                //����
                number=0;
                //������������
                deathNumber++;
                //�ж���������
                if (deathNumber==count){
                    break;
                }
                //�ж��Ƿ��ߵ����һ����
                if (i==count-1){
                    //�ص���һ��
                    i=-1;
                }
            }
        }

    }

    return 0;
}
