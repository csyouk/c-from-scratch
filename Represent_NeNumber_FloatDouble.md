# How to represent variety of numbers in a limited bits.
- 기본 적으로 아래 방법은 10진수 <====> 2진수로 바꿀 때의 경우를 생각한다.

## Represent negative integer using "Signed Magnitude".
- 부호가 있는 크기(Signed Magnitude) 방식은 MSB가 부호를 결정짓는 역할을 한다.
- 예를 들어 8비트가 표현할 수 있는 숫자의 가지수는 256개이다.
- 이 중 MSB(Most Significant Bit)를 부호로 사용 한다면?
  - 0 이면 양수, / 1 이면 음수
  - 이 경우 숫자의 표현 범위는 -127 ~ 127 까지 이다.
  - +0(0000 0000) 과  -0(1000 0000) 이 생긴다.
  - 1개의 여분이 생긴다.

## Represent negative integer using "1's complement".
- 1의 보수를 활용하는 방법.
- Signed Magnitude방법과 유사하지만, 회로적으로 구현하기가 더 쉽다고 한다.
- MSB 의 값이..
  - 0 일 경우 => 양수로 계산.
  - 1 일 경우 => 부호를 포함하여 1의 보수를 계산하여 구한다.
  - 0010 1111 인 경우 ==> 2^5 + 2^3 + 2^2 + 2^1 + 2^0 = 47으로 계산.
  - 1011 0001 인 경우 ==> 0100 1110 (1의 보수) ==> 2^6 + 2^3 + 2^2 + 2^1 = 78 ==> -78 (초기에 MSB가 1이었므로 부호를 붙임.)
  - 이 경우도 마찬가지로 +0, -0, 처럼 여분이 발생한다.

## Represent negative integer using "2's complement".
- 2의 보수를 활용하는 방법.
- MSB의 값이...
  - 0 일 경우 => 양수로 계산한다.
  - 1 일 경우 => 해당 비트의 1의 보수를 구한 후, +1 을 더한다.
  - 0010 1111 인 경우 ==> 2^5 + 2^3 + 2^2 + 2^1 + 2^0 = 47으로 계산.
  - 1011 0001 인 경우 ==> 0100 1110 (1의 보수) ==> 0100 1111 ==> 2^6 + 2^3 + 2^2 + 2^1 + 2^0 = 79 ==> -79 (초기에 MSB가 1이었므로 부호를 붙임.)
  - 이 경우 여분이 생기지 않는다. 모든 값에 대해서 표현을 할 수 있다.


--------------------------------
**소수점 표현 방식에는 크게 2가지 있다. 고정 소수점 방식 / 부동 소수점 방식.**

**이 문서에서는 부동소수점 방식을 중점적으로 다룬다.**

**부동 소수점 방식을 표현하는 방식중에서 IEEE 754방식을 다룬다.***

타입에 따른 메모리 배정방식을 살펴보면 다음과 같다.

| Type | Sign bit | exponent bit | mantissa bits | precision |
|------|----------|--------------|---------------|-----------|
|float | 1        | 8            | 23            | 6 ~ 7     |
|double| 1        | 11           | 52            | 15 ~ 16   |

## How to represent float number.
- 비트로 표현해야 할 소수가 3.625가 있다고 해보자.
  1. 먼저 이 수를 이진수로 표현한다. (11.101)
    - 정수부는 11
    - 소수부는 0.101 이 된다.
      - 0.625 * 2 = 1.25  ---- 1 &nbsp;&nbsp; |
      - 0.25 * 2  = 0.5 ------ 0 &nbsp;&nbsp; |
      - 0.5 * 2 = 1.0 -------- 1 &nbsp; ∨
    - 실수 3.625는 11.101로 표현된다.
  2. 지수형태로 위의 수를 표현한다.
    - 1.1101 * (2^1)
  3. 부호 비트 정하기
    - 먼저 부호를 결정하자면, 양의 실수이니, **0** 이다.
  4. 지수부 비트 정하기
    - 다음 지수부의 비트를 정해보면 float의 경우 bias값 127을 더한다. (이 값을 excess-127이라 한다.)
    - 그 결과 127 + 1 = 128 ==> 1000 0000 이 된다.
  5. 가수부 비트 정하기
    - 1.1101 에서 1을 뺀 나머지 부분 0.1101 에 나머지 비트는 0으로 채운다.
    - 다음과 같이 된다.
    - 110 1000 0000 0000 0000 0000
  6. 합치기.
    - 부호와 지수부, 가수부를 전부 구하였으니 소수 3.625는 다음과 같이 된다.
    - 0100 0000 0110 1000 0000 0000 0000 0000
  7. 16진수로 표현해보기.
    - 0x40670000

## How to represent double number.
- 비트로 표현해야 할 소수가 3.625가 있다고 해보자.
  1. 먼저 이 수를 이진수로 표현한다. (11.101)
    - 정수부는 11
    - 소수부는 0.101 이 된다.
      - 0.625 * 2 = 1.25  ---- 1 &nbsp;&nbsp; |
      - 0.25 * 2  = 0.5 ------ 0 &nbsp;&nbsp; |
      - 0.5 * 2 = 1.0 -------- 1 &nbsp; ∨
    - 실수 3.625는 11.101로 표현된다.
  2. 지수형태로 위의 수를 표현한다.
    - 1.1101 * (2^(-1))
  3. 부호 비트 정하기
    - 먼저 부호를 결정하자면, 양의 실수이니, **0** 이다.
  4. 지수부 비트 정하기
    - 다음 지수부의 비트를 정해보면 float의 경우 bias값 1023을 더한다. (이 값을 excess-1023이라 한다.)
    - 그 결과 1023 + 1 = 1024 ==> 100 0000 0000 이 된다.
  5. 가수부 비트 정하기
    - 1.1101 에서 1을 뺀 나머지 부분 0.1101 에 나머지 비트는 0으로 채운다.
    - 다음과 같이 된다.
    - 1101 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
  6. 합치기.
    - 부호와 지수부, 가수부를 전부 구하였으니 소수 3.625는 다음과 같이 된다.
    - 0100 0000 0000 1101 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
  7. 16진수로 나타내보기.
    - 0x400D000000000000
