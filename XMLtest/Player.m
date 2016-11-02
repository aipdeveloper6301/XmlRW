//
//  Player.m
//  XMLTest
//
//  Created by Ray Wenderlich on 3/17/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import "Player.h"

@implementation Player
@synthesize name = _name;
@synthesize level = _level;
@synthesize rpgClass = _rpgClass;

- (id)initWithName:(NSString *)name level:(int)level rpgClass:(RPGClass)rpgClass {

    if ((self = [super init])) {
        self.name = name;
        self.level = level;
        self.rpgClass = rpgClass;
    }    
    return self;
    
}

- (void) dealloc {
    self.name = nil;    
    [super dealloc];
}

@end
