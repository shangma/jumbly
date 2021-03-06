//
//  Chain.h
//  Jumbly
//
//  Created by Jamie Ly on 20/10/2012.
//  Copyright (c) 2012 Jamie Ly. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Chain : NSObject
- (NSArray*) addWord: (NSString*) word;
- (NSArray*) reversedWords;
- (NSString*) wordAtIndex: (NSUInteger) index;
- (BOOL) containsWord: (NSString*) word;
- (NSString*) firstWord;
- (NSString*) lastWord;
+ (Chain*) chainWithWord: (NSString*) word;
@property (nonatomic, strong) NSArray *words;
@property (nonatomic, readonly) NSUInteger count;
@end
