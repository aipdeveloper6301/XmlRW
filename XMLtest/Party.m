//
//  Party.m
//  XMLTest
//
//  Created by Ray Wenderlich on 3/17/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import "Party.h"

@implementation Party
@synthesize players = _players;

- (id)init {
 
    if ((self = [super init])) {
        self.players = [[[NSMutableArray alloc] init] autorelease];
    }
    return self;
    
}

- (void) dealloc {
    self.players = nil;    
    [super dealloc];
}

@end
