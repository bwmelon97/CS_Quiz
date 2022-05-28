### 풀이 과정
1. ghidra를 이용해서 함수 구조 파악
2. scanf를 통해 받은 input과 local 변수 char* 를 비교하는 것을 파악 (문자열 비교는 strcmp를 사용)
3. gdb를 통해 디버그
4. `info files` 명령어를 입력해 .text 메모리 영역 확인
5. `disas 0x0000XXXX, 0x0000XXXX` 을 이용해 어셈블리 코드 확인
6. breakpoint를 strcmp 함수를 call하는 곳에 설정 (`b *주소`)
7. `gdb run` 후, break point에서 `info r`
8. strcmp의 앞에 있는 register 값에 해당하는 메모리 주소 탐색 (`x/bs 주소`)

### 정답
1_c4n_m3sS_w17H_StR1pPpPPPppPeD_b1N4Riez