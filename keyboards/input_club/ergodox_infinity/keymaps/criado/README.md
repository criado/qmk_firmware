I am not entirely sure the instructions below are right, please check out the QMK docs

## Building and flashing

1. Put your board in DFU mode with either the button on the bottom, or with a software key in your current firmware
2. Flash left half:
    ```bash
    make ergodox_infinity:criado:dfu-util
    ```
3. Flash right half:
    ```bash
    make ergodox_infinity:criado:dfu-util MASTER=right
    ```
