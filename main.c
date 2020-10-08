#include <stdio.h>

int main() {
    //确定人数
    int count = 0;
    int person[50]= {};
    int killNumber = 0;//死亡编号
    int deathFlag = 0;//代表死亡
    int deathNumber = 0;//
    int number = 0;//报数编号

    printf("请输入参与的人数：");
    scanf("%d",&count);
    //立刻给每个人编号
    for (int i = 0; i < count; ++i) {
        person[i] = i+1;
    }
    //确定出局的编号
    printf("请输入出局编号：");
    scanf("%d",&killNumber);
    //开始游戏
    /*
     * 如何表示死亡 使用-1来表示死亡状态
     * 什么情况下停止循环：当存活人数=1 或者 死亡人数=count-1 ----》需要一个值来记录死亡人数
     * 使用一个东西（特殊的值 -1）来表示某种状态
     */
    for (int i = 0; i < count; ++i) {
        //判断一个人是否活着
        if (person[i]!=1){
            //需要报数
            number++;
            //检查是否报到死亡编号
            if (number==killNumber){
                //杀掉之前输出这个人的编号
                printf("%d",person[i]);
                //杀掉这个人
                person[i]=-1;
                //重置
                number=0;
                //死亡个数增加
                deathNumber++;
                //判断死亡人数
                if (deathNumber==count){
                    break;
                }
                //判断是否走到最后一个了
                if (i==count-1){
                    //回到第一个
                    i=-1;
                }
            }
        }

    }

    return 0;
}
