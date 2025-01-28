#include <stdio.h>

void printBoard(char board[3][3])
{
    printf("%c  | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf("%c  | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf("%c  | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int checkWinner(char board[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            printf("Player %c Wins!\n", board[i][0]);
            return 1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
        {
            printf("Player %c Wins!\n", board[0][i]);
            return 1;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        printf("Player %c Wins!\n", board[0][0]);
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        printf("Player %c Wins!\n", board[0][2]);
        return 1;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    printf("It's a Draw!\n");
    return 1;
}

int main() 
{
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'X';
    int row, col;
    while (1)
    {
        printBoard(board);
        printf("Player %c, Enter Row and Column (1-3): ", player);
        scanf("%d %d", &row, &col);
        row--;
        col--;
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        {
            printf("Invalid Move, try again.\n");
            continue;
        }
        board[row][col] = player;
        if (checkWinner(board))
        {
            printBoard(board);
            break;
        }
        player = (player == 'X') ? 'O' : 'X';
    }
    return 0;
}
