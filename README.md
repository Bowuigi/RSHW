# RSHW

A readline shell wrapper, for minimalist shells like `dash`. This aims to make such shells a little more usable like mainstream ones like `bash` without all the bloat

## Dependencies

1. libreadline
2. clang

## Installation

To install just

`sudo make install`

And run it with

`rshw`

## Limitations

It was made in 15 minutes so expect bugs such as:

- Aliases defined at runtime do not work

- The program segfaults when you send EOF

## Extra Features

It has extra features such as:

- Vi/Emacs keybindings

- Filename completion
