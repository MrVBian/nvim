Vim�UnDo� ��B�����șo�$'�A�d��L���xR�U                    	       	   	   	    ^��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             ^��     �              )   #include<cstdio>       using namespace std;       const int maxn = 20;   Rbool cols[maxn], diag[2][maxn]; // cols列 diag[0]主对角线 diag[1]副对角线   -int mp[10]; // mp[x] = y 第x行皇后在y列   int ans, cot;       void Print(){       printf("Num: %d\n", ans);        for(int i = 1; i <= 8; ++i){   $        for(int j = 1; j <= 8; ++j){   %            printf("%d", mp[i] == j);   	        }           printf("\n");       }   }       void dfs(int x){       if(x > 8){           ans++;           Print();           return ;       }        for(int i = 1; i <= 8; ++i){   9        if(!cols[i] && !diag[0][x-i+8] && !diag[1][x+i]){   8            cols[i] = diag[0][x-i+8] = diag[1][x+i] = 1;               mp[++cot] = i;               dfs(x+1);               // 回溯   8            cols[i] = diag[0][x-i+8] = diag[1][x+i] = 0;               --cot;   	        }       }   }       int main(){       dfs(1);       return 0;   }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^��     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^��     �                  void insert(int a[], int )5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^��     �                  void insert(int a, int )5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^��     �                  void insert(int *a, int )5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^��     �                  void insert(int *a, int x)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^��     �                  void insert(int *a, , int x)5�_�      	                 #    ����                                                                                                                                                                                                                                                                                                                                                             ^��     �                   �             �                  #void insert(int *a, int len, int x)5�_�                  	          ����                                                                                                                                                                                                                                                                                                                                                             ^��    �                 $void insert(int *a, int len, int x){   	    if(x)   }5��