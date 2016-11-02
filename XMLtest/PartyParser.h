//
//  PartyParser.h
//  XMLTest
//
//  Created by Ray Wenderlich on 3/17/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Party;

@interface PartyParser : NSObject {

}

+ (Party *)loadParty;
+ (void)saveParty:(Party *)party;

@end
