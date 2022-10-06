MCU = atmega32u4
BOOTLOADER = caterina
SPLIT_KEYBOARD = no
BOOTMAGIC_ENABLE = no	# Virtual DIP switch configuration(+1000) V
MOUSEKEY_ENABLE = no	# Mouse keys(+4700)
EXTRAKEY_ENABLE = yes	# Audio control and System control(+450)

# DEBOUNCE_TYPE = sym_defer_g

#avrdude -v -p atmega32u4 -P /dev/ttyACM0 -c avr109 -U flash:w:"kb_vial.hex" -V


VIA_ENABLE = yes
VIAL_ENABLE = yes
#VIAL_INSECURE = yes
LTO_ENABLE = yes
RGBLIGHT_ENABLE = no
KEY_LOCK_ENABLE = no
QMK_SETTINGS = yes


COMBO_ENABLE = yes

