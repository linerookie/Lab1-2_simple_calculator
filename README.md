# ***opensource***
***
 >opensource
>>내가 직접 코딩한~ 하노이 소스코드!

```C
#include<stdio.h>

int cnt = 0;

void hanoi_tower(int n, char from, char temp, char to)
{
        if (n==1)
        {
                printf("(%d) %d원판이 %c 에서 %c로 이동\n",++cnt, n, from, to);
        }
        else{
                hanoi_tower(n-1, from, to, temp);
                printf("(%d) %d원판이 %c에서 %c로 이동\n", ++cnt, n, from, to);
                hanoi_tower(n-1, temp, from, to);

        }
}

int main(void)
{
        hanoi_tower(5,'A','B','C');
        return 0;
}
```

[구글링크](https://www.google.co.kr/)


[참고용 하노이 소스코드](https://claris.tistory.com/24)
