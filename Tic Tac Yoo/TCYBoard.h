//
//  TCYBoard.h
//  Tic Tac Yoo
//
//  Created by Omar Gudino on 2/16/15.
//  Copyright (c) 2015 Omar Gudino. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TCYBoard : NSObject

@property (strong, nonatomic) NSMutableArray *Tokens;
@property (strong, nonatomic) NSMutableArray *BoardSlots;

@end
