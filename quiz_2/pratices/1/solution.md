### 풀이 과정
1. `objdump -s -j .data 1` 을 통해 데이터 영역 확인
2. ghidra로 .text 부분을 클릭해 함수 확인
3. scanf를 통해 input을 받는 것을 확인
4. input[index] == DATA영역[index * 2] 확인
5. 길이가 28개 인지를 확인해서 correct flag를 찾는 것을 확인
6. Data 영역의 데이터 가져오고, 짝수 부분만 남기고 홀수 부분 지움.

* 이 때, 수동으로 지울 경우 원본을 따로 복사 붙여놓기 해놓으면 문제 풀 때 실수를 방지할 수 있을 것으로 생각함

### 정답
D0_y0u_l1ke_Kr4bbY_pAt71ez?