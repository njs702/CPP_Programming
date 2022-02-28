#include <stdio.h>
#include "cursor.h"

class RandNum {
private:
	int num;

public:
	RandNum() {
		randomize(); // 랜덤 난수 호출하기 위한 설정
	}

	void Generate() {
		num = random(100) + 1; // 랜덤 난수 생성
	}

	BOOL compare(int input) {
		if (input == num) {
			printf("맞췄습니다!\n");
			return TRUE;
		}
		else if (input > num) {
			printf("입력한 숫자보다 더 작습니다.\n");
		}
		else {
			printf("입력한 숫자보다 더 큽니다.\n");
		}
		return FALSE;
	}
};

class Ask {
private:
	int input;

public:
	void Prompt() {
		printf("\n제가 만든 숫자를 맞춰 보세요.\n");
	}

	BOOL AskUser() {
		printf("숫자를 입력하세요(끝낼 때는 999) : ");
		scanf_s("%d", &input);
		if (input == 999) {
			return TRUE;
		}
		return FALSE;
	}

	int GetInput() {
		return input;
	}
};

int main() {
	RandNum R;
	Ask A;

	while (1) {
		R.Generate(); // 100 이하의 랜덤 숫자 생성
		A.Prompt(); // 문제 메시지 출력
		while (1) {
			if (A.AskUser()) {
				exit(0); // 999 입력받았을 경우 종료
			}
			if (R.compare(A.GetInput())) { // 숫자 입력 받은 것 판별 로직
				break; // 숫자 맞춘 경우 반복문 탈출
			}
		}
	}
}