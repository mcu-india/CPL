/*
 * library.h 
 *
 * Work with library.dll file or compile with library.lib
 *
 * Library that include functions ( libatoi(char *str), libreverse(char *buffer,int len), libitoa(int value, char *buffer, int base))
 *
 * Author : Jeetendra Singh Tripalia 
 *
 * Email : jeetendrasinghtripalia@gmail.com
 *
 * @date: September 13, 2018
 *
 */


#ifndef _LIBRARY_H_
#define _LIBRARY_H_

__declspec(dllexport) int libatoi(char *str);
__declspec(dllexport) char* libreverse(char *buffer,int len);
__declspec(dllexport) char* libitoa(int value, char *buffer, int base);

#endif