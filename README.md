# C From Scratch
- c의 기본 문법들을 실습해본다.

## Special Characters
- \n : new line (goto next line and move first column)
- \r : carraige return (goto first column of line)
- \t : tab (same as space 8)
- \b : back 
- \a : alarm 
- \0 : null (end of string)

- 문자열에서 '\' 표시는 special character의 시작을 알리는 기호이다. 
- special character로 cursor의 위치만 제어한다. 

## Represent numeral system(진법 표현하기)
- 10진법의 경우는 일반 정수형으로 쓰면된다.
- 8진법의 경우는 10진법 표기법 앞에 0을 붙인다.
- 16진법의 경우는 숫자 앞에 0x를 붙인다.

예를 들자면 다음과 같다.  
- 0101 ==> 8^2 + 1 = 64 + 1 = 65
- 8진법 0101을 10진법으로 고쳤다. 

- 0x1A ==> 1*16^1 + 10 = 26
- 16진법 수를 10진법 수로 바꾸었다. 

## Constans
- 문자열(string)은 double quotation mark(" ") 로 감싼다.
- 문자(char)는 single quotation mark(' ')로 감싼다.

## Format directive (Output)
- printf 함수를 사용하여 출력할 때 사용하는 문자 포맷 지시자들이다. 
- %d : decimal value
- %c : single character
- %s : string(character array)
- %u : unsigned int
- %lu : unsinged long int
- %llu : unsigned long long int
- %f : float or double
- %.3f : print number of float or double decimal with precision 3.
- %10.2f : print 10 character with precision 2 (include .)
- %010.2f : print 10 character with precision 2 (include .)
- %p : print value of pointer p
- %x : print value with format hexadecimal
- %o : print value with format octal decimal

- example
- printf("%10.2f \n", 123.4567); // [    123.45]
- printf("%010.2f \n, 123.4567); // [0000123.45]

- \# option means numeral system
- example
- printf("%d, %#x, %#o", 100, 100, 100); // printed as 100, 0x64, 0144

## ASCII Code 
- ascii code는 7비트를 통해 코드표의 모든 문자를 표현할 수 있다. 컴퓨터 초기에 사용했던 방식이다.
- ASCII Code에 속한 문자 하나는 1바이트를 차지한다. (여분의 1비트는 parity bit이다.)
- 현대 컴퓨팅 시스템은 UTF-X 방식을 주로 사용한다. 


## Data Type
- Integer Type : char(1B), short int(2B), long int(4B), long long int(8B)
- Real number Type : float(4B), long double(8B), 

## Data range for integer
- int(4B) : -2,147,483,648 ~ 2,147,483,647 (10자리 표현)
- short int(2B) : -32,768 ~ 32,767 (5자리 표현)
- signed long int(4B) : -2,147,483,648 ~ 2,147,483,647 (10자리 표현)
- unsigned long int(4B) : 0 ~ 4,294,967,295 (10자리 표현)
- signed long long int(8B) : -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 (19자리 표현)
- unsigned long long int(8B) : 0 ~ 18,446,744,073,709,551,615 (20자리 표현)

## Data type suffix
- unsigned int : 100u, 100U
- singed long int : 100l, 100L
- unsigned long int : 100ul, 100UL
- long long int : 100ll
- unsigned long long int : 100ull, 100ULL
- char, short는 별도 타입을 의미하는 suffix가 없다. 

- float : 3.5f, 3.5F
- double : 3.5
- long double : 3.5l, 3.5L

## Convention
- 다양한 컨벤션이 있으므로, 조직의 규칙을 따른다. 

## Input(scanf, scanf_s)

## Operators
- & : address of
- \* : value of address









