;
; Address of the static standard serial driver
;
; Oliver Schmidt, 2022-12-22
;
; const void ser_static_stddrv[];
;

        .export _ser_static_stddrv
        .import _c64_swlink_ser

.rodata

_ser_static_stddrv := _c64_swlink_ser
