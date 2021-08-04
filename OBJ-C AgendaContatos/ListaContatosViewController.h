//
//  ListaContatosViewController.h
//  OBJ-C AgendaContatos
//
//  Created by Everton Dias  on 03/08/21.
//

#import "ViewController.h"
#import "ContatoDao.h"

@interface ListaContatosViewController : UITableViewController<ViewControllerDelegate>

@property ContatoDao *dao;
@property Contato *contatoSelecionado;
@property NSInteger linhaSelecionada;

@end
