#include <iostream>

using namespace std;

#define NUM_TILES 5
#define LINE_LEN 5
#define NUM_PLAYERS 2

void init(char board[NUM_TILES][NUM_TILES])
{
  for (int i = 0; i < NUM_TILES * NUM_TILES; ++i)
  {
    board[i / NUM_TILES][i % NUM_TILES] = 0;
  }
}

char digit_to_char(const unsigned char d)
{
  return '0' + d;
}

void print(const char board[NUM_TILES][NUM_TILES])
{
  for (int i = 0; i < NUM_TILES; ++i)
  {
    for (int j = 0; j < NUM_TILES; ++j)
    {
      char tile = digit_to_char(board[i][j]);
      cout << " [" << tile << "] ";
    }
    cout << endl;
  }
}

bool are_valid(const int x, const int y)
{
  return (x >= 0) && (y >= 0) && (x < NUM_TILES) && (y < NUM_TILES);
}

bool is_occupied(const int x, const int y, const char board[NUM_TILES][NUM_TILES])
{
  return board[x][y];
}

void read_valid_coords(int &x, int &y, const char board[NUM_TILES][NUM_TILES])
{
  cin >> x >> y;

  while (!are_valid(x, y) || is_occupied(x, y, board))
  {
    cout << "Error!\n";
    cin >> x >> y;
  }
}

unsigned int absolute(const int num)
{
  return num >= 0 ? num : -num;
}

void set_deltas(char &delta_x, char &delta_y, const char direction)
{
  switch (direction)
  {
  case 0:
  {
    delta_x = 1;
    delta_y = 0;
    break;
  }
  case 1:
  {
    delta_x = 1;
    delta_y = 1;
    break;
  }
  case 2:
  {
    delta_x = 0;
    delta_y = 1;
    break;
  }
  case 3:
  {
    delta_x = -1;
    delta_y = 1;
    break;
  }
  case 4:
  {
    delta_x = -1;
    delta_y = 0;
    break;
  }
  case 5:
  {
    delta_x = -1;
    delta_y = -1;
    break;
  }
  case 6:
  {
    delta_x = 0;
    delta_y = -1;
    break;
  }
  case 7:
  {
    delta_x = 1;
    delta_y = -1;
    break;
  }
  }
}

unsigned int count_consecutives(const int x, const int y, const char board[NUM_TILES][NUM_TILES], const unsigned char player, const char direction)
{
  char delta_x;
  char delta_y;
  set_deltas(delta_x, delta_y, direction);

  // Directions:
  //      0
  //    7   1
  //  6       2
  //    5   3
  //      4

  unsigned int count = 0;

  for (int i = x + delta_x, j = y + delta_y; (absolute(x - i) <= LINE_LEN) && (absolute(y - j) <= LINE_LEN); i += delta_x, j += delta_y, ++count)
  {
    if (!are_valid(i, j) || board[i][j] != player)
    {
      break;
    }
  }

  return count;
}

bool check_win(const int x, const int y, const char board[NUM_TILES][NUM_TILES], const unsigned char player)
{
  if (count_consecutives(x, y, board, player, 0) + count_consecutives(x, y, board, player, 4) + 1 >= LINE_LEN)
  {
    return true;
  }
  else if (count_consecutives(x, y, board, player, 1) + count_consecutives(x, y, board, player, 5) + 1 >= LINE_LEN)
  {
    return true;
  }
  else if (count_consecutives(x, y, board, player, 2) + count_consecutives(x, y, board, player, 6) + 1 >= LINE_LEN)
  {
    return true;
  }
  else if (count_consecutives(x, y, board, player, 3) + count_consecutives(x, y, board, player, 7) + 1 >= LINE_LEN)
  {
    return true;
  }

  return false;
}

void make_turn(char board[NUM_TILES][NUM_TILES], const unsigned char player, bool &game_over)
{
  cout << "Player " << digit_to_char(player) << "'s turn.\n";

  int x, y;
  read_valid_coords(x, y, board);

  board[x][y] = player;
  print(board);

  if (check_win(x, y, board, player))
  {
    cout << "Player " << digit_to_char(player) << " won. Congrats!\n";
    game_over = true;
  }
}

int main()
{
  char board[NUM_TILES][NUM_TILES];
  init(board);
  print(board);

  bool game_over = false;
  while (!game_over)
  {
    for (char player = 1; player <= NUM_PLAYERS; ++player)
    {
      make_turn(board, player, game_over);
      if (game_over)
      {
        break;
      }
    }
  }
}