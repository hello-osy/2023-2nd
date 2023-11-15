#include <stdio.h>
#include <stdlib.h>

int main(void){
    struct NODE *head = malloc(sizeof(struct NODE));
    head->next=NULL;

    //식을 입력받음.
    //소수가 들어오면 정수로 변환(소수점 위치를 변경)
    //중위 표기법-> 후위 표기법
    //스택 사용해서 계산
    //소수점 보정
    //계산 결과 프린트

    //다시 입력 받기
    //...
}

//연결리스트 관련 코드
struct NODE{
    struct NODE *next;
    int data;
};

void addNext(struct NODE *target, int data){
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;
    newNode->data = data;

    target->next = newNode;
}

void removeNext(struct NODE *target){
    struct NODE *removeNode = target->next;
    target->next = removeNode->next;

    free(removeNode);
}

//입력 받는 함수
void input_read(void){
    printf("식을 입력하세요. 계산해드립니다.");
    char *expression;
    scanf("%s", &expression);
}

//중위 표기법 -> 후위 표기법 변환 함수

//소수를 정수로 바꿔주는 함수

//덧셈

//뺄셈

//곱셈

//나눗셈

//계산 결과를 소수로 보정해주는 함수

//식은 문자열로 오는데, 그 안에 잘못 입력된 애도 있고, 공백 문자도 있고, 연산자, 피연산자가 있다. 예외처리할지, 제거할 건 제거할지 결정하고 프로그래밍하자.

//ascii_to_num / num_to_ascii 함수를 구현한 후에 사용해보자.