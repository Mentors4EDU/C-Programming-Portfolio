#include <stdio.h>
#include <string.h>
#define MAX_LINE_LEN 256 // define variables
#define WS " ,.:;!-(){}[]<>?/\\=+\t" // define grammar
typedef struct // initalize
{
  int ln;
  int wd;
  int ch;
} Count;
int
main (int argc, char *argv[]) // call grammar
{
  char line[MAX_LINE_LEN], *s;
  FILE *fp;
  Count count = { 0 }; // count

  if ((argc < 2) || ((fp = fopen (argv[1], "r")) == NULL))
    {
      printf ("\nusage : %s <file>\n", argv[0]); // file usage
      return -1;
    }
  else
    {
      while (fgets (line, MAX_LINE_LEN, fp) != NULL) // go through lines
	{
	  *strchr (line, '\n') = '\0';
	  ++count.ln;
	  count.ch += strlen (line);
	  for (s = strtok (line, WS); s != NULL; s = strtok (NULL, WS))
	    {
	      ++count.wd;
	    }
	}
      printf ("\nLines : Words : Characters = %d : %d : %d\n", // define variables
	      count.ln, count.wd, count.ch); // count
      return 0;
    }
  return 0;
}
