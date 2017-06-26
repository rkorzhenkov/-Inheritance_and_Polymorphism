#include "myStack.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    stack_sorted S;      //инициализация стека
    
    /*                                  //показ стека
    stackElement a = stackElement();
    S.push(a);
    S.stkPrint();
    printf("\n");
    */
    
  	//S.input_stack(); //ввод стека с клавиатуры
	//printf("\n");
	cin>>S;
	
    
   cout<<S; //S.stkPrint();    //печать стека
    // printf("\n");
    
    /*           // pop
    printf("top element was = %f\n", S.pop().get());
    printf("\n"); 
    S.stkPrint();
    printf("\n");
    */
    
   /*            //длина и top
    printf("length = %d\n", S.getlength());
    printf("top element is = %f\n", S.stkTop().get());
    */
    
            //инвертация
           
    S.inverse();
  
    //S.stkPrint();
   // printf("\n");
    cout<<S;
    
    /*           //слияние
    printf("now input second stack!\n");
    stack Q;
    Q.input_stack();
    Q.stkPrint();
    printf("\n");
    printf("now look at merged stacks!\n");
    Q.mergeToTop(S);
    Q.stkPrint();
    printf("\n");
    */
    
    /*        //удаление из стека по ключу
    float index;
    printf("input index to search and delete: ");
    scanf("%f", &index);
     S.delete_by_index(index); 
    S-=index;
   //S.stkPrint();
   cout<<S<<endl;
    //printf("\n");
 */   
    
               //сортировка;
   // S.sort();
    //cout<<S;
    
    
   /* int n;
    printf ("Input the number of element: ");
    scanf("%d",&n);
    printf("the value is: %f\n", S.elem_num(n).get()); 
    getchar(); getchar(); */
    
    //stack Q;
    //cin>>Q;
    //S=Q;
    //cout<<S;
    //return 0; 
             

	return 0;
	
		}
              
			  
			    
              
    
             


	
	
