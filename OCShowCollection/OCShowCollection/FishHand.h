//
//  FishHand.h
//  GoFishModel
//
//  Created by Greg Tarsa on 1/24/14.
//  Copyright (c) 2014 Greg Tarsa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FishHand : NSObject

@property (nonatomic, strong, readonly) NSMutableArray *cards;

//+ (instancetype) newWithStackedCards:(NSMutableArray *)stackedHandCards;
- (NSNumber *) numberOfCards;
- (NSNumber *) rankCount:(NSString *)targetRank;
- (void) receiveCards:(NSArray *)cards;
- (void) receiveCard:(FishCard *)card;
- (NSMutableArray *) giveMatchingCards:(NSString *)rank;
- (BOOL) gotBook:(NSString *)rank;
- (NSString *) toString;
- (void) sort;
@end
