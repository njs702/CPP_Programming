#include <stdio.h>
#include "cursor.h"

class RandNum {
private:
	int num;

public:
	RandNum() {
		randomize(); // ���� ���� ȣ���ϱ� ���� ����
	}

	void Generate() {
		num = random(100) + 1; // ���� ���� ����
	}

	BOOL compare(int input) {
		if (input == num) {
			printf("������ϴ�!\n");
			return TRUE;
		}
		else if (input > num) {
			printf("�Է��� ���ں��� �� �۽��ϴ�.\n");
		}
		else {
			printf("�Է��� ���ں��� �� Ů�ϴ�.\n");
		}
		return FALSE;
	}
};

class Ask {
private:
	int input;

public:
	void Prompt() {
		printf("\n���� ���� ���ڸ� ���� ������.\n");
	}

	BOOL AskUser() {
		printf("���ڸ� �Է��ϼ���(���� ���� 999) : ");
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
		R.Generate(); // 100 ������ ���� ���� ����
		A.Prompt(); // ���� �޽��� ���
		while (1) {
			if (A.AskUser()) {
				exit(0); // 999 �Է¹޾��� ��� ����
			}
			if (R.compare(A.GetInput())) { // ���� �Է� ���� �� �Ǻ� ����
				break; // ���� ���� ��� �ݺ��� Ż��
			}
		}
	}
}