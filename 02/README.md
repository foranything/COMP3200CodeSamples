# File IO \<fstream>

| 명령어       | 기능           |
| ---------- | ---------     | 
| _ifstream_ | 파일 입력       |
| _ofstream_ | 파일 출력       | 
| _fstream_  | 파일 입력 및 출력 | 

* 읽기 전용

```c++
ifstream fin;
fin.open("h.txt");
```
* 쓰기 전용 (없으면 만듬)
```c++
ofstream fout;
fout.open("h.txt");
```
* 읽기 쓰기 범용
```c++
fstream fs;
fs.open("h.txt");
```
* c언어
```c
FILE *fp;

fp = fopen("h.txt", "r") //읽기 전용
fp = fopen("h.txt", "w+") //쓰기 전용
fp = fopen("h.txt", "r+") // 범용

```