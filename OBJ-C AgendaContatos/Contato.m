//
//  Contato.m
//  OBJ-C AgendaContatos
//
//  Created by Everton Dias  on 03/08/21.
//

#import "Contato.h"

@implementation Contato

- (NSString *)description {
    NSString *dados = [NSString stringWithFormat:@"Nome: %@ Endereço: %@ E-mail: %@  Telefone: %@", self.nome, self.endereco, self.email, self.telefone];
    return dados;
}

@end
