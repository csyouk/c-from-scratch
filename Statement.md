# Statement

- 문장은 함수를 구성하는 기본단위.
- 문장은 컴퓨터에게 내리는 **작업 명령**의 단위. 


## Declaration ( declare variable, function, macro, compound )

### sequential operator ( , )

- **,** 또한 연산자이다. comma 연산자, sequential evaluation 연산자 라고도 함.
- 수식은 , 을 만나면, 계산을 완료한 후, 다음 수식 계산으로 넘어간다.
- 여러 수식을 하나로 묶어준다. 특히 ()로 묶이면 복합식 역할을 한다.
- **(..., ..., ...,)** 문장은 **{...; ...; ...;}** 와 같은 역할을 한다.

## Expression ( assign , calculate )
- 변수식(l-value는 변수(container), r-value는 식 혹은 상수)
- 상수식(상수들로만 구성된 식)

## Blank ( NULL, ;)
- NUL 문자
- NULL 포인터, 
- ; 문장(공백식) 

## Judgement ( if, else, else if, switch~case )
- 다음과 같은 표현은 유효하다. 
- 괄호 안의 선언문이 처리된 후, a의 값이 평가된다. 
```cpp if(a=1){...} ``` 


## Compound ( {...} )
- 여러가지 문장들로 구성된 문장의 집합.
- 

## Loop ( for, while, do~while)
## Branch ( return, break, continue, goto )
- 분기문을 if, else로 착각하기 쉽다. 
- return이 분기문으로 취급되는 이유는?
- return; 호출한 곳으로 복귀만 하는 리턴문. 
- return (expression); 이런 식의 표현 또한 가능하다.
이 경우, return의 결과물로 식이 반환된다. 