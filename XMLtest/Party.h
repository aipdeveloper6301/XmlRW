//
//  Party.h
//  XMLTest
//
//  Created by Ray Wenderlich on 3/17/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Party : NSObject {
    NSMutableArray *_players;
}

@property (nonatomic, retain) NSMutableArray *players;

@end
