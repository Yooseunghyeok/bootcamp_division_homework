/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int a,b;
    scanf("%d %d",&a,&b);
    if(b ==4||b==6||b==9||b==11)
        printf("30");
    else if (b==2){
        if (((a%4 == 0) && (a % 100 != 0)) || a % 400 == 0){
            printf("29");
        }
        else printf("28");
    }
    else printf("31");
    
    return 0;
}