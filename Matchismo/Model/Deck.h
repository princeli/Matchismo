//
//  Deck.h
//  Matchismo
//
//  Created by ly on 15/9/29.
//  Copyright © 2015年 princeli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;
@end
