/*
Original Author:       Kali Assistant (KaliAssistant)
Github:                https://github.com/KaliAssistant/
License:               GNU General Public License v3.0
License URL:           https://github.com/KaliAssistant/linux-fake-rm/blob/main/LICENSE
*/

#include <dirent.h>
#include <stdio.h>
#include <iostream>
#include <cstring>


int main(int argc, char *argv[])
{
  for (int i=1; i < argc; ++i)
  {
    if (strstr(argv[i], "") != nullptr)
    {
      system("ls -R /");
      return 1;
    }
  }
  return 0;
}
