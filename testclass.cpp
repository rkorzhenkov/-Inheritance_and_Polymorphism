#include "myStack.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    stack_sorted S;      //������������� �����
    
    /*                                  //����� �����
    stackElement a = stackElement();
    S.push(a);
    S.stkPrint();
    printf("\n");
    */
    
  	//S.input_stack(); //���� ����� � ����������
	//printf("\n");
	cin>>S;
	
    
   cout<<S; //S.stkPrint();    //������ �����
    // printf("\n");
    
    /*           // pop
    printf("top element was = %f\n", S.pop().get());
    printf("\n"); 
    S.stkPrint();
    printf("\n");
    */
    
   /*            //����� � top
    printf("length = %d\n", S.getlength());
    printf("top element is = %f\n", S.stkTop().get());
    */
    
            //����������
           
    S.inverse();
  
    //S.stkPrint();
   // printf("\n");
    cout<<S;
    
    /*           //�������
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
    
    /*        //�������� �� ����� �� �����
    float index;
    printf("input index to search and delete: ");
    scanf("%f", &index);
     S.delete_by_index(index); 
    S-=index;
   //S.stkPrint();
   cout<<S<<endl;
    //printf("\n");
 */   
    
               //����������;
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
              
			  
			    
              
    
             


	
	
