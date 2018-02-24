************************************************************************
* FAIRCHILD I/O SPICE DECK FOR VHCMOS (VHC) 00
**********************************************************************
*
* MODEL NAME: VHC00T.SIO
* DATE CREATED/UPDATED: UPDATED 1/99
* REVISION NUMBER: 3.1 (BENCH CORRELATED, BULK RESISTANCE ADDED)
* DESIGNERS INITIALS: PRL
* ENCRYPTED BY APT
* MODEL TYPE: I/O SUBCIRCUIT,  PACKAGE MODEL INCLUDED (SOIC-14)
* PROCESS TYPE: NOMINAL
* TEMP RANGE:25C TO 150C
*
* VERIFIED ON AVANTI STAR-HSPICE VERSION 98.2
*
********************************************************************************
* DISCLAIMER:
********************************************************************************
*
* FAIRCHILD SEMICONDUCTOR CORPORATION HEREBY GRANTS THE USER OF THIS
* SPICE MODEL A NON-EXCLUSIVE, NONTRANSFERABLE LICENSE TO USE THIS
* SPICE MODEL UNDER THE FOLLOWING TERMS.  BEFORE USING THIS
* SPICE MODEL, THE USER SHOULD READ THIS LICENSE.
*
* THE USER IS GRANTED THIS LICENSE ONLY TO USE THE SPICE MODEL AND IS
* NOT GRANTED RIGHTS TO SELL, LOAN, RENT, LEASE OR LICENSE THE SPICE
* MODEL IN WHOLE OR IN PART, OR IN MODIFIED FORM TO ANYONE OTHER THAN
* USER. USER MAY MODIFY THE SPICE MODEL TO SUIT ITS SPECIFIC
* APPLICATIONS BUT RIGHTS TO DERIVATIVE WORKS AND SUCH MODIFICATIONS
* SHALL BELONG TO FAIRCHILD.
*
* THIS SPICE MODEL IS PROVIDED ON AN 'AS IS' BASIS AND FAIRCHILD SEMICONDUCTOR
* MAKES ABSOLUTELY NO WARRANTY WITH RESPECT TO THE INFORMATION CONTAINED
* HEREIN.  FAIRCHILD DISCLAIMS AND CUSTOMER WAIVES ALL WARRANTIES,
* EXPRESS OR IMPLIED, INCLUDING WARRANTIES OF MERCHANTABILITY OR FITNESS
* FOR A PARTICULAR PURPOSE. THE ENTIRE RISK AS TO QUALITY AND PERFORMANCE
* IS WITH THE CUSTOMER.  ACCORDINGLY, IN NO EVENT SHALL THE COMPANY BE
* LIABLE FOR ANY DAMAGES, WHETHER IN CONTRACT OR TORT, INCLUDING ANY
* LOST PROFITS OR OTHER INCIDENTAL, CONSEQUENTIAL, EXEMPLARY, OR
* PUNITIVE DAMAGES ARISING OUT OF THE USE OR APPLICATION OF THE SPICE
* MODEL PROVIDED IN THIS PACKAGE.  FURTHER, FAIRCHILD RESERVES THE RIGHT
* TO MAKE CHANGES WITHOUT NOTICE TO ANY PRODUCT HEREIN TO IMPROVE,
* RELIABILITY, FUNCTION, OR DESIGN.  FAIRCHILD DOES NOT CONVEY ANY LICENSE
* UNDER PATENT RIGHTS OR ANY OTHER INTELLECTUAL PROPERTY RIGHTS,
* INCLUDING THOSE OF THIRD PARTIES.
*
* FAIRCHILD IS NOT OBLIGATED TO PROVIDE MAINTENANCE OR SUPPORT FOR
* THE LICENSED SPICE MODEL.
*
*
********************************************************************************
* SPECIAL NOTES:
********************************************************************************
*
*      THE SPICE INPUT FILES CONTAINED ON  THIS  DISK  ARE
*      BELIEVED  TO BE  VALID REPRESENTATIONS OF THE INPUT, OUTPUT,  I/O  AND
*      ASSOCIATED  CIRCUITRY  USED ON THE LOGIC DEVICE  MODELED.  THESE
*      SPICE  SIMULATION INPUT  FILES ARE INTENDED TO BE A USEFUL AND
*      BENEFICIAL TOOL TO THE  SYSTEM DESIGNER  FOR  THE  PURPOSE OF MODELING
*      BUS  LOADING  AND CERTAIN  DRIVE CHARACTERISTICS. HOWEVER, DUE TO THE
*      COMPLEXITIES INDIGENOUS TO THE MODELING OF TRANSIENT PHENOMENON,
*      FAIRCHILD  SEMICONDUCTOR  RECOMMENDS  THAT SIMULATED RESULTS BE
*      SUPPORTED BY LABORATORY  CHARACTERIZATION  PRIOR TO MAKING FINAL
*      JUDGMENTS REGARDING DEVICE TRANSIENT PERFORMANCE. FSC STRONGLY
*      RECOMMENDS THAT SPICE SIMULATION NOT BE USED IN PLACE OF ACTUAL DEVICE
*      CHARACTERIZATION.
*
*
*                       ALL MATERIAL CONTAINED ON THIS DISK IS
*                  COPYRIGHT 1999 - FAIRCHILD SEMICONDUCTOR CORPORATION
*
*
*
* CONTACT FAIRCHILD AT ATTN: LOGIC APPLICATIONS/SPICE MODELS.
* FAIRCHILD SEMICONDUCTOR, M/S 10-26 333 WESTERN AVENUE, S. PORTLAND,
* MAINE 04106 OR FAIRCHILD'S TECHNICAL RESPONSE GROUP AT 888-522-5372.
*
*               WWW.FAIRCHILDSEMI.COM
*
********************************************************************************
* THIS FILE IS A SUBCIRCUIT SPICE MODEL FOR THE FAIRCHILD SEMICONDUCTOR
* VHC FAMILY OF LOGIC DEVICES. IT IS INTENDED FOR USE AS AN INPUT, OUTPUT,
* OR I/O
* MODEL WHICH WILL ACCURATELY REPRESENT THE OUTPUT CHARACTERISTICS OF
* THE FOLLOWING VHC FUNCTIONS: VHC00
*
* THE ACTUAL FUNCTIONALITY OF THIS SUBCIRCUIT I/O MODEL IS AN INVERTING
* BUFFER.
*
* THE TERMINALS OF THIS SUBCIRCUIT ARE DESCRIBED AS FOLLOWS:
*       IN     =       INPUT TERMINAL
*       OUT    =       OUTPUT TERMINAL
*       GND    =       GROUND TERMINAL
*       VCC    =       POWER SUPPLY TERMINAL
*
**** FOR FULL PATH INPUT TO OUTPUT USE SUBCIRCUIT CALL: VHCPATH
*
* SPECIAL NOTES:
*   1. THIS SUBCIRCUIT IS NOT INTENDED TO ACCURATELY PREDICT PROPAGA-
*      TION DELAY TIMES FROM THE INPUT TERMINAL TO THE OUTPUT TERMINAL.
*   2. THE MODEL FORMAT USED IN THIS SUBCIRCUIT IS BSIM3V3, OR LEVEL=49.
*
*********************************************************************
* FULL PATH CONNECTION INPUT TO OUTPUT
***********************************************************************
.SUBCKT VHC00TM0 IN OUT VCC GND
X1 IN I0 GND SOIC14MID
X2 OUT O0 GND SOIC14MID
X8 VCC PWRP GND SOIC14CRNR
X9 GND PWRN GND SOIC14CRNR
X10 I0 O0 PWRP PWRN VHC00T
.ENDS VHC00TM0
*************************************************************************
* PACKAGE SUBCIRCUITS
**************************************************************************
.SUBCKT SOIC14CRNR 1 3 GND
R$1 1 2 0.07
R$2 2 3 10000000
L$1 2 4 1.30NH
L$2 4 3 0.50NH
C$1 3 GND 0.10PF
.ENDS
.SUBCKT SOIC14MID 1 3 GND
R$1 1 2 0.064
R$2 2 3 10000000
L$1 2 4 .75NH
L$2 4 3 0.39NH
C$1 3 GND 0.025PF
.ENDS
********************************************************************************
* TEST FORCING FUNCTIONS.  UNCOMMENT TO TEST SPICE DECK, INCLUDING .END
********************************************************************************
*
*VIN1 IN gnd PULSE 0.0 3.3 1E-9 2.5E-9 2.5E-9 6.5E-9 20E-9
*VCC1 VCC gnd  3.3
*VGND gnd 0 0
*
*.TRAN  1.00000E-11 40.00000E-09 START= 0.
*.TEMP    25.0000
*.OPTION POST = 2
*
*XDIE IN OUT VCC gnd VHC00TDI
*XPKG IN OUT VCC gnd VHC00TM0
********************************************************************************
*************************************************************************
* NETLIST
*************************************************************************
.prot FREELIB
Hb4/[GsW6f>:P%##+/Xd\%JW2d6I$.X5+6
6j)># 9x%j$.X5+91-77K(3e123_3)*2x4Y=<6)6
6j)I# 9x%S$.X5+9 +$\QPh/xLY=<6)9C*70.HY
y%s97\) 'j26u' :IXOy=++:rahT35Wi) (=$8
5C:v280SuE9$4:##4:OahZx#=-[2597X(3*\YL
)CP>sxZt%-u:]C367z![iz
Fh=vH:w[:$#<2Csxi,8*w<03yl
)CP>(xD\%jw+*7J)7z![$z
FxR:+:w[:$m$2(9$4:##TIy$2/R0,Y
e2Zv9#yAk1:j[
+KR->]J7Z![UX;$-#v:]c387*M;]Z
39<#V:=2'S$#p>/1(=j#9-[B:$,qp9!J2,_3)*2Z
39>#FrR,Z$.x5+9 :$\qpH/Xly=<6)9c*70.hy
yjJ$.x529[(jJYw3U1:T3;Wu) -P7%(3*\Y$Uqp9!J0
:$]W[0i]67*M;]XHp7K(3e123_3)*2x4Y=<6)6
6Y(70W+*7S77Y+(9M*7!jwf) (=$#m-[259[
'h)9=280sIm9 :0X#9-[b:$,QP9!j2,_3)*2z
3(X# 9XvJ$#<2p'E27Br+9!U0
:$;W2d6z$#<2P'XHt35wU) -p7%(3*\y$uQP9!j0
:$VW09[(J=J,:[h+p0.3:oAHzX#=-[2597x(3*\yl
\3w+*7Hpe# 9X/J$#<2Msx/\,WT:O. 5.DWf):VzXj+(/1:p0.+W9C*O=+33//:pXj)*//0
o1D($[Bv*xJh>/1(==JW'ba$7!yl(/JSPx<63/XIV_apH:JjP>J+(*\:)7*K-8 -)$-+e/1:T3JIy
8[3v_ALh[je;JvH>*\:S7\5<):Vz=5,#u/y)0.+M9M*7!jwOX2o6_jX(6
m+$#<23/F280sI)9[(JjyW[0i]67KVO'$ $,q_eE1:PxJ+(/25PI#M-8 -s=JI(/1:T3JIy
8= YT3XEs1:9Hj+9! :$1z($[bV*XjH>/1(==jw2%A$7!vHC/h:pX<6(:xi/_APh:jJp>j+(*\:)[
a ;%a$*!3h#(uS9h<6(UXz:9q_eE Y;E;I):25Pj#9-[B:$Ys)u]a:Zx8
9E9[(j=j,:=2'0X# 9XUV$-$=.]xOwY-to9I*O>++(/1:pXj)*/*2,_ALh$vJpXj+(*\:0[
a$o):hZxVI>S1:P0.p(9=Uyt3x)$ h9>J+9! :$.D($SBv)>J+(/1(=xRW2ba$7!34>IJ:Px<6(:Z
$88d($[bJ5<v,('1(=X-w+y0*O=+uCi/epBj)*/%2>_3X(9p't\*((e10
>h# 9x :;7\) :u280s3e93M3G*WUmpJ6y#=-8H-PxJ+(/1:T3Jj:da$*!u4c/1:Px<6(IZ
$GyQ_3e1s)HY+(/257X#$<):Hz$UP32h:p0.P(9$ YTYXE:h:pXj+9!1+$.z($[bH0HrH(/1(=Xvq
$=6 yt3xc'VS;x-+9!1j$#'K-8 -5bRI#/%:T3JU:OahZx#; *mIyx++y
o*280S3)9[(j>-w+*7+5)#FrR,Z$\T;3=P23_A,h21:pXj+(*\:(7x($ub)SXv+(/1(=Xrq
$5P*oh+3P[*t)I-)*[ 2g9q_wE1)5x-Im'257=#to):)ZhR,(/H:P0.+P9$UytVxP:JY*>J+9!1+L
T\5O):)z<]+C:1T00.+C9[3/_A3hif:5HjJp*\:57K(3e12v%<92)1-p[
k+:=2's$# 9xHY$#<2P'e2Xr%\+9MDv=\;:ra$;!5+(/1:Px<6($X4ytVx#S1vPxJ+9!1+L
T[;-8*-*$UJE2hVt33P:50*Oi+L)$*V9>Y)*[ 26yQ_pe*)5Jru(/25p<#T<):+zi;uMi%:p0.+p6
:z:Yq_cEuEsh]3eU25Pb# ;ba$5!;,m:F)*j<6('XOy=++:%7(>.q+H/Z
oS7\) uj280SLE9[(j<-o:-4LM##90% zV7%($(bypXj+(/1(=XUwI):)zJ;+>/1:p0.+p6
:;V_aIHUVh(IVjc*\h77[K-8*-Pj-+c:ujT33p:]P*oj+IP(1:*xJ)*/V269q_>EVS9$yl(/25P<8
_+yp*OJ+4#/%spir)*/%288z($ub+;X-i($v(=X-wU) -p7d29o$*p!jq
u2XzT%;h:=2';x# 9xVj'70!F4[2>mdP+%xlyt]x)/1:PxJ+9!1t$Uq_mEu)PhJ+(/25P<8
_'%A$)!;43$*s(B<63[x;/_AJh/UJpBv3C*\H77*;-8U-)<]+(s1:t3j4:]0*OH+4>2jV*Xj)*/v0
o#';-8u-0EJU>/*+T3JU:=6Uyt;xP(1j)xu49!1j$\qpH/X J0kt-/B:L
\-w+*7)97\) : 280S4C3x/\,W :O. 7#DWf):ez$j+(/1:p0.+W9C*O=+Hp//:pXj)*/v0
o1D($'Bhs$yhc$%(==3W'ba$s!V4c(Vjsb<63[XIV_apH$*EPxy+(*\:07*K-8%-s$-heS1:T3J4y
8[3v_AJhu H9=rH)*\:57\5<):TzJ3P)[vy90.+C9M*7!jwOX2o6_jX(6
>S$#<2P/XI,8\W3:1(==rwU) -p7x(3*\yl
s3w+*7V57*m;=xj5x<63IXOy=++:dahT35Q
%UXzT%yh:]c387-u(*\H07K(3e12,_3)*2z
ap7\) sh26u' :'1:T334:OahZx#M-[259[
gU:=2';x#tiY[25Bj)*[v2>_3X(9C*70.HY
kj280SiC9$4:##Uc/257<#9-[B:$Uqp9!J0
:j# 9x/j$#<2>2XVpX++:oAHzX8
5>9[(jH5w+*7+p7y+(E12>_3x(6
6+$#<2P/XzT%V3:s1:zX#9-[b:l
8Uw+*7V57\) sh2)xJx(9m*7!JQ
;2XzT%]+:=2'*b#i(/b:$\QPh/z
377\) sh280Si39J+P!JWu) -P[
'U:=2'*$# 9xF:$Hj+h/xoY=++Y
e2Zv9#kr-U0
Z9$f%472/r0h:W[26U' :]c36[
'p:=2'7>#tiY[27X<3:oAHzX#=-[f-50.H:DAJz$<6)6
> 77\) [H2H##Jp*\H07K(3e10
>#-W!=XzT%3l:]c367*M;=XoWy- :ra$*!J+(/1:Px<6($X4yt;xmUFj*xJ+9!1SL
T[;-8/-SeYH(:%et33+:50*O<++WihT(Br)*[126yQ_MeUe;$j3C/25pH#T<):)z$r,p$ Jp0.+>6
:z:Yq_mEV+5x3jm(25Pj# ;ba$s!R4c/ tsE<6(UXOy=++:%7(>.q+H/Z
o8=##+9[(j=Yw2D6Z$.x5+9mdV=\;:RA$*!j+(/1:pX<6($x4YT;XMufJ*Xj+9!1sl
T[;-8/-SeYH(:%et33+:50*O<++WihT(Br)*[126yQ_MeUe;$j3C/25pH#T<):)z$r,p$ Jp0.+>6
:z:Yq_mEV+5x3jm(25Pj# ;ba$s!R4c/ tsE<6(UXOy=++:%7(>.q+H/Z
-t#dk:B4/9[
+KR->]J7Z![IXI,8\W2d6IL
8-w+*7J)7*m;=xjP0;Wu) -P7%(>/2597X(cEJ(=$8
5>9[(j=Yw2D6Z$bJ)m9m*7!JWF)/:T35Wi)%-90.hy
yU280SPE9$4:##U(*u2>_3x(9i*)x<6)9c*5!5)*2Z
377\) '/26u' :'1(s7k(3E123_V+9!J2,_-x)*\YL
\\u:]C367\) [h26u' :]C387kvo[[ $,Q_Ee1:pXj+(/25pi#m-8/-Si;3)/1:t3jiY
8= YTrXW2 eS<;H9! :$1z($2bs(=5LEu%(==jw2%A$)!vi#i1spX<6(:xi/_Aih$%H)i-+(*\:)[
a ;%a$5!up3I*S*h<6(UXz:9q_cE*h7<uIe:25Pj#9-[B:$Ys)u]a:Zx8
9+[xi,8*w+*7J)7*m;=xi,8\wuMPh8Y#=-8h-pXj+(/1:t3jJ:DA$)!;JMuj:pX<6(:z
$GyQ_pe*y7e;4M2257X#$<):yzHUP)sh)50.P(9$ YTvX>:f+pHj+9!1s$.z($:bT5=vJC/1(=Xvq
$=6 yt-xw[ +(hyI9!1)$#'K-8%-(=34w:HST3J3:OahZx#; *mIyx++y
e2Zv9#kr-v0
Z9$f%472/r0I:%[2T##vRx[26U' :]c36[
4#wSXzT%33>9[(J=5,:M4'87*M;=XI,8*W<03)L
\\J:]C387*m;=xi,8\w2D6Z$\T;3=P23_APh21:pXj+(*\:97x($ubTpHj+(/1(=X5q
$5P*oh+I#U :(bJ)*[%2g9q_wE%YPhJ3c/257b#to):SZE]+(S1:P0.+)9$Uyt5x#SJv*xJ+9!1YL
T\5O):)zHUJM/hJ;0.+39[3/_A3h:*TSXYu#*\:77K(3e12v%<92)1-p[
k e9$4:##tiY[26U' :]c387KVO[[ $,q_3EJ:PxJ+(/25P$#M-8u-(xV+(/1:T3Jhy
8= YTvX>(UHpi-+9! J$1z($$bJ9Xv+M'1(==-w2%A$)!],(/h:pX<6(2xi/_AHh(hy*>j+(*\:9[
a ;%a$s!VjwU1v5E<6([Xz:9q_mE/t(jJlc(25P=#9-[B:$Ys)u]a:Zx8
9+(xi,8\w2D6Z$.x5+9$4:##90% zV7%($ubJpXj+(/1(=X5wI):)ziji(/1:p0.+)6
:;V_aIH:F)7xuU(*\h57[K-8*-5$JI(U%:T33U:]P*oh+,#/1vPxJ)*/J269q_)EFv9>y+(/25P$8
_+yp*OJ+iW$U:*B])*/ 288z($ubs(i;+E'f(=X3wU) -p7d29o$*p!jq
u=%26U' :]c387*M;=XI,8\WUmpH8y#=-8%-)xJ+(/1:T3Jh:da$s!u+>/1:Px<6(2Z
$GyQ_>e/eS=jJC/257B#$<):TzB5+>/UJp0.PC9$ YTvX#(1:*Xj+9!1y$.z($2be*$YL(/1(=X5q
$=6 yt;x>$*)P>-,9!1h$#'K-8u-)Iu3(S%ET3Jp:OahZx#; *mIyx++y
o[H$#<23:U2t##TIy[26u' :O. 7#DWf):VzXj+(/1:p0.+W9C*O>+4(:1:pXj)*/j0
o1D($[B:*b3Ic$%(==3W'ba$7!uIe2ujsb<63[XIV_a,H$F:P>J+(*\:97*K-8 -sb-heS1:T3J4y
8[3v_APh:/)(evHW*\:77\5<):HzHv3W(/y(0.+39M*7!jwOX2o6_jX(6
mz)7\) [JE$#<23:u26U' :]c387KVO[[ $,q_eE1:PxJ+(/25PI#M-8 -5<JI(/1:T3J4y
8= YT3X)/f+pBUu9! H$1z($'bypXU,Cu%(==3w2%A$7!;J#/1VpX<6(ixi/_APhs/J9>Y+(*\:0[
a ;%a$;!u+w'F+($<6('Xz:9q_#E*:(b]4w225Pb#9-[B:$Ys)u]a:Zx8
9+ixZt%33>9pZ$#<23:%26u' :O. 5#DWf):VzXj+(/1:p0.+W9C*Oi+PW//:pXj)*/v0
o1D($(BS7hV3($%(==3W'ba$7!RU3'*YPj<63/XIV_ajH'FEPxy+(*\:07*K-8F-0jyheS1:T3J4y
8[3v_APh2ve0i3u#*\:57\5<):Hz$r,p$ J;0.+C9M*7!jwOX2o6_jX(6
mz97\) [/j$0\W2d6z$.X5+9MDvB\;:ra$*!J+(/1:Px<6($X4ytux3$1SPxJ+9!1+L
T[;-8f-)=viM/*Jt33P:50*O=+4C[%T9X;)*[126yQ_We%e;XjL(/25p<#T<):ez<;L)sh:p0.+p6
:z:Yq_3EJ+;<upc(25Pb# ;ba$7!54#I*h5E<6('XOy=++:%7(>.q+H/Z
o8J# 9X y;7d :]C387*m;=xOwY3 o9I*O>++(/1:pXj)*/*2,_APh'v:)Xj+(*\:0[
a$o):hZ$J,P/%t50.p39=Uyt-x)/1t;b;U9! h$.D($[B)(EJ+e/1(=xRW2ba$7!yIc2HvPx<6(IZ
$88d($(bTpi-,p$j(=X-w+y0*Oe+J($%e0i5)*/%2>_3X(9p't\*((e10
>.uW2d6I$.X529$4:.#tiY$2>mdP2%xlyt3x)/1:PxJ+9!1Y$Uq_3E +5xJ+(/25P<8
_'%A$7!;u>s1:pX<63[x;/_Auh[ e9>j+(*\H77*;-8 -5HY+(/1:t3j4:]0*O=+H)ij:pXj)*/v0
o#';-8F-9$3lmI*+T3JU:=6Uyt]x)2 vs<u49!1j$\qpH/X J0kt-/B:L
\*L:]C367*m;]xi,8*w2D6i$\T;3]P23_APh21:pXj+(*\:97x($[bH0Bj+(/1(=Xrq
$5P*o=+3c:H:PxJ)*[ 2g9q_cE h;$y+(/257=#to):hZbVl(/1:P0.+P9$Uyt3x)2VYPxJ+9!1+L
T\5O):ez$5PEuvT00.+C9[3/_A,h2jH*JrJp*\:57K(3e12v%<92)1-p[
kt#9$4:.#tiY$26U't:]c367KVO[$ $,q_eE1:PxJ+(/25PI#M-8%-s<-+(/1:T3J4y
8= YT-XW2/VpXj+9! H$1z($:bs5J5L(/1(==3w2%A$5!viE/1:pX<6(ixi/_A3h'%+9Xj+(*\:0[
a ;%a$)!5U#2%E9j<6('Xz:9q_>EJj;$-,)U25Pb#9-[B:$Ys)u]a:Zx8
92[xZt%3iM92Z$.x529$4:.#90% IV7%($sb:pXj+(/1(=XUwI):Jz<vi(/1:p0.+p6
:;V_a3HIFS5hJ+(*\h77[K-8u-0EVU>/1:T33p:]P*oj++(:H:PxJ)*/V269q_mE1:)>J+(/25P<8
_+yp*OH+uWuv:)BU)*/%288z($:bJ(Jr+>'*(=X-wU) -p7d29o$*p!jq
u]u280sp(IXzT%3Im9$4:.#tiY$2>mdu2%xlytyx(/1:PxJ+9!1t$Uq_wEV)9xJ+(/25P<8
_'%A$*!]Lp21:pX<63[x;/_APh[jV7BY+(*\Hp7*;-8*-(i5+(/1:t3j4:]0*O>+,Eij:pXj)*/v0
o#';-8 -)bV4([/jT3JU:=6Uyt3x>'/+P=VU9!1j$\qpH/X J0kt-/B:L
\*4:=2'7JvwO=xi,8*w2D6i$\T;c]P23_ALh/1:pXj+(*\:(7x($[b:9<5+(/1(=Xvq
$5P*o=+Uw'FYPxJ)*[12g9q_3EJ+)>Vl(/257x#to):hZxy,)/1:P0.+>9$Uyt3xcI*)9xJ+9!1SL
T\5O):HzXj4pu1s50.+C9[3/_APh/1+0JjiC*\:57K(3e12v%<92)1-p[
ktc9$4:.#tiY$26U't:]c367KVO[$ $,q_cE/:PxJ+(/25P$#M-8 -7<-+(/1:T3J4y
8= YT3XM'/VpXj+9! H$1z($'bH7e5L(/1(==3w2%A$7!-iE/1:pX<6(ixi/_APh2j+9Xj+(*\:0[
a ;%a$;!5h3Su+(<<6('Xz:9q_#EJY7>;4wI25Pb#9-[B:$Ys)u]a:Zx8
92:xZt%3H#9pZ$#<23/v26u'T:O. 5.DWf):VzXj+(/1:p0.+W9C*Oi+4M21:pXj)*/v0
o1D($SBE*<5+(/1(==3W'ba$7!3he[%vPx<63/XIV_ajH$*YPxJ+(*\:07*K-8H-;>Rh(/1:T3J4y
8[3v_APh:%s0X3iC*\:57\5<):HzH-ip/ s50.+C9M*7!jwOX2o6_jX(6
mI97\) [uS$0\W2d6I$.X529MDvB*;:ra$*!J+(/1:Px<6($X4yt3x(2VYPxJ+9!1SL
T[;-8 -5i-,)/1:t33+:50*O=+Hp:hs*Xj)*[126yQ_3e1V;$j+(/25pH#T<):HzBrJM21:p0.+>6
:z:Yq_3E1:0<;+>'25Pb# ;ba$7!J+PIu:)b<6('XOy=++:%7(>.q+H/Z
-t#dk:B4/)[
+KR->]J7Z![$Xd\%#tiY[0
:=# 9x S$.X5+9 :tJ#9-[b:$,QP#e%(=$#m-'byt35q
%% 280sp>9.MJ7U49! +$\QPh/z
o8=#VrXxZt%3i:]C387*m;=xOwY3 o9I*O>++(/1:pXj)*/*2,_A3huUe5>j+(*\:)[
a$o):SZj]l)//j;0.p(9=UytRx($Vv(I-49! :$.D($UB);E5+m'1(=xVW2ba$s!54#I*h5x<6(:Z
$88d($ub+0BjPWuf(=X;w+y0*OJ+4p'1H(J])*/U2>_3X(9p't\*((e10
Z0\;<90MXI8
X<03aM%#kr-%2h##VrXxi,8\w2D6il
\*3:m4'$4\w2D6i$.x529mdV=*Wf):VzXj+(/1:p0.+W9C*OJ+33'1:pXj)*/v0
o1D($UBE7$y+(/1(==3W'ba$9!-h)SH:Px<63[XIV_a3H:1vPxJ+(*\:07*K-8/-)I;h(/1:T3J4y
8[3v_A3h'jT;i;L)*\:57\5<):)zB5J#$UV90.+C9M*7!jwOX2o6_jX(6
mI)7T! 9[(J>3W2d6I$.X529MDv=*;:ra$*!J+(/1:Px<6($X4ytRx3'1:PxJ+9!1YL
T[;-8v-0$Y+(/1:t33u:50*O>+,(sh:pXj)*[%26yQ_)e1VpXj+(/25p$#T<):VzJ;H(/1:p0.+)6
:z:Yq_cE%E*>R+P$25P=# ;ba$5!-,eSV:0I<6([XOy=++:%7(>.q+H/Z
o6=#VrXx787*m;]xi,8*wuMPh67%($sb:pXj+(/1(=XUwI):)zJ3u(/1:p0.+p6
:;V_a3H( Y*xJ+(*\h77[K-8J-5$5le/1:T33p:]P*oj+I(S1:PxJ)*/V269q_>E/ts$J+(/25P<8
_+yp*OJ+u)$fTS>5)*/%288z($ubJ9i]JMsj(=X-wU) -p7d29o$*p!jq
u]%2wrsW!=XI,8*W2d6I$\t;3]xlytyx(/1:PxJ+9!1t$Uq_mEuh5xJ+(/25P<8
_'%A$S!]P)s1:pX<63[x;/_AHh'jy*>j+(*\H77*;-8U-)XY+(/1:t3j4:]0*OH+iWuj:pXj)*/v0
o#';-8u-5$u,wUHYT3JU:=6Uyt;xc2*E(jyh9!1j$\qpH/X J0kt-/B:L
\\3:m4'$4\w2D6Z$.x5+9mdV=\Wf):VzXj+(/1:p0.+W9C*O>+,(:1:pXj)*/j0
o1D($[Bhshyje$%(==3W'ba$7!y3mS/vsb<63[XIV_apH/ EPxy+(*\:07*K-8 -sIVheS1:T3J4y
8[3v_APhu*y(X;L>*\:77\5<):HzJUHW/UV)0.+39M*7!jwOX2o6_jX(6
mz77T! 98z$.X5+9$4:##90% Z$,q_eE1:PxJ+(/25PI#M-8H-;xV+(/1:T3Jhy
8= YT3X3u/V(>Uu9! H$1z($[bVSJYiEu%(==3w2%A$7!jP#/1VpX<6(ixi/_APhu*s9>Y+(*\:0[
a ;%a$7!;j)$1)*h<6([Xz:9q_3Eut9IJ3e:25P=#9-[B:$Ys)u]a:Zx8
9+'xD\%##+9$4:##TIy[2>MDp+9I*O>++(/1:pXj)*/*2,_ALh(1spXj+(*\:9[
a$o):hZ=;Ie$Ht50.p39=Uyt3xeUuv)>;U9! h$.D($[B:7EJ+e/1(=xRW2ba$7!;j>2HvPx<6(IZ
$88d($[b)($U+Ms/(=X3w+y0*O=+3W2*:S>v)*/ 2>_3X(9p't\*((e10
>#RW+*7+)7\) S 26U' :]c387KVO[[ $,q_eE1:PxJ+(/25PI#M-8u-(xV+(/1:T3Jhy
8= YTvX>(UHpi-+9! J$1z($$bJ9Xv+M'1(==-w2%A$)!],(/h:pX<6(2xi/_AHh(hy*>j+(*\:9[
a ;%a$s!VjwU1v5E<6([Xz:9q_mE/t(jJlc(25P=#9-[B:$Ys)u]a:Zx8
9+:xD\%#TIy$280S4>9$4:##90% zV7%($sb:pXj+(/1(=XUwI):)ziji(/1:p0.+)6
:;V_aIH:F)7xuU(*\h57[K-8*-5$JI(U%:T33U:]P*oh+,#/1vPxJ)*/J269q_)EFv9>y+(/25P$8
_+yp*OJ+iW$U:*B])*/ 288z($ubs(i;+E'f(=X3wU) -p7d29o$*p!jq
7W[p77T! 9[(J>3W2d6z$.X5290MX=8
X<03aM%#kr- 2h##VrXxi,8\w2D6il
\34:m4'$4\w2D6Z$.x5+9mdV=\$:RA$*!j+(/1:pX<6($x4YTvX(/1:pXj+9!1yl
T[;-8*-*e3+([j:t33u:50*Oi+L#[1:7$j)*[%26yQ_)e1eSHv+(/25p$#T<):yzX]3>:1:p0.+)6
:z:Yq_mE E;h-I(I25P=# ;ba$s!3,#:%SP<<6([XOy=++:%7(>.q+H/Z
o7H#VrXx787*m;]xi,8*wuMPh61#=-8h-pXj+(/1:t3jJ:DA$0!5+(/1:pX<6(2z
$GyQ_#eh)pHj+(/257B#$<):ez>;+>/1:p0.PC9$ YTUXE/h:pXj+9!1y$.z($$bVp>j+(/1(=X5q
$=6 yt-x(Su)sj;39!1h$#'K-8%-P>;3mUu)T3Jp:OahZx#; *mIyx++y
eMDv0%wUmpH61#TUm02309)f)/e$%')t)%+$\TfuMP*s79);b8d8_;x36
:2[1*90%AJ$#t#Ump*77\%<o. YX#203AHzi<6(sz
$$,C  )12,4\2-'bst3jJ:%CaY=+39!1Tl
Td=%)\JzXj+(/1:p0.+E9E<YB<6($xZ[/QP98 T$#2$ *a:L
T#!()u))!5WR5aYZ>;I9!1E$r0(*UB:*bJ+(/1(==yQ
$0>*==+j)(1:PxJ)*/%2<%h+-!f-)Xj+(/1:t3jP:4 *p!vuC2z
$MBQ+h/U+)>#\M)\Jz$vH(/1:p0A+(9,)X_.lHSVvPxJ+(*::P[
aM()u-sIy)*/J28,4(3*\:;7dy /A:z<#;6X *p!-J([z
$v+Su-!/-0Xj+(/1:t3jP:%-'puQ6CeU:pXj+(/2$pX#;6X 4YH<_(iz
$v+SuI)1-pB#) 51*p!3w9X=/Y3rXp/1:pXj+9!1J$YZ![)1-0<8
_:\0;J_3xc*::07[+-'X/P_;)*/*2X=q+y
8x;A9Q+h'v2M0S$-/x;7_jw''AHl
Tdmz)12VU0((96 /uQ3M/1268Xd-!u-PxJ+(/1:T3JUy
8xi:u0((e J$U'(396UD_3IP6
:pwd:(*(B+7jJ+(/1(=x-W+J=ajm'((ev2[YZ/-/XAV9g;-[25P<8
_:KPU[-qU9!1+$sC2-! -pXj+(/1:t3ji:]>l>_;xP6
:IV40=%[a:ZxV4)[Xiv40=%'A:zXju)sj26yCFfk3*p!-woY.MJ_Jxc/%0
o.Z/[* *70a+w9$U[-<U-[257x#t65g*P!3Wo*i'g_Jx(2Z
$G,**'/AVt3j,:-2'GXQuE9#uYi+3#u25pi# ,) 0
oSL((E1:P$;UP9></Uq3H'V(==JW2-A:zejL#9$//Uq+HI/Ss[
a9,)1-)IRh:o#u,_jXC9>!/mQPhu%(==jw%nPdy=+3c*\hP[
a/Z-.*(0.p39>!V,qjH$257=#/Zbi*(!u)*[ 2[G[t25a:Z$8
_%R2*p!5w%r>*70.+w9EiG8S((9>\y=<63[Z
$\%<(*[bVpXj+(/1(OXjw.X *=<++(/1:pXj)*/ 2M%3=-[25p>8
_.X%*==++(/1:pXj)*/%2\13(*'B+9jJ+(/1(=x]WR- *=<+p(/1:PxJ)*[H0
orgp-!*-PxJ+(/1:T3JI:57*==+HC/1:pXj)$/v268S(3/1:l
TG2')1-pX3+#[xij1Q+h/1H9e3w%X$*p7*22)10
o%%)6Kah$)S#-[b+$1:(39,\yx8
_9JAH$0%9-ix43_JWir[*7[
aMi)\hZ>-+(/1:P0.pe9c48_3xe9ILYX#=f=AHl
T#=I)123u\(39iMP_-+:d4:yx8
_f0=*p7X!')123R0((9cMX_JQ
$r=:yx#m'/A:$,[d<)12,12K-/BhL
T%5OBC*p7X5obc*=b++(/1:PxJ)$/u23RS)-/x4\%<((6
:23Gsp-/X4m%3((6
BOwY<=:O. 7#[W+O.U$,<Y9raS;7s59jaj07KV[o. YJ#y9y07W#Q3h[z
$$S[tuMP*57\v!O. y=# 4bmdV_JW Me*7!u)*/H0
o7%#+xahZ=yI9!1t$Uc  ) -)><6($X ,sQPhu25pi#;FKahZ=;,9!1tL
T48-'b+t3jJ:=>>Y=+498 T$#2$ *a:$Rj(p(v0
or[(3E )70.+#94/y$+hm(257E#!%)1-PjRW6x;:yx+jc(V0
oG3(3E1h57wU-!H-;hy+(/1:T3JU:4U*7J+PM6
:]s-q6PEuj9xJ+(/2$Px#M()u-PEu)*/*28,4(3*\:;7dy /AHz>r4Y
8x <%3((EF+*$#;6X%*=$+J3'1:pXj)*/ 2v+S+I)1-7=;q
$%-'7UqIH/ vTtJI:%-'5uQ63e1:pXj+(/2$pX#) 51*00.+p6
:(J10(*[BYPxJ+(/1(=x3Wob4/yx+hwIXp/1s(eEJ(oxVW'/a:ZbyQ
$93:y>+U#*\h)70P-[by)<<6(ix;A9Q+Y
8,(j1Q6MefJ5Xj+(/25pB#$3)12gbqpy
8p4A_.JhsfTpXj+(*\:;7dm[)U-;X;)*/f2:YZM-$/:L
T*5INA5)!3H)/1:pX<6('xI:U0((E1);h;WiYa:ZEV3e96ud_U+Y
8xpwd:(*(BS5=J+(/1(=x-W+J=ajm'((ej)0i#/OB>*p7G;<kp*p[
aW%%0ax_Y)*/v2[4s(eE vT3J4:]>l>_Jx>IZ
$6yCFfk *p!jP)(xiv40=%'A:zXj+>sxIV40=%-ahT3J4:%6D\%Q+h[1sl
T*k%-2HY=+4p*::*7*K%-2jy=+j9!1t$.9$Z)1-Pb#;9R7;YX++Miz
$G,**'/AHz$]u9!1+$-<2'/A)*!-3:.0*7!u,c*\:(7\8-[B:*>8
_%.A:zXj+>u/+$slkI)/-)0.P(9$/YX+HM:v26-ZM-[Z
$>*Q+hi T97k8<da:Zb#/Zb.*s!y49! h$s2;0)U-*<<63[z
$[o0V-[257X#/z%I*5!rPM*\Hp7GD<RAJz<339! :$sW$2]=*p!5LWiz
$[,<((eh+$s%/-$25pi#O256'yx#/t)10
ors)-! -7=J+(/1:TtJ+:47HY3;X>:1:pXj+9!1H$gSPf)/-0H])*/f0
oGsU-!u-5bR+(/1:T3JU:0=hy$+Ue'25PE#![[A57!34(/1:pX<63$z
$\s3(*$bV;<j+(/1(=X-w'XAJz=])$//268s(#/12[%[((e1:7J5LY
8xIJ1q+H/1:*EJI:k7iY=+iEs25p>#t ]a:Zx3W r2p[_3Q
$9e'H_JW'JAH$g:(W*\J*7<[-/be0[
a)FOa+$u%((9CL8_3wida50!]jw/1:Px<6c2Z
$$UX -UXL3_jwfR[*77%M-/Z
$3u\(39iMP_;pH(H2,Rj((9iMg_JQ
$d4;yx#=r-A:$U$f-/XL\sQ+h/ s9i8
_I0>*p7%$()1-Px3hwIX4gxq+:R=!/_jq
$d=!/_JWFYPU,_-+(9C3v9x((9iMJ0q+y
8Cmj0Q+:R,'7_jwI47HYX8
X9=pu$9$F36
B(8YZW<03jL
!z![k,'$9$F#9pZ$m$2+9$4:##TIy$0
'45U:%[280spPIXI,8\W2d6I$9$fc6
e79=# 9x +07*M;]Xd\%\W2d6z$.X5290MXh8
X9=pu$9$F#6
BOwY<=:O. 7#DW+O.U$,<Y9raS;7s59jaj07KV[o. YJ#y9y07W#Q3h[z
$$S[tuMP*57\v!O. y=# 4bmdV_JW Me*7!u)*/H0
o7%#+xahZ=yI9!1t$Uc  ) -)><6($X ,sQPhu25pi#;FKahZ=;,9!1tL
T48-'b+t3jJ:=>>Y=+498 T$#2$ *a:$Rj(p(v0
or[(3E )70.+#94/y$+hm(257E#!%)1-PjRW6x;:yx+jc(V0
oG3(3E1h57wU-!H-;hy+(/1:T3JU:4U*7J+PM6
:]s-q6PEuj9xJ+(/2$Px#M()u-PEu)*/*28,4(3*\:;7dy /AHz>r4Y
8x <%3((EF+*$#;6X%*=$+J3'1:pXj)*/ 2v+S+I)1-7=;q
$%-'7UqIH/ vTtJI:%-'5uQ63e1:pXj+(/2$pX#) 51*00.+p6
:(J10(*[BYPxJ+(/1(=x3Wob4/yx+hwIXp/1s(eEJ(oxVW'/a:ZbyQ
$93:y>+U#*\h)70P-[by)<<6(ix;A9Q+Y
8,(j1Q6MefJ5Xj+(/25pB#$3)12gbqpy
8p4A_.JhsfTpXj+(*\:;7dm[)U-;X;)*/f2:YZM-$/:L
T*5INA5)!3H)/1:pX<6('xI:U0((E1);h;WiYa:ZEV3e96ud_U+Y
8xpwd:(*(BS5=J+(/1(=x-W+J=ajm'((ej)0i#/OB>*p7G;<kp*p[
aW%%0ax_Y)*/v2[4s(eE vT3J4:]>l>_Jx>IZ
$6yCFfk *p!jP)(xiv40=%'A:zXj+>sxIV40=%-ahT3J4:%6D\%Q+h[1sl
T*k%-2HY=+4p*::*7*K%-2jy=+j9!1t$.9$Z)1-Pb#;9R7;YX++Miz
$G,**'/AHz$]u9!1+$-<2'/A)*!-3:.0*7!u,c*\:(7\8-[B:*>8
_%.A:zXj+>u/+$slkI)/-)0.P(9$/YX+HM:v26-ZM-[Z
$>*Q+hi T97k8<da:Zb#/Zb.*s!y49! h$s2;0)U-*<<63[z
$[o0V-[257X#/z%I*5!rPM*\Hp7GD<RAJz<339! :$sW$2]=*p!5LWiz
$[,<((eh+$s%/-$25pi#O256'yx#/t)10
ors)-! -7=J+(/1:TtJ+:47HY3;X>:1:pXj+9!1H$gSPf)/-0H])*/f0
oGsU-!u-5bR+(/1:T3JU:0=hy$+Ue'25PE#![[A57!34(/1:pX<63$z
$\s3(*$bV;<j+(/1(=X-w'XAJz=])$//268s(#/12[%[((e1:7J5LY
8xIJ1q+H/1:*EJI:k7iY=+iEs25p>#t ]a:Zx3W r2p[_3Q
$9e'H_JW'JAH$g:(W*\J*7<[-/be0[
a)FOa+$u%((9CL8_3wida50!]jw/1:Px<6c2Z
$$UX -UXL3_jwfR[*77%M-/Z
$3u\(39iMP_;pH(H2,Rj((9iMg_JQ
$d4;yx#=r-A:$U$f-/XL\sQ+h/ s9i8
_I0>*p7%$()1-Px3hwIX4gxq+:R=!/_jq
$d=!/_JWFYPU,_-+(9C3v9x((9iMJ0q+y
8Cmj0Q+:R,'7_jwI47HYX8
XUmp(37KVO'[28\tk:R2Pt,Qi#973tDQup9mdX\T;-UXpT8Z#0=a)Z=8
_:k=i>md(C9[Dh\t;-[xZ_9KVO)12jm4(3e*(=XYq
$9I78%QPh[hst3jJ:D8Zj_3X>s25pi#;iKahZj<6($X 3sQPh[Uet3jJY
8E<YB+49!1T$#G*-[b+tT3J:=g;J0q+:01*0erq
$0=*7!333*\:;7$f-2BYsE<63(XM[_Jx(UV2<%H+-/Bt5ERQ
$4 *7!Jpc9,jy3yx#:H:PxJ+9!1j$g;(3ubHS[
a\m-a50!;U)/1:Px<_(/X4P_;x((*(=xuW+re*70.+#9pPjXQPhsv+l
T#;6x *P!]4e2X <%-(*2bT7Bj+(/1(=X3wO\7:,_jX3[U0
oY923daSZx3l981S$y92CDA57!j+(/1:pX<_(/x(j1j(p*\:0[
a) 53*==+h(/1:PxJ)*/ 2V9$f-/BY(<#Y<57**!5)$//2gxq+H'H0
o70+-SBj;0.p>93HY=+H>i25p<#$zBA:l
TW) 5A5S!]uC/1:pX<6('x;7_JW''ahL
Tdmz)\Tz>]J(/1:p0.+#9p4x_;X#/U(=X]w;%04yIV+y
8$3,oQ6>e y9Xj+(/25pB#t;d3*P!J3#:u2,8q+H(/)*7'kA)*:l
T#Y0j_*=E+Ic[1:PxJ)*/%28D[/ m6*p!53p$xav9G((9> /sd((6
:2[yz/[)h(=Xrw%W7**!3l9!1+$.g=u)1-)<8
_2%8/3s3((e1H9e#TOw3L[BQ+h/1:)>#toW3l[-qp9!1+$y'VrXA:z=jiY
8$u[-<P-[b+00A+E9$U[-<U-[BtT3Jj:]-;a_Jx('X t,S$-/b:S<8
_'R$>GXQPh2fJt3j4:-2'GXQ3Ee%)$*Z(3E*E50.+w9[<y=++eSZ
$[*Q+h/1:)Jv4:k#u,_vX>*\Hp7*F-/bySHrw2-04y=8
_U.A:z<3J)9m</Uq+H'XAa9T(mEH+T33p:kG W_;XEi257=8
_%N3DY=<63/xaAy%(CevHS0.P(9>!/,Quhi )t33+:k,;6.[((ejV(<8
_%R2*p!Y4:kIaYi<6($xf61'2-/Xa _jq
$07(y33x3[1:PxJ+981:$gSP-!U-)Hj+(/1:t3jP:47H3_vXp:f(=X]q
$47jy3;xc'V:PxJ+9!1j$r[p-2Bj*b<6((Xmx=Q63e +pXj+(/257i8
_rk *=i+L#i1:pXj)*/%2G%Quh[f(OXvw2Y7*;xJW%X=*p!j+3ujVl
T#t 5a:ZxJ+e(1S$sST-[bs*><6(sxIJ.q+H/ 2J,<Y%) 0
o742!)12GDQP:4_*(0.uE92\YX+,p6
:(3\q4:DI*p7x=+) 2,Uq6PEFt(xJ+(/255$8
_:dczyj#=f)123,\(39i4yx8
_fD[*77%!()uhZEyWI01*p7%!')10
oU$$-/XL\-Q+:d4/yx#=rkA:zX3i)$z
$,RG((9i;P_Jx(/ Y(<#M'/a:$,[D<)10
oU[d<)1238DKi)%:P7x5OBC*p7%! *a:L
Tx! *A:$,W23)12,gSP-/z
->md)f9MDv=*w2o.u$,<y9RAs;7S59JAJ07kv[O. yj#Y9Y07w#q3H[Z
$$s[TUmp*57\V!o. Y=# 4BMDv_jw mE*7!U)*/h0
o7%#+XA:$uC  )%-)0.+W9p4[_3XM*\:(7D=%)\jZxJ+(/1:P0.+e6
:2'*Qu9!1T$#G*-[2$7i# Z57(yx#!()U))!5q
$94;y$+lm:25PE#![)\)ZxyU(/1:P0.pe94aY33XW2f:pXj+9!1Jl
T92A/A5;!v+(/1:pX<6([x]7_jX>'%y$G-((E1)0hyQ
$4u*=b+h>21:PxJ)$/12MJ0(*sbV0>j+(/1(OXjwI/A)zJUL9!1yl
T\=7) (=X]wo\7:yx+4:%-'7_Jxc$1h$y92C)\sz<j+(/1:p0.+36
:2V+s+i)\jZjJ+(/1:P0a+(9PpJ=X(>*::07dy 'C*p!juY
82'GXQ+h[x(j10(*ib+pXj+(/1(=X-wob4/yx+4P9-uG%QPh'2$p<8
_:51*570+-U25PI#f3)12gOZ((E%+L
T#\9X=*p7[P-/x;5_3wODG*p[
a;i-a:$8dkI)U)pX#t;dg*=j++(/1:PxJ)*/%268Xf-/Bh5[
aWiYah$8Z*-[/+$+t[t)\ez<33(/1:p0.+C6
:z 1g20Ya:Z<#/OB>*p7G;<kp*70.+p9> /S0(c*\:0[
a/!xa57!J+(/1:Px<6(:Xi[,K(Mev26yCFfk *p!jip2 0
o.D#[r>jyx++('Jv97*;!-iAX_Jxc9p3WRS((e%:57*K%-2hy=<_($Z
$69GF9'AHt33+:]-;A_jX39p(3%[((e1y$1%TA51**0.+#6
:/T%[+-'H2F9qjHUF)T3Jj:=#*77g8-/B:Px53cIZ
$[*zm-ubJ00.P(9$/yx+,(SF26-zm-/b+)H;wu.a:Zhu4)6
:OF9X((E%2[OZv-[B)50.p(9>!vmQPhu%(==jw%n3dyI<63[Z
$[od=-$bTt33P:kGu3_UXW*\H77G\']$;YX+H:kI(YX+HY
8>L[_3)*/*2'.[5 )12[DQP9! H$RS)-! -*Xj+(/1:tTj+Y
8x]J=q6PE1:PxJ+(/25P=#\ [i*70.+e9,'5_.pH/1:PxJ+(*\:5[
aWR5 *=b+4)U1:PxJ)*/F2\-3(*IBhPxJ+(/1(==yWRK *=I++(/1:PxJ)*//0
o7[2-! -9bJ+(/1:TtJ4:]6'y=J+(9>'g_Jx(/ :;=8
_2X=*p!j+32fH$sST-/xIJ.q+:XI(<sQPY
8E'h_3Xp9=\y=#\T)12Tdqpy
82L>_rwira:$U% -[X4,_.Phs%:pXj+(*\H*[
aWid[*7!yWfRA:$,% -[xl,_JQ
$rczy=#=r/AJp7x!()123r[((6
:4\1q+:R4/YX#MR-a:$,[+-/z
$,1j((9i;a9q+:d=!/_Jx39i3V9X((6
:4:YZM-!%-PxJ+(/1:TtJ3:R4't_jwI07(YX#=.X *p[
aWi47hyx8
XUmp(37KVO[$ $.KV<9I(<0%(>(x':0:(CixOw-kvo)u2<0'K!M[*s!3Q
$9>;6\t;-'xZW4KVO) 28az90%A:$%to-[bTt3jLY
8xLh#S((9C78%Quh:25pi#;IkAHzJ<6($z
$v,G(*'b:pXj+(/1(=XYw7.AJt3jJ:=>>Y=<_3$xza1s)-/Z
$$rJ(mU/-97$$-2Bvsh<6((XMX_.3H/HjPxJ+(*\h*[
a!%)\hZI5,(/1:P0.+c9-'dXQ6#e/:pXj+(/25p=#\3)1-)B-HY
8,JYX++Mi/V$g;(*'by)$j+(/1(OXjw.U3*=>+lPS1:PxJ)$/10
oUJ(mEut*0.+)9[l'_3)*/F2v+S+-/b+$y923)1-5ijPY
8pPjBQ6>ev:pXj+(/25p=#;6X14Y3-XM/1:pXj+981:$y923DAstTj4Y
8pPjBx((e1J$0S$()1-77<2'-A50!r+(/1:pX<6('x /r0((EV+L
T#Y<57*7!-)$/V2gxqU:-1*s0.+w93hyx8
_:5GuYX+up9,(j1Q+:5 *p7[u-[z
$vu2((9P4X_JW;%04YJ;+(9$3,Oq6mE1:PxJ+(/25Pb8
_:]64x_jX3'x4:_3W;b;*7hRQ
$\.\ _.,HI )PxJ+(*\:57\['k7D:_jXp9> /Sq+:KPU[Yqp9!1+L
T#/ob>/yb<6(IXah%Q63e1:pXj+(/25pH#t%rm*s!RQ
$]P7X,gp-/B:)<5p:]p7x,Gu-/b:pB5L)9$ h-%/[)1-57D5007*P!-+c6
:I/S0)3) (oxuW2b>/Tbqp9! :$.9$Z)1-77D)Fx=*P!Jhy
8=L6/[+-s25pe#F9X=:YBYw,BATzJ]39!1T$#l(36
:AF_Jx(/1YsbRW%.04yj+UP*\hP7*F-/bep>]w2-04yx+4>:u0
o\L((E/t0$#9,BC*p!-w%N0DY=+3C*\Hp7gdoMahZj-)*[10
oS2f0)*(==3W%nPlyI+j9! h$S2KF)*-(0.p39>]g.*$-/BYL
TG=9)1-97g=%) (=xuW7]=3j_jw%jahT33py
84't_.Phs1:pXj+(*::p7W23)\+zXj+(/1:p0.+39,'7,QP9!1Vl
TW2C)\HzXj+(/1:p0.+C94;7_.UHIJ)PxJ+(*\:;7$f3)\+Z=J+(/1:P0.pe6
:M[=q6wE1:PxJ+(/25Ph#$ )\Hz$-+(/1:p0A+p9$3j_3+(/z
$[%[((e1:7X]P:]7;YX++([je77G22)126%*((6
:'309/-[XFj4QPhix; _3W.ja:L
T<[-[x(3\Q4:di*P7X=+) 0
oUX(*[Bv5xJ+(/1(==yWid[*7!yWfRA:$,% -[z
$$,x((9I48_3wF01*5x#MR/a:L
T%!')12,r[((9Imx_jwi03*P[
a='/a:$u[+-/xlgOZ((9c;a9q+H[Z
$38dkI)12,8DKi)\jZxJ+(/1:P0a+m9Imj0Q+:D4't_jq
$9i]J=q+:d,'7_JQ
HO. T,#90% z$#kv<9i(<0%(>(X':0:(cIXoW-KVO)U2<0'k!m[*S!3q
$9>;6\T;-'Xzw4kvo) 28AZ90%a:$%TO-[BtT3Jly
8xlH#s(3E v)0.+w9c78%qpH:H(=xuWOD>*7!;)*/*2V,g(3E );0.+w6
:fF_-xP*\:(7\/a) -00apw9[!G%<((94:y<]4y
84;Y=+PM[25pe#![)j-9J])*[f2\sQ+h/U+$+S*()1-(B]4Y
8,HY=++3'x]5_.Lh(/VpXj+(*\:57w3-[u-7j8
_.u3*=<+3C21:pXj)$/12,XQ3h/fTt3jJ:=IFY=<6((x <%J(3EH+0[
aWO\7HYX+,psj2V+sU-!J-(=-+(/1:T3Jp:%-'PUq+H[ )L
Tdy [C*)!jPE*::)7DY 'c*==++(/1:PxJ)$/12T%[+-I25P<8
_9X=/Y33X)/1:pXj+9!1H$yz![)1-9irw6B='Y>+H981s$1j((e%Vl
T#F()h-5e<63:x/7_3x):V(=xRW'n0*P[
a\9x=*=j+,c'1:PxJ)*/%2G=Q+:5%*7[
a;ina5(!y,w/1:Px<6((X ,-q3H(1)T3J,:ypu,_Ui(6
:I:U2(*:Bh9$J+(/1(=x-W2yC/YX++M(/)$u'((efsS>#5<fatP[
aW6m_\Y3]X>' :pXj+9!1J$#:$%x.3yx+hmI*2[YZ/-/XAV9g;-/Z
$$SDK%-avT3J4:k8'Y>+PE*\:07*/foA:zHrq
$]P7X,gp-/B:7$]W2%8/3S-((E1:PhyW2%8/3s0(3*\:07D5007*P!3+>6
:I/S0)3) -0<<_(SXi/s0)C) -(0.+W9$PGoQ+h/%2V0%2')1-PjRQ
$5iID1J(3EJE50.+P93(J1J(mSBjs7lk-[bT;B<6($xZf_3X(sh0
oSL((E1:Ph;IP9></UqIH:257x#t[)1-9jV4:]3u,_3q
$O#*P!Rpw2Xof9x((e%2[ozV-ubV00.P39>!VMq3HSV(==3Q
$Kg/w_3)*[12[OD=-'B+7j<63/XAa9%(cEVhs0.p(9>]g.*$-/BY*IRQ
$Ki(yx+lP9>l[_u)*/*2'.[5 )12[dq+y
84't_.Ph[ :pXj+(*::p7w23)\)ZhV+(/1:P0.+39,'7,qIHI/ET3J,y
8,'5_.3h'%+pXj+(*\:57$$3)j-5>-)*/f2\-3(*[Bh0xJ+(/1(==uQ
$0>hy3uxe(V:PxJ+9!1j$1s(cE ETtJI:]6'Yej+:K7;yx++([uY*[
aW2X=*p!j+(sf:)7g22) -)>y)*/H26%*((e1H$%%)6kAHl
T#o wA:$1:(39,\yI<6cSX( _Jx#IZ
$t,K(p9clyx#MF=ah$ux(*ibe(ij+(/1(=B5q
$9C48_;wFra:$,% -[XL,_jq
$rczy=#=r/A)7!]L:d4:yx#=r5A:l
Tx!')123r0((9Cmx_jwF0>*P!Jp>2*0
oU$/-/XLGXQ+h/1H9irwI51*p7%$Zba:L
Tx$zBA:$,';<DAJpX#M;%04yx#=rX2*p[
aMRx2*P7%\ [a:$Uw23)10
Z\T;9rXOwY-to9$Ow9#=9\2lyh]W Y2\ybRWUm3oWyQ3:\23/4t -ubHl
T#/']mdV_-W+M8OwYqp:=NU>MD((97d'_3xw*\:*[
aWFW['yx#M!=7*5!V)*/*2VUg(3Eu(=xuQ
$%iAy3-x(/1:PxJ+9!1v$)L(c*\:(7\/a) (o=uW+N='t_jq
$94:YJ;ih2xmG_5XEu/(=X]wr-A5S!jLC/1:pX<63sz
$\sQ63e*y;Xj+(/25pB#Y f1*=E+I(/1:PxJ)*/ 2m=q+H:%j9[
a\c)1-PjRIe9,)y3-x):J:PxJ+981:$g;F-!h-*<Y+(/1:tTj+Y
8C:YJ+3Ws25p$# f3AHt3j,:%-'P_JxP9PpJ=q+H'*:7[
a;6x%*=h+4(/1:PxJ)*/ 2V+s+i)\jZjJ+(/1:P0a+(9PpJ=X(>*::0[
a;6x%4yx++c92'gxq+H[X(J10(*IB+PxJ+(/1(=x-WOB4/YX+4p6
:2<9[2-[bJtTj4:51*570+-u25pi#F3)10
o7[d<)1-5<#\9x=*P7[p-/X;5_3Q
$%c!yx#;I-A:$8DKi)u)Px#T;DG*=J++(/1:pXj)*/%0
o7*5i-a:Z=-WIyAH$8z*-[/+l
T9VtJA5;!rPM/1:pX<6('xz 1g20Ya:Z<#/OB>*p7G;<kp*70.+p6
:2[yz/[)%(=Xrw%W7*==++(/1:PxJ)*//26s%9-ub+l
T*;!-Ia7_jX(:vy77*;!-iA5_Jx(/%Y*$#toW3l[-q+H'X :m$2-/bJpB8
_2B>/t=QP981T$.z/[*%*70.P(9$PGoQ+h[x t,S$-/b:9[
a$F];;P_y)*/F2X0s$()%v$*Z(wEuEs0.+w9[<y=8
_%.A:zXj+)u%+$slkI)U-5<<63/xIX_Jx#/HE$.0kI)1-0Hv3Y
8M<YX+iWij2>*ZM-/Bj$S2K0) -sb<63/XaAyt(3eUJt33+Y
8>!xmQJ9! H$s2;f)*-(0.P39>!/,QJh$257=#/.5$iG_jX)6
:A30q+H2Xa3sQP9!1T$)*$;xa:$s:(3*\H7[
a! *a57!y+(/1:Px<_(/X]J=q6PE1:PxJ+(/25P=#\ [i*70.+e6
:]Jbq63E1:PxJ+(/25Pb#!'[A55!rHM/1:pX<6((xmx=Q6pe :pXj+(/257>8
_rk *=i++(/1:pXj)*//2g%q63EJjPxJ+(/2$P<#t;xahPxJQ
$K7;yx++([1E77*2')1-Px3h#[XAJ.q+:]7iYX8
_ R2P[_3w7x8*7!RW'JAH$g:((6
:( _3W9rm*07x=-/x43#QPY
8C4Y33XE'1:pXj+9! V$ux -[bV$,%((9il8_3Q
$9i4yx#=i=ah$,$+-'12,Rj((6
:l\1q+:D4;YX#=R-a:$u$F-/z
$31j((9c;P_JWf5GuYX#m'N0*p!3q
$r6 /Uq+:D6 /uQ6Ce1:pXj+(/2$pJ#=Rx2*P7X! *a:L
T#=.X *p7x\ [A:l
!KVO*I2>mdu+%xZ>mzwf*-(3_v,:X6( _-4:O./>MD(m9-(:9cv+)u-7[
aW%5$oWyQu:=.7>md(39[N/\t;-/x'W)QPh$25p>8
_:R8Zj_3X3s/(=XUwIw['Y=+iE*\:(7DM%) -s0.+w9pL[_3X3uf(=XUq
$3#*5!R)*/*28SH(3EV(o=uW+N='t_jwR/a+;<8
_r5AHz=;P9!1e$R0()ej);0.P#94aYX++MixPj/j((e*J;<8
_.[AHzX3u:4%*=>+,>s1:pXj)*/%2mjqpmE )L
TW3[)\+zJ-H(/1:p0A+(9C:YJ++#$25pi# f3AHt3j,:%-'P_3xeIV0
o7dy [A:zerL)9PpJbq6)E*h5xJ+(/25P=#;6x14yx+p3UZ
$v+SPI)/-p=Y)$//2V+sUi)\hZxJ+(/1:P0a+(92'gxq49!1+L
T<2'-A57!5+(/1:pX<6([x /R0((ejT079k'XAVz$<_(:x;p_jXCsz
$$-j(Ee%et33i:- *7!5IP*\:07[d<)10
oG<2')\)ZE-U(/1:P0.+c9=HYX#$C) 0
oYXd-!*-*Eu+(/1:T3J,:%c/yj+,(U25PE#5OBC*(Hjq
$]64a_.IH[JYPxJ+(*\:57*5I-A:zX;,>ux4:_jX#:UV$8Z*-$10
o79VtJA5;!vu3/1:pX<6('xz 1g20Ya:Z$;4w9> /Sq+:KPU[Yq+y
8xAV9gf-S25P<#/!XAVz=Y)*/v26s%9-/bs0[
atoW3l[=q+H/ Y;7*;!-iA5_Jx(/1S*7*;!-Iax_3)*/v2V8T! )1-7xVQ
$]0AX03(3EV+TtJl:]0ax0-(3e*(=XUw2\=!YX++C9P(3%[((E1)0[
a$F];;P_3x)(%(=xRW[*7;P_;lH'u2f9QPh$fJt3jJ:=#*7!jLE6
:AF_Jx(/1SshRW%.04yh+I9! :$.0((EJ))<#T[BC*7[
a9,)1-0=uh:o#u,_jXC9>!/mQ3hsv(==3w%nPdyj+lP*\h7[
a/Z-.*70.p(9>!V,qUHI )T33+:KgU3_-xP[u(==JW%4=I61q+H2Ht0[
a/F*a:Z>RW%r>*(0.+w9EiG8S((9>\yx8
_rX2*==+P3/1:pXj)$/12m%3(*UBS)xJ+(/1(=x3W.x lyh+4>(25PE8
_.X%*=J+uCi1:pXj)*/%2\13()e%V50.+#94/7_.pH[V:PxJ+(*\h([
a!%[a5(!y,P/1:Px<6('X;J_-x3(2$Ph#T;XAepX#/ 5a:ZxJpm2H0
o7*2')1-pXjL#//2[%*(3E/v*0.+e9$'6_jX([x'309/-[z
$$)S#-/x; _3W.jatT3-l:*_*P!]4y
82L>_rwira:$U% -[X4,_.4h(*TpXj+(*\J9[
aWID[*S7%=-/Xl3#qp:RC*p[
a=i=ah$,$+-u -;>#MR/a:$,$$-/z
$,R[((9iMX_JWI03*p7%!%)1-P=Vhw6
:4\Sq+:R=:YX++([jT07x$()12312K-/Z
$,12k-/xL:yzm-'1:$U';<da:$,$29)10
oU$29)123Gsp-/X4m%3((6
BM8.'v *>'L
*.END
