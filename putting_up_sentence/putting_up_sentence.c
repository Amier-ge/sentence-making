#include<stdio.h>
#include<string.h>

int main() {
	
	char full_sentence[800] = {0};
	char sentence[80];
	
	while(1){

		printf("���ڿ��� �Է��ϼ��� : ");
		gets(sentence);
		
		if(strcmp(sentence, "��") == 0 || strcmp(sentence, "finish") == 0) {
			
			strcat(full_sentence, ".");
			printf("Result : ");
			puts(full_sentence);

			break;	
		}

		strcat(full_sentence, sentence);
		strcat(full_sentence, " ");

		printf("��������� �ٰŸ� : ");
		puts(full_sentence);
		printf("\n");

	}

	return 0;
}
