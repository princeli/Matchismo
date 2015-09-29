//
//  PlayingCard.h
//  Matchismo
//
//  Created by ly on 15/9/29.
//  Copyright © 2015年 princeli. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
