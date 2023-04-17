
#include <stdio.h>

int main()
    {
      int secret_number;
      int guess_number;

      secret_number = 5;

      int i;
      int guess_limit;

      guess_limit = 3;

      for(i = 1; i <= guess_limit; i++)
      {
        printf("Guess Number %d : ", i);
        scanf("%d", &guess_number);

        if(guess_number == secret_number)
        {
          printf("You are right\n");
          break;
        }
        else
        {
        printf("You are wrong.\n Try again\n");
         }
      }
        if(i > guess_limit)
        {
          printf("You have exceeded the guess limit.");
          printf("The Secret Number was %d\n", secret_number);
        }

      return 0;
}
