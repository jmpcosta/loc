// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Objective C programming language example
//
// *****************************************************************************************

#import <Foundation/Foundation.h>

int main (int argc, const char * argv[]) {
   NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
   
   NSLog (@"hello world");
   [pool drain];
   return 0;
}
