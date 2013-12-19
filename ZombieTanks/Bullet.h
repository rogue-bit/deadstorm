//
//  Bullet.h
//  SpriteBatches
//
//  Created by Steffen Itterheim on 04.08.10.
//  Copyright 2010 Steffen Itterheim. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Bullet : CCSprite 
{
	CGPoint velocity;
	bool isPlayerBullet;
    
    // THE BULLET ARRAY (MAB)
    NSMutableArray *_bullets;
    
    BOOL _active;
    
    CGSize winSize;
}

@property (readwrite, nonatomic) CGPoint velocity;
@property (readwrite, nonatomic) bool isPlayerBullet;

+(id) bullet;

-(void) shootBulletAt:(CGPoint)startPosition velocity:(CGPoint)vel frameName:(NSString*)frameName isPlayerBullet:(bool)playerBullet;


-(Bullet *)getNextActiveBullet;
-(void)setActiveStatus:(BOOL)activeStatus;

@end
