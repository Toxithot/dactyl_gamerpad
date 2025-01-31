# dactyl_gamerpad_real

![see here](https://cdn.bsky.app/img/feed_fullsize/plain/did:plc:wql7vkbychk7gfwrdtxtdq6e/bafkreiaurvxfsnnzsm3fnal2yzml6smqnlwhmbuev4zfx7th6nklwyllfa@jpeg)

*A short description of the keyboard/project*

* Keyboard Maintainer: [max](https://github.com/toxithot)
* Hardware Supported: pi pico
* model configurator:  https://ryanis.cool/dactyl/#manuform:ChwIBhAFGgN0d28iBHplcm8qAm14MgVvdXRpZTgAEhAIhAcQwgMYwgMgBCiUCDBaGgkIABIDdXNiGAEiF1UAAKBAGAAgAV0AAOBAZQAAQEBAAEgAMvkBlQMAACBAnQMAAIA/gAMBiAMBDQAAAAAVAAAAAB0zMzNAJQAA0MAtAADAwDUAAMBAPQAAAABFAAAAAE0AAMBAVQAAQMBdAADgQGUzM2HCbTMzLcJ1AAC8wXjnAoABzRiIAcgklQEzMxfCnQEzM13CpQFmZsrBqAGfC7ABmRe4AfwlxQEAAFDCzQEAANDB1QEAAEDB2AGcBOAB8xfoAZAc9QEAAOjB/QEAACTChQIAAFDBiAKbBJAC8xeYAuAhpQIAAAzCrQIAAHDBtQIAAADAuAKEB8AClRDIAoQH1QIAAEDB3QIAAIDB5QIAAEBA6AKEB/AClRD4AoQHKgYIABAAGAA=
Make example for this keyboard (after setting up your build environment):

    make dactyl_gamerpad_real:default

Flashing example for this keyboard:

    make dactyl_gamerpad_real:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
