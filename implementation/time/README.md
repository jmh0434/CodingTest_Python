# 시각

정수 N이 입력되면 00시 00분 00초부터 N시 59분 59초까지의 모든 시각 중에서 3이 하나라도 포함되는 모든 경우의 수를 구하는 프로그램

     ex) 1을 입력했을 때 

    → 00시 00분 03초, 00시 13분 30초는 포함

    → 02시부터는 X

하루는 86,400초

단순히 시각을 1씩 증가시키면서 3이 하나라도 포함되어 있는지 확인

전체 시, 분, 초에 대한 경우는 24 X 60 X 60이며 3중 반복문 이용

매 시각을 문자열로 바꾼 다음 문자열에 '3'이 포함됐는지 검사

00시 00분 00초부터 23시 59분 59초까지 1초씩 늘리며 시, 분, 초를 문자열 자료형으로 변환하여 합친다.

  - ex) 03시 20분 35초일 때 이를 '032035'로 만들어서 '3'이 '032035'에 포함되어 있는지 체크