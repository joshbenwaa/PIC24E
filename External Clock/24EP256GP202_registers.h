#word MCU_OSCCON = 0x742
#bit    MCU_OSWEN = MCU_OSCCON.0
#bit    MCU_LPOSCEN = MCU_OSCCON.1
#bit    MCU_CF = MCU_OSCCON.3
#bit    MCU_LOCK = MCU_OSCCON.5
#bit    MCU_IOLOCK = MCU_OSCCON.6
#bit    MCU_CLKLOCK = MCU_OSCCON.7
#bit    MCU_NOSC0 = MCU_OSCCON.8
#bit    MCU_NOSC1 = MCU_OSCCON.9
#bit    MCU_NOSC2 = MCU_OSCCON.10
#bit    MCU_COSC0 = MCU_OSCCON.12
#bit    MCU_COSC1 = MCU_OSCCON.13
#bit    MCU_COSC2 = MCU_OSCCON.14
#word MCU_CLKDIV = 0x744
#bit    MCU_PLLPRE0 = MCU_CLKDIV.0
#bit    MCU_PLLPRE1 = MCU_CLKDIV.1
#bit    MCU_PLLPRE2 = MCU_CLKDIV.2
#bit    MCU_PLLPRE3 = MCU_CLKDIV.3
#bit    MCU_PLLPRE4 = MCU_CLKDIV.4
#bit    MCU_PLLPOST0 = MCU_CLKDIV.6
#bit    MCU_PLLPOST1 = MCU_CLKDIV.7
#bit    MCU_FRCDIV0 = MCU_CLKDIV.8
#bit    MCU_FRCDIV1 = MCU_CLKDIV.9
#bit    MCU_FRCDIV2 = MCU_CLKDIV.10
#bit    MCU_DOZEN = MCU_CLKDIV.11
#bit    MCU_DOZE0 = MCU_CLKDIV.12
#bit    MCU_DOZE1 = MCU_CLKDIV.13
#bit    MCU_DOZE2 = MCU_CLKDIV.14
#bit    MCU_ROI = MCU_CLKDIV.15
#word MCU_PLLFBD = 0x746
#bit    MCU_PLLDIV0 = MCU_PLLFBD.0
#bit    MCU_PLLDIV1 = MCU_PLLFBD.1
#bit    MCU_PLLDIV2 = MCU_PLLFBD.2
#bit    MCU_PLLDIV3 = MCU_PLLFBD.3
#bit    MCU_PLLDIV4 = MCU_PLLFBD.4
#bit    MCU_PLLDIV5 = MCU_PLLFBD.5
#bit    MCU_PLLDIV6 = MCU_PLLFBD.6
#bit    MCU_PLLDIV7 = MCU_PLLFBD.7
#bit    MCU_PLLDIV8 = MCU_PLLFBD.8
#word MCU_OSCTUN = 0x748
#word MCU_REFOCON = 0x74E
#bit    MCU_RODIV0 = MCU_REFOCON.8
#bit    MCU_RODIV1 = MCU_REFOCON.9
#bit    MCU_RODIV2 = MCU_REFOCON.10
#bit    MCU_RODIV3 = MCU_REFOCON.11
#bit    MCU_ROSEL = MCU_REFOCON.12
#bit    MCU_ROSSLP = MCU_REFOCON.13
#bit    MCU_ROON = MCU_REFOCON.15
#word MCU_CNENA = 0xE08
#bit    MCU_CNIEA0 = MCU_CNENA.0
#bit    MCU_CNIEA1 = MCU_CNENA.1
#bit    MCU_CNIEA2 = MCU_CNENA.2
#bit    MCU_CNIEA3 = MCU_CNENA.3
#bit    MCU_CNIEA4 = MCU_CNENA.4
#bit    MCU_CNIEA5 = MCU_CNENA.5
#bit    MCU_CNIEA6 = MCU_CNENA.6
#bit    MCU_CNIEA7 = MCU_CNENA.7
#bit    MCU_CNIEA8 = MCU_CNENA.8
#bit    MCU_CNIEA9 = MCU_CNENA.9
#bit    MCU_CNIEA10 = MCU_CNENA.10
#bit    MCU_CNIEA11 = MCU_CNENA.11
#bit    MCU_CNIEA12 = MCU_CNENA.12
#bit    MCU_CNIEA13 = MCU_CNENA.13
#bit    MCU_CNIEA14 = MCU_CNENA.14
#bit    MCU_CNIEA15 = MCU_CNENA.15
#word MCU_CNPUA = 0xE0A
#bit    MCU_CNPUA0 = MCU_CNPUA.0
#bit    MCU_CNPUA1 = MCU_CNPUA.1
#bit    MCU_CNPUA2 = MCU_CNPUA.2
#bit    MCU_CNPUA3 = MCU_CNPUA.3
#bit    MCU_CNPUA4 = MCU_CNPUA.4
#bit    MCU_CNPUA5 = MCU_CNPUA.5
#bit    MCU_CNPUA6 = MCU_CNPUA.6
#bit    MCU_CNPUA7 = MCU_CNPUA.7
#bit    MCU_CNPUA8 = MCU_CNPUA.8
#bit    MCU_CNPUA9 = MCU_CNPUA.9
#bit    MCU_CNPUA10 = MCU_CNPUA.10
#bit    MCU_CNPUA11 = MCU_CNPUA.11
#bit    MCU_CNPUA12 = MCU_CNPUA.12
#bit    MCU_CNPUA13 = MCU_CNPUA.13
#bit    MCU_CNPUA14 = MCU_CNPUA.14
#bit    MCU_CNPUA15 = MCU_CNPUA.15
#word MCU_CNPDA = 0xE0C
#bit    MCU_CNPDA0 = MCU_CNPDA.0
#bit    MCU_CNPDA1 = MCU_CNPDA.1
#bit    MCU_CNPDA2 = MCU_CNPDA.2
#bit    MCU_CNPDA3 = MCU_CNPDA.3
#bit    MCU_CNPDA4 = MCU_CNPDA.4
#bit    MCU_CNPDA5 = MCU_CNPDA.5
#bit    MCU_CNPDA6 = MCU_CNPDA.6
#bit    MCU_CNPDA7 = MCU_CNPDA.7
#bit    MCU_CNPDA8 = MCU_CNPDA.8
#bit    MCU_CNPDA9 = MCU_CNPDA.9
#bit    MCU_CNPDA10 = MCU_CNPDA.10
#bit    MCU_CNPDA11 = MCU_CNPDA.11
#bit    MCU_CNPDA12 = MCU_CNPDA.12
#bit    MCU_CNPDA13 = MCU_CNPDA.13
#bit    MCU_CNPDA14 = MCU_CNPDA.14
#bit    MCU_CNPDA15 = MCU_CNPDA.15
#word MCU_CNENB = 0xE18
#bit    MCU_CNIEB0 = MCU_CNENB.0
#bit    MCU_CNIEB1 = MCU_CNENB.1
#bit    MCU_CNIEB2 = MCU_CNENB.2
#bit    MCU_CNIEB3 = MCU_CNENB.3
#bit    MCU_CNIEB4 = MCU_CNENB.4
#bit    MCU_CNIEB5 = MCU_CNENB.5
#bit    MCU_CNIEB6 = MCU_CNENB.6
#bit    MCU_CNIEB7 = MCU_CNENB.7
#bit    MCU_CNIEB8 = MCU_CNENB.8
#bit    MCU_CNIEB9 = MCU_CNENB.9
#bit    MCU_CNIEB10 = MCU_CNENB.10
#bit    MCU_CNIEB11 = MCU_CNENB.11
#bit    MCU_CNIEB12 = MCU_CNENB.12
#bit    MCU_CNIEB13 = MCU_CNENB.13
#bit    MCU_CNIEB14 = MCU_CNENB.14
#bit    MCU_CNIEB15 = MCU_CNENB.15
#word MCU_CNPUB = 0xE1A
#bit    MCU_CNPUB0 = MCU_CNPUB.0
#bit    MCU_CNPUB1 = MCU_CNPUB.1
#bit    MCU_CNPUB2 = MCU_CNPUB.2
#bit    MCU_CNPUB3 = MCU_CNPUB.3
#bit    MCU_CNPUB4 = MCU_CNPUB.4
#bit    MCU_CNPUB5 = MCU_CNPUB.5
#bit    MCU_CNPUB6 = MCU_CNPUB.6
#bit    MCU_CNPUB7 = MCU_CNPUB.7
#bit    MCU_CNPUB8 = MCU_CNPUB.8
#bit    MCU_CNPUB9 = MCU_CNPUB.9
#bit    MCU_CNPUB10 = MCU_CNPUB.10
#bit    MCU_CNPUB11 = MCU_CNPUB.11
#bit    MCU_CNPUB12 = MCU_CNPUB.12
#bit    MCU_CNPUB13 = MCU_CNPUB.13
#bit    MCU_CNPUB14 = MCU_CNPUB.14
#bit    MCU_CNPUB15 = MCU_CNPUB.15
#word MCU_CNPDB = 0xE1C
#bit    MCU_CNPDB0 = MCU_CNPDB.0
#bit    MCU_CNPDB1 = MCU_CNPDB.1
#bit    MCU_CNPDB2 = MCU_CNPDB.2
#bit    MCU_CNPDB3 = MCU_CNPDB.3
#bit    MCU_CNPDB4 = MCU_CNPDB.4
#bit    MCU_CNPDB5 = MCU_CNPDB.5
#bit    MCU_CNPDB6 = MCU_CNPDB.6
#bit    MCU_CNPDB7 = MCU_CNPDB.7
#bit    MCU_CNPDB8 = MCU_CNPDB.8
#bit    MCU_CNPDB9 = MCU_CNPDB.9
#bit    MCU_CNPDB10 = MCU_CNPDB.10
#bit    MCU_CNPDB11 = MCU_CNPDB.11
#bit    MCU_CNPDB12 = MCU_CNPDB.12
#bit    MCU_CNPDB13 = MCU_CNPDB.13
#bit    MCU_CNPDB14 = MCU_CNPDB.14
#bit    MCU_CNPDB15 = MCU_CNPDB.15
#word MCU_FEXL = 0xF80
#word MCU_FEXU = 0xF82
#word MCU_DPCL = 0xF8A
#word MCU_DPCU = 0xF8C
#word MCU_STROUT = 0xFA6
#word MCU_STROVCNT = 0xFAA
#word MCU_DFTADD = 0xFC6
#word MCU_DFTDATA = 0xFC8
#word MCU_DFTDATA_INC = 0xFCA
#word MCU_JDATAH = 0xFF0
#word MCU_JDATAL = 0xFF2
