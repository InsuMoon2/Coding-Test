# [Silver V] 중복 빼고 정렬하기 - 10867 

[문제 링크](https://www.acmicpc.net/problem/10867) 

### 성능 요약

메모리: 2156 KB, 시간: 16 ms

### 분류

정렬

### 문제 설명

<p>N개의 정수가 주어진다. 이때, N개의 정수를 오름차순으로 정렬하는 프로그램을 작성하시오. 같은 정수는 한 번만 출력한다.</p>

### 입력 

 <p>첫째 줄에 수의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다.</p>

### 출력 

 <p>첫째 줄에 수를 오름차순으로 정렬한 결과를 출력한다. 이때, 같은 수는 한 번만 출력한다.</p>

<br> <br>

![image](https://user-images.githubusercontent.com/75931369/232962208-932d7cae-bf2b-44c8-9343-d49d694a4e43.png)

<hr4> set을 사용하면 간단하게 풀 수 있는 문제였다. </hr4>
![image](https://user-images.githubusercontent.com/75931369/232962291-e0fd0d32-7dec-4607-b822-bfe6929c161f.png)


<hr4> 그런데 vector를 사용해서 unique, erase를 사용한 후에 정렬을 해서 풀어본 것과 시간을 비교해보았는데, 시간은 똑같이 나왔는데 vector로 푼게 메모리를 더 많이 잡아먹었었다. </hr4>
<>
![image](https://user-images.githubusercontent.com/75931369/232962509-0392692e-248c-4866-86c3-3828e519a823.png)
