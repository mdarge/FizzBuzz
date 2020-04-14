#include <iostream>
//#include <string>
using namespace std;

//int main(int argc, char *argv[])
int main()
{
  int i;
  int s = 0;
  char f[] = { 'F', 'i', 0 }, g[] =
  {
  'B', 'u', 0}, h[] =
  {
  'z', 'z', 0};
/*
if (argc > 1){
    cout << argc << endl;
} */

  for (i = 1; i <= 200; i++)
    {

      if (i % 5 == 0)
        {
          s = 5;

          if (i % 15 == 0)
            {
              s += 10;
            }
          else if (i % 10 == 0)
            {
              s += 5;
            }
        }

      cout << s << " ";

      switch (s)
        {
        case 5:
          cout << f << h;
          break;
        case 10:
          cout << g << h;
          break;
        case 15:
          cout << f << h;
          cout << g << h;
          break;
        default:
          cout << i;
        }
      cout << endl;
      s = 0;
    }

  return 0;
}