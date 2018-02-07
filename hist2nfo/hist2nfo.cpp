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

int main(int argc,char** argv)
{
   char*    pBuf = new char[USHRT_MAX];

   if (!pBuf)
   {
      printf("\nNot enough memory\n");
      return -1;
   }

   FILE*    pIn = fopen("history.xml","rt");

   if (!pIn)
   {
      printf("\nCan't find src file [history.xml]\n");
      return -1;
   }
   
   bool     bItem  = false;
   bool     bPrint = false;
   
   char     pszURL     [4096];
   char     pszFileName[MAX_PATH + 1];
   char     pszSize    [MAX_PATH + 1];
   char     pszTime    [MAX_PATH + 1];
   
   *pszURL      = 0;
   *pszFileName = 0;
   *pszSize     = 0;
   *pszTime     = 0;

   while (fgets(pBuf,USHRT_MAX,pIn))
   {
      char*    pChr1 = strstr(pBuf,"<hitem>");
      char*    pChr2 = strstr(pBuf,"</hitem>");

      if (pChr1)   // Item Start
      {
         bItem  = true;
         bPrint = false;
      }
               
      if (pChr2)   // Item Finish
      {
         bItem = false;
      }
               
      if (bItem)               
      {
         char*    pStart = strstr(pBuf,"<ur>");
         
         if (pStart)
         {
            if (*(DWORD*)pStart == *(DWORD*)"<ur>")
            {
               char*    pFinish = strstr(pBuf,"</ur>");
         
               if (pFinish)
               {
                  int   iSize = pFinish - pStart - 4;
                  strncpy(pszURL,pStart + 4,iSize);
                  pszURL[iSize] = 0; // ASCIIZ
                  bPrint = true;
               }
            }
         }
      }
         
      if (bItem)               
      {
         char*    pStart = strstr(pBuf,"<fn>");
         
         if (pStart)
         {
            if (*(DWORD*)pStart == *(DWORD*)"<fn>")
            {
               char*    pFinish = strstr(pBuf,"</fn>");
         
               if (pFinish)
               {
                  int   iSize = pFinish - pStart - 4;
                  strncpy(pszFileName,pStart + 4,iSize);
                  pszFileName[iSize] = 0; // ASCIIZ
                  bPrint = true;
               }
            }
         }
      }
      
      if (bItem)               
      {
         char*    pStart = strstr(pBuf,"<sz>");
         
         if (pStart)
         {
            if (*(DWORD*)pStart == *(DWORD*)"<sz>")
            {
               char*    pFinish = strstr(pBuf,"</sz>");
         
               if (pFinish)
               {
                  int   iSize = pFinish - pStart - 4;
                  strncpy(pszSize,pStart + 4,iSize);
                  pszSize[iSize] = 0; // ASCIIZ
                  bPrint = true;
               }
            }
         }
      }
      
      if (bItem)               
      {
         char*    pStart = strstr(pBuf,"<dd>");
         
         if (pStart)
         {
            if (*(DWORD*)pStart == *(DWORD*)"<dd>")
            {
               char*    pFinish = strstr(pBuf,"</dd>");
         
               if (pFinish)
               {
                  int   iSize = pFinish - pStart - 4;
                  strncpy(pszTime,pStart + 4,iSize);
                  pszTime[iSize] = 0; // ASCIIZ
                  bPrint = true;
               }
            }
         }
      }

      if (!bItem && bPrint && pszFileName && *pszFileName)               
      {
         char     pszFile[MAX_PATH + 1];
         
         char*    pBackSlash = strrchr(pszFileName,'\\');
         
         if (pBackSlash)
         {
            strcpy(pszFile,pBackSlash + 1);
         }
         else
         {
            strcpy(pszFile,pszFileName);
         }
         
         strcat(pszFile,".nfo");
         
         FILE*    pOut = fopen(pszFile,"wt");

         if (!pOut)
         {
            continue;
         }
         
         fprintf(pOut,"File: %s\n",pBackSlash + 1);
         
         if (pszURL)
         {
            fprintf(pOut,"URL:  %s\n",pszURL);
         }
         
         if (pszSize)
         {
            fprintf(pOut,"Size: %s\n",pszSize);
         }
         
         if (pszTime)
         {
            fprintf(pOut,"Done: %s\n",pszTime);
         }
         
         fclose(pOut);
         
         *pszURL      = 0;
         *pszFileName = 0;
         *pszSize     = 0;
         *pszTime     = 0;
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
