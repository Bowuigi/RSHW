# RSHW

A readline shell wrapper, for minimalist shells like `dash`. This aims to make such shells a little more usable like mainstream ones like `bash` without all the bloat

## Dependencies

1. libreadline
2. clang

## Installation

To install just

`sudo make install`

Or if you would like to install it locally

`make install DESTDIR=~/.local/bin`

And run it with

`rshw`

## Limitations

It was made in 15 minutes so expect bugs such as:

- Aliases defined at runtime do not work

## Extra Features

It has extra features such as:

- Vi/Emacs keybindings

- Filename completion
