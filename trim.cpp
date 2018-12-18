/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>

void get_min_length(const char *source, int *min);
void get_max_length(const char *source, int *min, int *max);

 void trim(const char *source, char *trimmed_string){
   int min = 0;
   int max = strlen(source-1);

   get_min_length(source, &min);
   get_max_length(source, &min, &max);

   if (strlen(source) == 0) {
     strcpy(trimmed_string, "");
   }

 }

 void get_min_length(const char *source, int *min)
 {
   while (source[*min] == ' '){
     *min = *min + 1;
   }
 }

 void get_max_length(const char *source, int *min, int *max)
 {
   while (*max >= *min && source[*max] == ' ') {
     *max = *max -1;
   }
 }
