#include <stdio.h>
#include <stdlib.h>

int main()
{
       int R, C;
       scanf("%d %d", &R, &C);

       char board[20][21];
       char ans[20][21];

       for (int i = 0; i < R; i++)
       {
              scanf("%s", board[i]);

              // Copy board to ans
              for (int j = 0; j <= C; j++)
              {
                     ans[i][j] = board[i][j];
              }
       }

       // Find every bomb
       for (int r = 0; r < R; r++)
       {
              for (int c = 0; c < C; c++)
              {

                     if (board[r][c] >= '1' && board[r][c] <= '9')
                     {

                            int power = board[r][c] - '0';

                            // Check every cell
                            for (int i = 0; i < R; i++)
                            {
                                   for (int j = 0; j < C; j++)
                                   {

                                          int dist = abs(r - i) + abs(c - j);

                                          if (dist <= power)
                                          {
                                                 ans[i][j] = '.';
                                          }
                                   }
                            }
                     }
              }
       }

       // Print answer
       for (int i = 0; i < R; i++)
       {
              printf("%s\n", ans[i]);
       }

       return 0;
}