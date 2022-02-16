
/*	THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY
	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
	AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
	DEALINGS IN THE SOFTWARE. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

char ver[] = "1.0";
char name[] = "StrSplit";

/* This program is distributed under the following license: (SELECT A LICENSE)

 ================================================================================
   GNU General Public License (GPL) - https://opensource.org/licenses/gpl-license
 ================================================================================

   ================= ABOUT THE PROGRAM =================
   This program is created by Kvc at '01-02-2022 - 11:45'
   This program Breaks the string into parts from the given delimiter.
   Use '/?' for getting help for this.
   For More Visit: www.batch-man.com	*/


void Help()
{
    printf("\nBreaks the string into parts from the given delimiter\n");
    printf("v%s Created by Kvc - www.batch-man.com\n\n", ver);
    printf("USAGE:\n");
    printf("Call StrSplit [delimiter] [string]\n");
    printf("EXAMPLE: StrSplit \";\" \"%%path%%\"\n\n");
    printf("Note: Make Sure to surround delimeter by double quotes as in e.g.\n");
    return;
}

int main(int argc, char *argv[])
{

    if (argc < 3 || !strcmp(argv[1], "/?") || !strcmp(argv[1], "--help"))
    {
        Help();
        return 0;
    }

    size_t slen = strlen(argv[2]);

    for (int i = 0; i < slen; i++)
    {

        if (argv[2][i] == argv[1][0])
        {
            printf("\n");
        }
        else
        {
            printf("%c", argv[2][i]);
        }
    }
    return 0;
}