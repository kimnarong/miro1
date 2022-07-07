#include <stdio.h>

int main(void)

{
	int a = 0, b = 0;  // a와 b는 {a,b} 위치를 나타내는 값 선언 및 초기화
	                   // 초기값  {0,0}


	char miro[9][9] = {
	{'S', 'x', 'x', 'o', 'x', 'x', 'x', 'o', 'x'},
	{'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'x'},
	{'x', 'o', 'x', 'o', 'o', 'o', 'x', 'o', 'x'},
	{'o', 'o', 'o', 'o', 'x', 'o', 'o', 'o', 'o'},
	{'x', 'x', 'x', 'x', 'o', 'o', 'x', 'x', 'x'},
	{'o', 'o', 'o', 'o', 'o', 'x', 'x', 'o', 'o'},
	{'o', 'x', 'o', 'x', 'o', 'o', 'x', 'o', 'x'},
	{'o', 'o', 'o', 'x', 'x', 'o', 'o', 'o', 'x'},
	{'o', 'x', 'o', 'x', 'x', 'x', 'x', 'o', 'F'}
	};   // 9*9 형태의 2차원 배열 선언 

	for (int i = 8; i >= 0; i--) // i는 반복 횟수를 제어하기 위한 변수 
  //★ for (int i = 0; i <= 8; i++) 굳이 거꾸로 해야하나? 출발점을 (0,0)으로 설정하기 위해 거꾸로 설정
	{
		printf("%3c %3c %3c %3c %3c %3c %3c %3c %3c\n\n",  // 왕미로 만들기
			miro[i][0], miro[i][1], miro[i][2], miro[i][3], miro[i][4], miro[i][5],
			miro[i][6], miro[i][7], miro[i][8]);
		//★★★ 반복문(for문)을 사용해서 간단하게 출력해보기
	}   // 미로 그림을 화면에 출력하기 
	char  enter; // 엔터 입력하기 위한 변수 설정 _command

	printf("▶미로게임에 오신걸 환영합니다~!\n");
	printf("▶시작 위치는 ☞ S 입니다\n");
	printf("▶행운을 빕니다\n\n");

	printf("Enter를 누르면 게임이 시작됩니다\n");  // 엔터 만들기 
	scanf("%c", &enter);                           
	if (enter != '\n')                             // 엔터가 아닌 다른 입력을 할 시 바로 게임 종료
	{
		printf("게임이 종료되었습니다");
		return 0;
	
	}                                              //엔터




	while (miro[a][b] != 'F')   //  F일때까지 게임 반복  _while 전체로 묶어주기
	{
	// 전진   8
	// 오른쪽 6
	// 왼쪽   4
	// 뒤로   2

		int move; // 위치를 제어할 변수 선언


		printf("◆어디로 가실 건가요?\n   △     8\n ◁  ▷ 4   6\n   ▽     2 \n");






		scanf("%d", &move);
		printf("현재 위치는 [ %d , %d ] 입니다", a, b);   //★★★ 왜 안나와


	//	while (miro[a][b] != 'F')  //  F일때까지 게임 반복
		//★★★	system("cls"); // 시스템 초기화


		switch (move)
		{
		case 8:


			break;
		case 4:

			break;
		case 6:

			break;
		case 2:

			break;




			/*   (a>8) || (b>8)
			   printf("움직일 수 없습니다")


			   (a<0) || (b<0)
			   printf("움직일 수 없습니다")


			   (a=8) && (b=8)
				   printf("도착입니다!")*/



		}







		// 전진   8
		// 오른쪽 6
		// 왼쪽   4
		// 뒤로   2


	}

	return 0;

}