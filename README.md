# dmenu

*Personal fork of dmenu (dynamic menu) from suckless.org*

## Installation

Make sure you have dependencies installed before you build dmenu.

### Dependencies

```sh
$ sudo pacman -S libxinerama libxft  # Arch Linux
```

### Building

```sh
$ git clone https://git.dawidpotocki.com/dawid/dmenu
$ cd dmenu
$ sudo make clean install
```

## Patches

- [line height](https://tools.suckless.org/dmenu/patches/line-height/)
- [password](https://tools.suckless.org/dmenu/patches/password/)
