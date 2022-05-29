### 풀이 과정
1. ghidra로 파일 분석
2. DATA영역의 주소를 받는 변수와, 해당 주소의 char 값을 받는 변수가 있음을 확인
3. while문이 DATA 영역의 문자열을 처음부터 끝까지 char 값을 1줄이는 것을 확인
4. `objdump -s -j .data 3` 으로 데이터 영역 텍스트를 typora로 긇어오고,
    이를 아스키 코드 표를 참고해 1 전의 값을 적음

### 정답
I_4m_a_h4Nds0me_R3V3rS3r