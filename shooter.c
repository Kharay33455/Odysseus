#include <windows.h>
#include <stdio.h>


// This portion of this program runs on the win gdi 
//The docs for hwhich this was writen on can be found here:
//https://learn.microsoft.com/en-us/windows/win32/gdi/capturing-an-image
// Read docs and code carefully before attempting to edit this function

// shoot function
// function to take and save the screenshot everytime it is fired
void shoot(){
    // Create compatible DC
    //HDC CreateCompatibleDC(
 //     [in] HDC hdc # handle to dc of screen where image is to be taken from, if null, current window is target
//    );



//HBITMAP CreateCompatibleBitmap(
  //[in] HDC hdc, # Hanlde of device context the bitmap must match
  //[in] int cx, # width of bitmap
  //[in] int cy # heigth of bitmap
//);


//HGDIOBJ SelectObject(
 // [in] HDC     hdc, // hanlde of device context to select handle to
//  [in] HGDIOBJ h // hanlde of object to replace former object of same handle type of that device context.
//);


// copy the bitmap
//BOOL BitBlt(
//  [in] HDC   hdc, // Handle of dc you want to copy bitmap to
//  [in] int   x, // starting point x of paste
//  [in] int   y, // starting point y of paste
//  [in] int   cx, // width
//  [in] int   cy,// height
//  [in] HDC   hdcSrc, // handle of dc you want to copy the bitmap from
//  [in] int   x1, // starting point x of copy
//  [in] int   y1, // starting point y of copy
//  [in] DWORD rop // type of copy
//);

// clean up: Delete bitmap and unused device contexts. Release memory Dc was stored in
// int ReleaseDC(HWND hWnd, HDC hdc); hWnd is handle of dc used to create the device contect and hdc is the handle of device context to be released.


}