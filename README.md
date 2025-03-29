# CodingTest

[BaekjoonHub](https://github.com/BaekjoonHub/BaekjoonHub)를 통해 자동으로 업로드되는 코딩 테스트 풀이 저장소입니다. 

`C11`을 사용하여 풀이하며, 사용 가능한 함수는 직접 구현으로 성능을 따라가기 어려운 것들로 제한하고 있습니다.

해당 함수들의 내부 동작 원리나 성능상의 이유에 대해서도 정리해 나갈 예정입니다.

---

### 🔥 메모리 계열 (Memory)
- `memcpy(void* dest, const void* src, size_t n)` → dest에 src로부터 n바이트 복사
- `memset(void* s, int c, size_t n)` → s 메모리를 c 값으로 n바이트 채움
- `memmove(void* dest, const void* src, size_t n)` → 겹쳐도 안전하게 복사
- `memcmp(const void* s1, const void* s2, size_t n)` → 두 메모리 블록 비교
- `bzero(void* s, size_t n)` → s를 0으로 n바이트 채움 (POSIX, memset으로 대체 가능)

### 🧵 문자열 계열 (String)
- `strlen(const char* s)` → 널 문자 전까지 길이 반환
- `strcmp(const char* s1, const char* s2)` → 문자열 비교
- `strncmp(const char* s1, const char* s2, size_t n)` → 최대 n만큼 비교
- `strcpy(char* dest, const char* src)` → 문자열 복사
- `strncpy(char* dest, const char* src, size_t n)` → 최대 n까지 복사
- `strchr(const char* s, int c)` → 문자 c가 처음 나오는 위치 반환
- `strrchr(const char* s, int c)` → 문자 c가 마지막에 나오는 위치 반환
- `strstr(const char* haystack, const char* needle)` → 부분 문자열 검색
- `strcspn(const char* s, const char* reject)` → 일치하지 않는 시작 위치 길이
- `strpbrk(const char* s, const char* accept)` → accept 문자 중 하나라도 처음 나오는 위치
- `strspn(const char* s, const char* accept)` → accept 문자만 연속되는 길이
- `strcat(char* dest, const char* src)` → 문자열 덧붙이기
- `strncat(char* dest, const char* src, size_t n)` → 최대 n만큼 덧붙이기
- `strtok(char* str, const char* delim)` → 구분자로 문자열 분리 (내부 상태 유지)
- `strerror(int errnum)` → 에러 번호에 대응하는 문자열 반환

### 📐 수학 계열 (Math / libm)
- `sqrt(double x)` → 제곱근
- `pow(double x, double y)` → x^y 계산
- `fabs(double x)` → 절댓값
- `exp(double x)` → e^x 계산
- `log(double x)` → 자연로그
- `log2(double x)` → 밑이 2인 로그
- `log10(double x)` → 밑이 10인 로그
- `expm1(double x)` → e^x - 1 계산
- `sin(double x)`, `cos(double x)`, `tan(double x)` → 삼각 함수
- `asin(double x)`, `acos(double x)`, `atan(double x)` → 역삼각 함수
- `atan2(double y, double x)` → 방향 계산용 탄젠트 역함수
- `sinh(double x)`, `cosh(double x)`, `tanh(double x)` → 쌍곡선 함수
- `ceil(double x)` → 올림
- `floor(double x)` → 내림
- `round(double x)` → 반올림
- `trunc(double x)` → 소수점 이하 버림
- `fmod(double x, double y)` → 나머지
- `modf(double x, double* intpart)` → 정수/소수 분리
- `hypot(double x, double y)` → √(x² + y²)
- `ldexp(double x, int exp)` → x × 2^exp
- `frexp(double x, int* exp)` → x = mantissa × 2^exp 로 분해

### 🧠 동적 메모리 관리 (Heap Management)
- `malloc(size_t size)` → size 바이트 동적 할당
- `calloc(size_t nmemb, size_t size)` → 0으로 초기화된 메모리 할당
- `realloc(void* ptr, size_t size)` → 크기 조정된 새 메모리 반환
- `free(void* ptr)` → 메모리 해제

### 🔍 검색 / 정렬
- `qsort(void* base, size_t n, size_t size, int (*cmp)(const void*, const void*))` → 일반화된 정렬
- `bsearch(const void* key, const void* base, size_t n, size_t size, int (*cmp))` → 이진 탐색

### 💬 입출력 (I/O)
- `printf(const char* format, ...)` → 형식화된 출력
- `scanf(const char* format, ...)` → 형식화된 입력
- `fgets(char* s, int size, FILE* stream)` → 문자열 입력
- `fputs(const char* s, FILE* stream)` → 문자열 출력
- `getc(FILE* stream)` → 문자 입력
- `putc(int c, FILE* stream)` → 문자 출력
- `fread(void* ptr, size_t size, size_t nmemb, FILE* stream)` → 블록 입력
- `fwrite(const void* ptr, size_t size, size_t nmemb, FILE* stream)` → 블록 출력

### ⏱ 시스템 / 시간 / 에러
- `time(time_t* t)` → 현재 시간(초)
- `clock(void)` → 프로세스 실행 시간 반환
- `clock_gettime(clockid_t clk_id, struct timespec* tp)` → 고해상도 타이머
- `gettimeofday(struct timeval* tv, struct timezone* tz)` → 마이크로초 단위 시간
- `strerror(int errnum)` → 에러 메시지 문자열 반환
