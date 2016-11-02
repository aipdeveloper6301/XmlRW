//
//  Player.h
//  XMLTest
//
//  Created by Ray Wenderlich on 3/17/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    RPGClassFighter,
    RPGClassRogue,
    RPGClassWizard
} RPGClass;
    
@interface Player : NSObject {
    NSString *_name;
    int _level;
    RPGClass _rpgClass;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int level;
@property (nonatomic, assign) RPGClass rpgClass;

- (id)initWithName:(NSString *)name level:(int)level rpgClass:(RPGClass)rpgClass;

@end
