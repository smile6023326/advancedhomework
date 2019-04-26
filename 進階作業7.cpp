#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int main(void){
	char str[MAX];     //輸入字串預留100矩陣 
	char word,word_max;//word儲存當下字元,word_max為出現最多次的字元 
	int word_num[2]={0,0};  //word_num[0]儲存最多出現的次數
							//word_num[1]儲存計數當下字元出現次數 
	int str_num=0;          //有效矩陣長度 
	int i,j;              //迴圈使用 
	int same_word=1;        //計數字元重複次數
	 
	printf("請輸入小於100的字串:");
	scanf("%s",&str);
	
	for(i=0;i<99;i++){     //判斷有效字串長度 
		
		if(str[i]=='\0'){
			break;
		}
		str_num+=1;
	}
	 
	for(j=0;j<str_num-1;j++){               //逐一掃瞄字元重複次數 
			if(str[j]==str[j+1]){ //如果字元前後一樣 
				same_word+=1;     //重複+1 
				word_num[1]=same_word;//紀錄 
				word=str[j];//紀錄字串 
				if(word_num[1]>word_num[0]){  //比較次數 
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
	printf("最多出現的字元為:\n");	
	for(i=0;i<word_num[0];i++){
		printf("%c",word_max);
	}		
	
	printf("\n");
    return 0;
	system("pause"); 
} 
