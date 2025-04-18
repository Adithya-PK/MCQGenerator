#include<stdio.h>
void q(int n); // short UDF name for question display
void main()
{
    int s = 0, a, i; // s for score, a for answer, i for loop
    printf("Welcome to MCQ Quiz!\n");
    printf("Answer all 15 questions (1 for a, 2 for b, 3 for c)\n\n");
    
    for(i=1; i<=15; i++) // simple loop for 15 questions
    {
        q(i); // call UDF to show question
        printf("Your answer (1/2/3): ");
        scanf("%d", &a);
        
        // check correct answer for each question
        if(i==1 && a==2) s=s+1;
        if(i==2 && a==2) s=s+1;
        if(i==3 && a==2) s=s+1;
        if(i==4 && a==2) s=s+1;
        if(i==5 && a==1) s=s+1;
        if(i==6 && a==2) s=s+1;
        if(i==7 && a==2) s=s+1;
        if(i==8 && a==3) s=s+1;
        if(i==9 && a==2) s=s+1;
        if(i==10 && a==1) s=s+1;
        if(i==11 && a==2) s=s+1;
        if(i==12 && a==3) s=s+1;
        if(i==13 && a==1) s=s+1;
        if(i==14 && a==2) s=s+1;
        if(i==15 && a==3) s=s+1;
        
        printf("\n");
    }
    
    printf("Quiz Over! Your score is %d out of 15\n", s);
    if(s>=10) printf("Good job!\n");
    else printf("Try again next time!\n");
}

// UDF to display questions
void q(int n)
{
    if(n==1) 
    {
        printf("1. Which language is used for AI and ML?\n");
        printf("a) Java  b) Python  c) C++\n");
    }
    if(n==2) 
    {
        printf("2. What does AI stand for?\n");
        printf("a) Automated Intelligence  b) Artificial Intelligence  c) Applied Integration\n");
    }
    if(n==3) 
    {
        printf("3. Which uses FIFO?\n");
        printf("a) Stack  b) Queue  c) Tree\n");
    }
    if(n==4) 
    {
        printf("4. Which is a supervised learning algorithm?\n");
        printf("a) K-Means  b) Linear Regression  c) Apriori\n");
    }
    if(n==5) 
    {
        printf("5. Full form of SQL?\n");
        printf("a) Structured Query Language  b) Server Query Language  c) Sequential Query Language\n");
    }
    if(n==6) 
    {
        printf("6. Who made TensorFlow?\n");
        printf("a) Microsoft  b) Google  c) IBM\n");
    }
    if(n==7) 
    {
        printf("7. Which is a NoSQL database?\n");
        printf("a) MySQL  b) MongoDB  c) Oracle\n");
    }
    if(n==8) 
    {
        printf("8. Role of activation function in neural networks?\n");
        printf("a) Sort data  b) Store weights  c) Introduce non-linearity\n");
    }
    if(n==9) 
    {
        printf("9. Which algorithm for classification?\n");
        printf("a) K-Means  b) Decision Trees  c) PCA\n");
    }
    if(n==10) 
    {
        printf("10. Language for front-end web pages?\n");
        printf("a) HTML  b) Python  c) Java\n");
    }
    if(n==11) 
    {
        printf("11. Python library for data analysis?\n");
        printf("a) TensorFlow  b) Pandas  c) Flask\n");
    }
    if(n==12) 
    {
        printf("12. Example of deep learning?\n");
        printf("a) Decision Tree  b) Linear Regression  c) CNN\n");
    }
    if(n==13) 
    {
        printf("13. What is training data in AI?\n");
        printf("a) Teach model  b) Final testing  c) Increase speed\n");
    }
    if(n==14) 
    {
        printf("14. Symbol to define function in Python?\n");
        printf("a) function  b) def  c) fun\n");
    }
    if(n==15) 
    {
        printf("15. Purpose of API?\n");
        printf("a) Store in cloud  b) Visualize code  c) Apps communicate\n");
    }
}