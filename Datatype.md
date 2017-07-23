# Datatype


|  데이터 타입 | 크기(바이트)  | 최소값  | 최대값  | Input format directive  | Output format directive  |  Suffix |
|---|---|---|---|---|---|---|
| char                | 1   | 0                           |127   | %c  |  %c | 없음. 단, 입력시 single quotation( ' ' )으로 감싸준다.  |
| signed char         | 1   |-128                         |127   |  ? |?   | X  |
| unsigned char       | 1   |0                            |255   |?   |?   |X   |
|signed short         | 2   |-32,768                      |32,767   | %d  | %d  |X  |
|unsigned short       | 2   |0                            |65,535   | %d  | %hd  | X  |
|signed int           | 4   |-2,147,483,648 (10자리)       |2,147,483,647 (10자리)   | %d  | %d  | X |
|unsigned int         | 4   |0                            |4,294,967,295 (10자리)   | %d  |  %u | X  |
|signed long          | 4   |-2,147,483,648 (10자리)       |2,147,483,647 (10자리)   | %ld  | %ld  | l  |
|unsigned long        | 4   |0                            |4,294,967,295 (10자리)   |  %ld(?) | %l  | ul  |
|signed long long     | 8   |-9,233,372,036,854,775,808 (19자리)  |9,233,372,036,854,775,807(19자리)   | %lld(?)  |  %ll | ll  |
|unsigned long long   | 8   |0                            |18,446,744,073,709,551,615(20자리)   | %lld(?)  | %llu  | ull  |
|float|4|?|?|%f|%f|f|
|double|8|?|?|%lf|%f|X|
|long double|8|?|?|%Lf|%Lf|L|


- 
