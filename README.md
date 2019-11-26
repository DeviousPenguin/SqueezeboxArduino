# SqueezeboxArduino
test arduino code

## Error during compile on Platform IO on VSCODE for Sparkfun Pro Micro board:

```
MethodWrapper(["checkprogsize"], [".pio/build/sparkfun_promicro16/firmware.elf"])
Advanced Memory Usage is available via "PlatformIO Home > Project Inspect"
DATA:    [========  ]  83.5% (used 2138 bytes from 2560 bytes)
PROGRAM: [==========]  114.3% (used 32776 bytes from 28672 bytes)
Error: The program size (32776 bytes) is greater than maximum allowed (28672 bytes)
.pio/build/sparkfun_promicro16/firmware.elf  :
*** [checkprogsize] Explicit exit, status 1
section                     size      addr
.data                        380   8388864
.text                      32396         0
.bss                        1758   8389244
.comment                      91         0
.note.gnu.avr.deviceinfo      64         0
.debug_info                 2548         0
.debug_abbrev               2410         0
.debug_line                   26         0
.debug_str                   881         0
Total                      40554
================================================================================= [FAILED] Took 9.61 seconds =================================================================================
The terminal process terminated with exit code: 1
```
