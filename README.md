# ***opensource***
***
 >**선택장애가 있는 사람들을 위한 투표 시스템**
 
 >c언어 투표프로그램 간단한 예제
>>

```#include<stdio.h>
#define SIZE 11

int main(void)
{
 int freq[SIZE]={0};
 int i, cand;

 while(1)
 {
  printf("몇번후보를 선택하시겠습니까?(종료-1): ");
  scanf("%d",&cand);
  if(cand<=0)break;
  freq[cand]++;
 }
 printf("값 득표결과\n");
 for(i=1;i<SIZE;i++)
  printf("%3d    %3d\n",i,freq[i]);
 return 0;
}
```

[구글링크](https://www.google.co.kr/)


[소스코드 출처](https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=gydlf822&logNo=90156682104)
