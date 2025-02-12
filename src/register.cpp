//
// This software is licensed under BSD0 (public domain).
// Therefore, this software belongs to humanity.
// See COPYING for more info.
//
#include "register.hpp"
#include "lex.hpp"

bool isRegister(TokenType reg) {
    switch (reg) {
        case Al: case Ah:
        case Cl: case Ch:
        case Dl: case Dh:
        case Bl: case Bh:
        case Spl:
        case Bpl:
        case Sil:
        case Dil:
        case R8b:
        case R9b:
        case R10b:
        case R11b:
        case R12b:
        case R13b:
        case R14b:
        case R15b: return true;
        
        case Ax:
        case Cx:
        case Dx:
        case Bx:
        case Sp:
        case Bp:
        case Si:
        case Di:
        case R8w:
        case R9w:
        case R10w:
        case R11w:
        case R12w:
        case R13w:
        case R14w:
        case R15w: return true;
        
        case Eax:
        case Ecx:
        case Edx:
        case Ebx:
        case Esp:
        case Ebp:
        case Esi:
        case Edi: 
        case R8d:
        case R9d:
        case R10d:
        case R11d:
        case R12d:
        case R13d:
        case R14d:
        case R15d: return true;
        
        case Rax:
        case Rcx:
        case Rdx:
        case Rbx:
        case Rsp:
        case Rbp:
        case Rsi:
        case Rdi:
        case R8:
        case R9:
        case R10:
        case R11:
        case R12:
        case R13:
        case R14:
        case R15: return true;
        
        default: {}
    }
    
    return false;
}

bool isRegister8(TokenType reg) {
    switch (reg) {
        case Al: case Ah:
        case Cl: case Ch:
        case Dl: case Dh:
        case Bl: case Bh:
        case Spl:
        case Bpl:
        case Sil:
        case Dil:
        case R8b:
        case R9b:
        case R10b:
        case R11b:
        case R12b:
        case R13b:
        case R14b:
        case R15b: return true;
        
        default: {}
    }
    return false;
}

bool isRegister16(TokenType reg) {
    switch (reg) {
        case Ax:
        case Cx:
        case Dx:
        case Bx:
        case Sp:
        case Bp:
        case Si:
        case Di:
        case R8w:
        case R9w:
        case R10w:
        case R11w:
        case R12w:
        case R13w:
        case R14w:
        case R15w: return true;
        
        default: {}
    }
    return false;
}

bool isRegister32(TokenType reg) {
    switch (reg) {
        case Eax:
        case Ecx:
        case Edx:
        case Ebx:
        case Esp:
        case Ebp:
        case Esi:
        case Edi:
        case R8d:
        case R9d:
        case R10d:
        case R11d:
        case R12d:
        case R13d:
        case R14d:
        case R15d: return true;
        
        default: {}
    }
    return false;
}

bool isRegister64(TokenType reg) {
    switch (reg) {
        case Rax:
        case Rcx:
        case Rdx:
        case Rbx:
        case Rsp:
        case Rbp:
        case Rsi:
        case Rdi:
        case R8:
        case R9:
        case R10:
        case R11:
        case R12:
        case R13:
        case R14:
        case R15: return true;
        
        default: {}
    }
    return false;
}

bool isRegisterExt(TokenType reg) {
    switch (reg) {
        case Sil:
        case Dil:
        case Spl:
        case Bpl:
    
        case R8b:
        case R9b:
        case R10b:
        case R11b:
        case R12b:
        case R13b:
        case R14b:
        case R15b:
        
        case R8w:
        case R9w:
        case R10w:
        case R11w:
        case R12w:
        case R13w:
        case R14w:
        case R15w:
        
        case R8d:
        case R9d:
        case R10d:
        case R11d:
        case R12d:
        case R13d:
        case R14d:
        case R15d:
        
        case R8:
        case R9:
        case R10:
        case R11:
        case R12:
        case R13:
        case R14:
        case R15: return true;
        
        default: {}
    }
    return false;
}

