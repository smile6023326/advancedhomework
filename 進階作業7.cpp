#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int main(void){
	char str[MAX];     //��J�r��w�d100�x�} 
	char word,word_max;//word�x�s��U�r��,word_max���X�{�̦h�����r�� 
	int word_num[2]={0,0};  //word_num[0]�x�s�̦h�X�{������
							//word_num[1]�x�s�p�Ʒ�U�r���X�{���� 
	int str_num=0;          //���įx�}���� 
	int i,j;              //�j��ϥ� 
	int same_word=1;        //�p�Ʀr�����Ʀ���
	 
	printf("�п�J�p��100���r��:");
	scanf("%s",&str);
	
	for(i=0;i<99;i++){     //�P�_���Ħr����� 
		
		if(str[i]=='\0'){
			break;
		}
		str_num+=1;
	}
	 
	for(j=0;j<str_num-1;j++){               //�v�@���˦r�����Ʀ��� 
			if(str[j]==str[j+1]){ //�p�G�r���e��@�� 
				same_word+=1;     //����+1 
				word_num[1]=same_word;//���� 
				word=str[j];//�����r�� 
				if(word_num[1]>word_num[0]){  //������� 
					word_num[0]=word_num[1];
					word_max=word;
				} 
				continue;
			}
			else{
			 
				same_word=1;
				word_num[1]=0;
			}	
			
		}
	printf("�̦h�X�{���r����:\n");	
	for(i=0;i<word_num[0];i++){
		printf("%c",word_max);
	}		
	
	printf("\n");
    return 0;
	system("pause"); 
} 
