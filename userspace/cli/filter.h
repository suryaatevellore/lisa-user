#ifndef __FILTER_H
#define __FILTER_H

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>
#include <unistd.h>

#define MAX_LINE_WIDTH 1024
#define GREP_PATH "/bin/grep"
/* 
Output modifier operating modes: 
 
MODE_BEGIN: search for the first occurence of pattern, and then
    simply echo remaining lines
MODE_INCLUDE: list only lines matching the given pattern
MODE_EXCLUDE: list only lines _not_ matching the given pattern
MODE_GREP: this is the feature to have grep "full option" as our
	output modifier, because we're a linux switch, not just a stupid 
	ignorant cisco switch ;-)
*/

#define MODE_INCLUDE 	0x0000
#define MODE_EXCLUDE 	0x0001
#define MODE_BEGIN		0x0002
#define MODE_GREP		0x0003
#define MODE_MASK		0x000f

#endif