//
//  ViewController.h
//  OBJ-C AgendaContatos
//
//  Created by Everton Dias on 02/08/21.
//

#import <UIKit/UIKit.h>
#import "ContatoDao.h"

@protocol ViewControllerDelegate <NSObject>

-(void)contatoAdicionado: (Contato *)contato;
-(void)contatoAtualizado: (Contato *)contato;

@end

@interface ViewController : UIViewController

@property IBOutlet UITextField *nome;
@property IBOutlet UITextField *telefone;
@property IBOutlet UITextField *endereco;
@property IBOutlet UITextField *email;

@property ContatoDao *dao;
@property Contato *contato;

@property id<ViewControllerDelegate> delegate;

@end

