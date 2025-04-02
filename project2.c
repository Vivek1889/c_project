// Quiz program in C with Negative marking of 1/4.

#include<stdio.h>
#include<string.h>
float check(char ans[]){
    char a[]={'b','c','a','b','d','d','c'};
    float score=0;
    for(int i=0;i<strlen(a)-1;i++){
        if(ans[i]==a[i]){
            score=score+1;
        }else{
            score=score-0.25;
        }
    }
    return score;
}
int main(){
    char ans[10];
    int q=0;
    printf("\nQ%d: who is the pm of india\n\n",q+1);
    printf("a:  Manmohan singh\n");
    printf("b:  narendra modi\n");
    printf("c:  draupadi murmuu\n");
    printf("d:  Rajnat singh\n");
    scanf(" %c",&ans[q]);
    
    ++q;
    printf("Q%d: who is the president of india\n",q+1);
    printf("a:  Manmohan singh\n");
    printf("b:  narendra modi\n");
    printf("c:  draupadi murmuu\n");
    printf("d:  Rajnat singh\n");
    scanf(" %c",&ans[q]);
    
    ++q;
    printf("Q%d: what is the capital of india\n",q+1);
    printf("a:  New delhi\n");
    printf("b:  Agra\n");
    printf("c:  Kanpur\n");
    printf("d:  Lucknow\n");
    scanf(" %c",&ans[q]);
    
    ++q;
    printf("Q%d:  How many bytes an integer can take \n",q+1);
    printf("a:  4 bytes\n");
    printf("b:  2 bytes\n");
    printf("c:  1 byte\n");
    printf("d:  0 bytes\n");
    scanf(" %c",&ans[q]);
    
    ++q;
    printf("Q%d: which is an operating system\n",q+1);
    printf("a:  Chrome\n");
    printf("b:  Google\n");
    printf("c:  AWS\n");
    printf("d:  Linux\n");
    scanf(" %c",&ans[q]);
    ++q; 

    printf("Q%d: Which is an cloud computing service\n",q+1);
    printf("a:  Ubuntu\n");
    printf("b:  Git\n");
    printf("c:  Flipkart\n");
    printf("d:  AWS\n");
    scanf(" %c",&ans[q]);
     printf("final score is =%f out of %d",check(ans),q+1);
     ++q;

     printf("Q%d: Who is father of computer ?\n",q+1);
    printf("a:  Satya nadela\n");
    printf("b:  Gorge bush\n");
    printf("c:  Charles babbage\n");
    printf("d:  Bill gates\n");
    scanf(" %c",&ans[q]);
   
return 0;
}