/* ******************************************************************** **
** @@ 
** @ Copyrt : 
** @ Author : 
** @ Modify :
** @ Update :
** @ Notes  :
** ******************************************************************** */

/* ******************************************************************** **
**                uses pre-compiled headers
** ******************************************************************** */

#include "stdafx.h"

#include <stdio.h>
#include <string.h>
#include <limits.h>

#pragma comment(linker,"/MERGE:.rdata=.text /MERGE:.data=.text /SECTION:.text,EWR")

/* ******************************************************************** **
** @@                   internal #defines
** ******************************************************************** */

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/* ******************************************************************** **
** @@                   internal prototypes
** ******************************************************************** */

/* ******************************************************************** **
** @@                   external global variables
** ******************************************************************** */

/* ******************************************************************** **
** @@                   static global variables
** ******************************************************************** */

/* ******************************************************************** **
** @@                   real code
** ******************************************************************** */

/* ******************************************************************** **
** @@ main()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

int main(int argc,char** argv
)
{
   char*    pBuf = new char[USHRT_MAX];

   if (!pBuf)
   {
      printf("\nNot enough memory\n");
      delete pBuf;
      pBuf = NULL;
      return -1;
   }

   FILE*    pIn = fopen("descript.ion","rt");

   if (!pIn)
   {
      printf("\nCan't find src file [descript.ion]\n");
      delete pBuf;
      pBuf = NULL;
      return -1;
   }
   
   int   iCnt = 0;

   while (fgets((char*)pBuf,USHRT_MAX,pIn))
   {
      char*    pChr = strchr(pBuf,'[');

      if (pChr)   // Contain URL
      {
         *pChr       = 0;  // Cut Here !
         *(pChr - 1) = 0;  // Remove last space chr
         
         char     pszFileName[MAX_PATH + 1];
         
         strcpy(pszFileName,(const char*)pBuf);
         strcat(pszFileName,".log");
         
         FILE*    pOut = fopen(pszFileName,"wt");

         if (!pOut)
         {
            continue;
         }
         
         int   iLen = strlen(pChr + 1);
         
         pChr[iLen - 1] = 0;  // Remove tail ']'
         
         fprintf(pOut,"File: %s\n",pBuf);
         fprintf(pOut,"URL:  %s\n",pChr + 1);
         
         fclose(pOut);
      }
   }

   fclose(pIn);
   
   delete pBuf;
   pBuf = NULL;
   
   return 0;
}

/* ******************************************************************** **
** @@                   The End
** ******************************************************************** */
