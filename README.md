# libc

A collection of simple tools built in C.

This repository is intended for small, focused command-line utilities and low-level experiments. Each tool will have a short description, its purpose, and basic usage notes documented here.

## Goals

- Build simple tools in C
- Practice low-level programming
- Keep each tool small and easy to understand
- Document each tool briefly in one place

## Current Tools

### `obfuscator`

It is a simple program which show case the ability of `getchar` & `putchar` method in `stdlib`.
This program just encode or decode input stream using bitwise `~` conversion bit-by-bit.


Source: `obfuscator.c`

### `encrypter`

This is a simple `encrypter` program which takes a secret key and encrypt the input stream with it.

Source: `encrypter.c`


