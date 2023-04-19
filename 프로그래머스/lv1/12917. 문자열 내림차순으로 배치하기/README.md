# [level 1] 문자열 내림차순으로 배치하기 - 12917 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/12917) 

### 성능 요약

메모리: 3.63 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 연습문제

### 채점결과

Empty

### 문제 설명

<p>문자열 s에 나타나는 문자를 큰것부터 작은 순으로 정렬해 새로운 문자열을 리턴하는 함수, solution을 완성해주세요.<br>
s는 영문 대소문자로만 구성되어 있으며, 대문자는 소문자보다 작은 것으로 간주합니다.</p>

<h5>제한 사항</h5>

<ul>
<li>str은 길이 1 이상인 문자열입니다.</li>
</ul>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>s</th>
<th>return</th>
</tr>
</thead>
        <tbody><tr>
<td>"Zbcdefg"</td>
<td>"gfedcbZ"</td>
</tr>
</tbody>
      </table>
      
      sort 정렬 알고리즘을 사용해서 내림차순으로 정렬하면 쉽게 풀 수 있는 문제였다.
      다른사람들의 풀이를 보니 내림차순으로 greater 임시 객체를 만들어서 정렬하는 방법이 아니라,
      sort(s.rbegin(),s.rend()); 를 사용해서 컨테이너를 역방향으로 반복하면서 정렬하는 방법도 있었다.
      

> 출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges
