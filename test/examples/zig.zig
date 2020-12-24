// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Zig programming language example
//
// *****************************************************************************************


const print = @import("std").debug.print;

pub fn main() void {
    print("Hello, world!\n", .{});
}
