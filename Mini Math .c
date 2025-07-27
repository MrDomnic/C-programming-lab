
// colculating the user inputs //

void prime(int temp)
{
    int count=0;
    for(int i=1; i<=temp; i++)
    {
        if(temp % i==0)
        {
            count++;
        }
    }
    
    if(count==2)
    {
        printf("It's a prime number \n");
    }
    else
    {
        printf("it's Not a prime number \n");
    }
}

void factorial(int temp)
{
    int fact =1;
    for(int i=1;i<=temp;i++)
    {
        fact=fact*i;
    }

    printf("Factorial is : %d",fact);
}

int reversed(int temp)
{
    int rev=0;
    int last=0;
    while(temp>0)
{
    last=temp%10;
    rev=rev*10+last;
    temp=temp/10;
    
}
    printf("reversed number %d \n",rev);
    return rev;
}




// main function//

void main()
{
    int choice,number;
    
    while(1)
    {
        printf("***Mini-Math-App***\n");
        printf("Press 1 For Prime Number: \n");
        printf("Press 2 For Factorial:\n");
        printf("Press 3 For Reverse a Number:\n");
        printf("Press 4 For Palindrome:\n");
        printf("Press 5 For Exit:\n");
        
        printf("Enter a choice:\n");
        scanf("%d",&choice);

        printf("Enter a Number: \n");
        scanf("%d",&number);
        
        switch(choice)
        {
           case 1:
           {
               prime(number);
               break;
           }
           case 2:
           {
               factorial(number);
               break;
           }
           case 3:
           {
               reversed(number);
               break;
           }
           case 4:
           {
              if (number==reversed(number))
              {
                  printf("It's a palindrome");
              }
              else
              {
                  printf("Not a palindrome");
              }
              break;
           }
            
            case 5:
            {
                
            printf("Exiting......");
            break;
            }
            
            default:
             {
         printf("Invalid Input \n");
         break;
          }
          
          
        }
        
     if(choice==5)
     {
         break;
     }
     
}
}
