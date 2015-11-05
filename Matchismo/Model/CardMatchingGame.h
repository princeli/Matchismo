//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by ly on 15/11/5.
//  Copyright © 2015年 princeli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger) count usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly)NSInteger score;


@end
