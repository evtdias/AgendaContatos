//
//  ContatoDao.h
//  OBJ-C AgendaContatos
//
//  Created by Everton Dias on 04/08/21.
//

#import <Foundation/Foundation.h>
#import "Contato.h"

@interface ContatoDao : NSObject

@property NSMutableArray *contatos;

-(void) adicionaContato: (Contato *) contato;
-(NSInteger) total;
-(Contato *) contatoDoIndice: (NSInteger) indice;
-(NSInteger) indiceDoContato: (Contato *) contato;
+(ContatoDao *) contatoDaoInstance;
-(void) removeContato: (Contato *) contato;

@end

