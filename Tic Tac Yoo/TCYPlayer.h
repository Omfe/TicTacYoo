//
//  TCYPlayer.h
//  Tic Tac Yoo
//
//  Created by Omar Gudino on 2/16/15.
//  Copyright (c) 2015 Omar Gudino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCYToken.h"

@interface TCYPlayer : NSObject

@property (strong, nonatomic) TCYToken *typeOfPlayer;

@end
