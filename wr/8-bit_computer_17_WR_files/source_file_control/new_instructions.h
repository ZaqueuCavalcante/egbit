//Vetores para adicionar novas instruções

#include "defines.c"


 
char EEPROM_2[] = { 
     
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, 0,                             0,           0,                              0,0,0,   // 0000   nop
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|MAI_2,                   RMO_2|ACI_2, 0,                              0,0,0,   // 0001   lda
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|ACI_2,                   0,           0,                              0,0,0,   // 0010   ldi
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|MAI_2,                   ACO_2|RMI_2, 0,                              0,0,0,   // 0011   sta
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|MAI_2,                   RMO_2|BRI_2, ALU_2|ACI_2,                    0,0,0,   // 0100   add
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|MAI_2,                   RMO_2|BRI_2, ALU_2|ACI_2|SUB_2,              0,0,0,   // 0101   sub
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|MAI_2,                   RMO_2|BRI_2, ALU_2|ACI_2|AL0_2,              0,0,0,   // 0110   and
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|MAI_2,                   RMO_2|BRI_2, ALU_2|ACI_2|AL1_2,              0,0,0,   // 0111   orl
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|MAI_2,                   RMO_2|BRI_2, ALU_2|ACI_2|AL1_2|AL0_2,        0,0,0,   // 1000   xor
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, ALU_2|ACI_2|AL1_2|AL0_2|NOT_2, 0,           0,                              0,0,0,   // 1001   not
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, IRO_2|JMP_2,                   0,           0,                              0,0,0,   // 1010   jmp
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, 0,                             0,           0,                              0,0,0,   // 1011   ---
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, 0,                             0,           0,                              0,0,0,   // 1100   ---
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, 0,                             0,           0,                              0,0,0,   // 1101   ---
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, ACO_2|ORI_2,                   0,           0,                              0,0,0,   // 1110   out
     MAI_2|PCO_2, RMO_2|IRI_2|PCI_2, HLT_2,                         0,           0,                              0,0,0,   // 1111   hlt
   
     
     
     }; 
     

char EEPROM_1[] = { 
     
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, 0,                             0,           0,                              0,0,0,   // 0000   nop
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|MAI_1,                   RMO_1|ACI_1, 0,                              0,0,0,   // 0001   lda
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|ACI_1,                   0,           0,                              0,0,0,   // 0010   ldi
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|MAI_1,                   ACO_1|RMI_1, 0,                              0,0,0,   // 0011   sta
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|MAI_1,                   RMO_1|BRI_1, ALU_1|ACI_1,                    0,0,0,   // 0100   add
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|MAI_1,                   RMO_1|BRI_1, ALU_1|ACI_1|SUB_1,              0,0,0,   // 0101   sub
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|MAI_1,                   RMO_1|BRI_1, ALU_1|ACI_1|AL0_1,              0,0,0,   // 0110   and
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|MAI_1,                   RMO_1|BRI_1, ALU_1|ACI_1|AL1_1,              0,0,0,   // 0111   orl
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|MAI_1,                   RMO_1|BRI_1, ALU_1|ACI_1|AL1_1|AL0_1,        0,0,0,   // 1000   xor
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, ALU_1|ACI_1|AL1_1|AL0_1|NOT_1, 0,           0,                              0,0,0,   // 1001   not
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, IRO_1|JMP_1,                   0,           0,                              0,0,0,   // 1010   jmp
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, 0,                             0,           0,                              0,0,0,   // 1011   ---
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, 0,                             0,           0,                              0,0,0,   // 1100   ---
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, 0,                             0,           0,                              0,0,0,   // 1101   ---
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, ACO_1|ORI_1,                   0,           0,                              0,0,0,   // 1110   out
     MAI_1|PCO_1, RMO_1|IRI_1|PCI_1, HLT_1,                         0,           0,                              0,0,0,   // 1111   hlt
   
     
     
     }; 
     

char EEPROM_0[] = { 
     
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, 0,                             0,           0,                              0,0,0,   // 0000   nop
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|MAI_0,                   RMO_0|ACI_0, 0,                              0,0,0,   // 0001   lda
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|ACI_0,                   0,           0,                              0,0,0,   // 0010   ldi
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|MAI_0,                   ACO_0|RMI_0, 0,                              0,0,0,   // 0011   sta
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|MAI_0,                   RMO_0|BRI_0, ALU_0|ACI_0,                    0,0,0,   // 0100   add
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|MAI_0,                   RMO_0|BRI_0, ALU_0|ACI_0|SUB_0,              0,0,0,   // 0101   sub
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|MAI_0,                   RMO_0|BRI_0, ALU_0|ACI_0|AL0_0,              0,0,0,   // 0110   and
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|MAI_0,                   RMO_0|BRI_0, ALU_0|ACI_0|AL1_0,              0,0,0,   // 0111   orl
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|MAI_0,                   RMO_0|BRI_0, ALU_0|ACI_0|AL1_0|AL0_0,        0,0,0,   // 1000   xor
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, ALU_0|ACI_0|AL1_0|AL0_0|NOT_0, 0,           0,                              0,0,0,   // 1001   not
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, IRO_0|JMP_0,                   0,           0,                              0,0,0,   // 1010   jmp
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, 0,                             0,           0,                              0,0,0,   // 1011   ---
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, 0,                             0,           0,                              0,0,0,   // 1100   ---
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, 0,                             0,           0,                              0,0,0,   // 1101   ---
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, ACO_0|ORI_0,                   0,           0,                              0,0,0,   // 1110   out
     MAI_0|PCO_0, RMO_0|IRI_0|PCI_0, HLT_0,                         0,           0,                              0,0,0,   // 1111   hlt
   
     
     
     }; 
    
 
