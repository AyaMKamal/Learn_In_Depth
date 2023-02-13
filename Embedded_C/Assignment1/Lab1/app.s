
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e52db004 	push	{fp}		; (str fp, [sp, #-4]!)
   4:	e28db000 	add	fp, sp, #0
   8:	e28bd000 	add	sp, fp, #0
   c:	e8bd0800 	ldmfd	sp!, {fp}
  10:	e12fff1e 	bx	lr

Disassembly of section .data:

00000000 <buffer>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   c:	3c3a6874 	ldccc	8, cr6, [sl], #-464	; 0xfffffe30
  10:	3e415941 	cdpcc	9, 4, cr5, cr1, cr1, {2}
	...

Disassembly of section .rodata:

00000000 <buffer2>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   c:	3c3a6874 	ldccc	8, cr6, [sl], #-464	; 0xfffffe30
  10:	3e415941 	cdpcc	9, 4, cr5, cr1, cr1, {2}
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	0000009a 	muleq	r0, sl, r0
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000047 	andeq	r0, r0, r7, asr #32
  10:	00006201 	andeq	r6, r0, r1, lsl #4
	...
  1c:	00001400 	andeq	r1, r0, r0, lsl #8
  20:	00000000 	andeq	r0, r0, r0
  24:	79010200 	stmdbvc	r1, {r9}
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	00000106 	andeq	r0, r0, r6, lsl #2
  30:	00140000 	andseq	r0, r4, r0
  34:	00000000 	andeq	r0, r0, r0
  38:	50010000 	andpl	r0, r1, r0
  3c:	03000000 	movweq	r0, #0
  40:	00006801 	andeq	r6, r0, r1, lsl #16
  44:	01090100 	mrseq	r0, (UNDEF: 25)
  48:	00500401 	subseq	r0, r0, r1, lsl #8
  4c:	00000000 	andeq	r0, r0, r0
  50:	00560405 	subseq	r0, r6, r5, lsl #8
  54:	01060000 	mrseq	r0, (UNDEF: 6)
  58:	00003008 	andeq	r3, r0, r8
  5c:	00560700 	subseq	r0, r6, r0, lsl #14
  60:	006d0000 	rsbeq	r0, sp, r0
  64:	6d080000 	stcvs	0, cr0, [r8, #-0]
  68:	63000000 	movwvs	r0, #0
  6c:	07040600 	streq	r0, [r4, -r0, lsl #12]
  70:	0000003e 	andeq	r0, r0, lr, lsr r0
  74:	00005b09 	andeq	r5, r0, r9, lsl #22
  78:	5d030100 	stfpls	f0, [r3, #-0]
  7c:	01000000 	mrseq	r0, (UNDEF: 0)
  80:	00000305 	andeq	r0, r0, r5, lsl #6
  84:	53090000 	movwpl	r0, #36864	; 0x9000
  88:	01000000 	mrseq	r0, (UNDEF: 0)
  8c:	00009804 	andeq	r9, r0, r4, lsl #16
  90:	03050100 	movweq	r0, #20736	; 0x5100
  94:	00000000 	andeq	r0, r0, r0
  98:	00005d0a 	andeq	r5, r0, sl, lsl #26
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0c3f012e 	ldfeqs	f0, [pc], #-184	; ffffff64 <main+0xffffff64>
  18:	0b3a0e03 	bleq	e8382c <main+0xe8382c>
  1c:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  20:	01120111 	tsteq	r2, r1, lsl r1
  24:	42970640 	addsmi	r0, r7, #64, 12	; 0x4000000
  28:	0013010c 	andseq	r0, r3, ip, lsl #2
  2c:	012e0300 	teqeq	lr, r0, lsl #6
  30:	0e030c3f 	mcreq	12, 0, r0, cr3, cr15, {1}
  34:	0b3b0b3a 	bleq	ec2d24 <main+0xec2d24>
  38:	0c3c0c27 	ldceq	12, cr0, [ip], #-156	; 0xffffff64
  3c:	05040000 	streq	r0, [r4, #-0]
  40:	00134900 	andseq	r4, r3, r0, lsl #18
  44:	000f0500 	andeq	r0, pc, r0, lsl #10
  48:	13490b0b 	movtne	r0, #39691	; 0x9b0b
  4c:	24060000 	strcs	r0, [r6], #-0
  50:	3e0b0b00 	vmlacc.f64	d0, d11, d0
  54:	000e030b 	andeq	r0, lr, fp, lsl #6
  58:	01010700 	tsteq	r1, r0, lsl #14
  5c:	13011349 	movwne	r1, #4937	; 0x1349
  60:	21080000 	mrscs	r0, (UNDEF: 8)
  64:	2f134900 	svccs	0x00134900
  68:	0900000b 	stmdbeq	r0, {r0, r1, r3}
  6c:	0e030034 	mcreq	0, 0, r0, cr3, cr4, {1}
  70:	0b3b0b3a 	bleq	ec2d60 <main+0xec2d60>
  74:	0c3f1349 	ldceq	3, cr1, [pc], #-292	; ffffff58 <main+0xffffff58>
  78:	00000a02 	andeq	r0, r0, r2, lsl #20
  7c:	4900260a 	stmdbmi	r0, {r1, r3, r9, sl, sp}
  80:	00000013 	andeq	r0, r0, r3, lsl r0

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	047d0002 	ldrbteq	r0, [sp], #-2
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000014 	andeq	r0, r0, r4, lsl r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000014 	andeq	r0, r0, r4, lsl r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000030 	andeq	r0, r0, r0, lsr r0
   4:	001c0002 	andseq	r0, ip, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  20:	00000063 	andeq	r0, r0, r3, rrx
  24:	05000000 	streq	r0, [r0, #-0]
  28:	00000002 	andeq	r0, r0, r2
  2c:	024d1900 	subeq	r1, sp, #0, 18
  30:	01010006 	tsteq	r1, r6

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	415c3a45 	cmpmi	ip, r5, asr #20
   4:	4d5c6179 	ldfmie	f6, [ip, #-484]	; 0xfffffe1c
   8:	72657461 	rsbvc	r7, r5, #1627389952	; 0x61000000
   c:	206c6169 	rsbcs	r6, ip, r9, ror #2
  10:	696c6e4f 	stmdbvs	ip!, {r0, r1, r2, r3, r6, r9, sl, fp, sp, lr}^
  14:	4420656e 	strtmi	r6, [r0], #-1390	; 0x56e
  18:	6f6c7069 	svcvs	0x006c7069
  1c:	415c616d 	cmpmi	ip, sp, ror #2
  20:	67697373 			; <UNDEFINED> instruction: 0x67697373
  24:	6e656d6e 	cdpvs	13, 6, cr6, cr5, cr14, {3}
  28:	4c5c7374 	mrrcmi	3, 7, r7, ip, cr4
  2c:	00316261 	eorseq	r6, r1, r1, ror #4
  30:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  34:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xe67
  38:	61686320 	cmnvs	r8, r0, lsr #6
  3c:	69730072 	ldmdbvs	r3!, {r1, r4, r5, r6}^
  40:	7974657a 	ldmdbvc	r4!, {r1, r3, r4, r5, r6, r8, sl, sp, lr}^
  44:	47006570 	smlsdxmi	r0, r0, r5, r6
  48:	4320554e 	teqmi	r0, #327155712	; 0x13800000
  4c:	372e3420 	strcc	r3, [lr, -r0, lsr #8]!
  50:	6200322e 	andvs	r3, r0, #-536870910	; 0xe0000002
  54:	65666675 	strbvs	r6, [r6, #-1653]!	; 0x675
  58:	62003272 	andvs	r3, r0, #536870919	; 0x20000007
  5c:	65666675 	strbvs	r6, [r6, #-1653]!	; 0x675
  60:	70610072 	rsbvc	r0, r1, r2, ror r0
  64:	00632e70 	rsbeq	r2, r3, r0, ror lr
  68:	74726175 	ldrbtvc	r6, [r2], #-373	; 0x175
  6c:	6e65535f 	mcrvs	3, 3, r5, cr5, cr15, {2}
  70:	74735f64 	ldrbtvc	r5, [r3], #-3940	; 0xf64
  74:	676e6972 			; <UNDEFINED> instruction: 0x676e6972
  78:	69616d00 	stmdbvs	r1!, {r8, sl, fp, sp, lr}^
  7c:	Address 0x0000007c is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	2029554e 	eorcs	r5, r9, lr, asr #10
   c:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  10:	Address 0x00000010 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000014 	andeq	r0, r0, r4, lsl r0
	...
  1c:	00000014 	andeq	r0, r0, r4, lsl r0
  20:	8b040e42 	blhi	103930 <main+0x103930>
  24:	0b0d4201 	bleq	350830 <main+0x350830>
