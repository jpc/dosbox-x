; master.lib
; vga graphic controler( 16color )
; 93/12/3

	; �O���t�B�b�N�R���g���[��

VGA_PORT	equ 03ceh
VGA_SET_RESET_REG	equ 0	; setcolor
VGA_ENABLE_SR_REG	equ 1	; 
VGA_COLOR_CMP_REG	equ 2	; 
VGA_DATA_ROT_REG	equ 3	; setcolor
VGA_READPLANE_REG	equ 4	; ��readplane�͉���2bit�Ƀv���[���ԍ�������!
VGA_MODE_REG		equ 5	; setcolor��VGA_CHAR�ɐݒ肳���
VGA_MULTI_REG		equ 6	;
VGA_DISABLECMP		equ 7	;
VGA_BITMASK_REG		equ 8	; setcolor��0ffh�ɐݒ肳���

	; VGA_MODE_REG���W�X�^�ɐݒ肷����e

VGA_READPLANE	equ 0h		; readmap�I��reg�̏ꏊ�����̂܂ܓǂ�
VGA_COMPARE	equ 08h		; �ǂݍ��ݎ��F��r���W�X�^�ƈ�v������bit on

VGA_NORMAL	equ 0		; GC�̃��[�h
VGA_LATCH	equ 1
VGA_FILL	equ 2
VGA_CHAR	equ 3

	; VGA_DATA_ROT_REG���W�X�^�ɐݒ肷����e

VGA_PSET	equ 00h
VGA_AND		equ 08h
VGA_OR		equ 10h
VGA_XOR		equ 18h


	; VGA Sequencer

SEQ_PORT	equ 03c4h
SEQ_RESET_REG		equ 0
SEQ_CLOCKING_MODE_REG	equ 1
SEQ_MAP_MASK_REG	equ 2	; value 0fh	setcolor
SEQ_CHARACTER_MAP_REG	equ 3
SEQ_MEMORY_MODE_REG	equ 4

	; backup/restore_video_mode�p�\����
VIDEO_STATE struc
mode	    db	?	; ���݂̃r�f�I�E���[�h
rows	    db	?	; ���݂̂P��ʂ̍s��
cols	    db	?	; ���݂̂P�s������̌���
total_rows  db	?	; ���݂̉�ʑS�̂̍s��
VIDEO_STATE ends