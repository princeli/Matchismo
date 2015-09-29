//
//  Card.h
//  Matchismo
//
//  Created by ly on 15/9/26.
//  Copyright © 2015年 princeli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong,nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL
matched;

@end
