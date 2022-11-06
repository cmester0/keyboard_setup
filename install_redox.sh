#!/bin/bash
rm -rf ~/qmk_firmware/keyboards/redox/keymaps/$1
cp -r $1 ~/qmk_firmware/keyboards/redox/keymaps/
qmk compile --keyboard redox/rev1 --keymap $1
qmk flash --keyboard redox/rev1 --keymap $1
