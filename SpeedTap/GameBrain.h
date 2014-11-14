//
//  GameBrain.h
//  SpeedTap
//
//  Created by Aaron Robinson on 11/6/14.
//  Copyright (c) 2014 Aaron Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GameBrain : NSObject

+(GameBrain *) sharedInstance;

@property(strong, nonatomic) NSArray *pointsArray;
@property(atomic) enum state {win = 0, lose, running, waiting};
@property(atomic) enum state gameState;
@property(atomic) int level;
@property(atomic) int levelScore;
@property(atomic) int totalScore;
@property(atomic) int goalTapNum;
@property(atomic) int currentTapCount;
@property(atomic) int levelTimeLimit;
@property(atomic) int secondsLeft;
@property(atomic) int centisecondsLeft;

-(void) startGame;
-(void) pauseGame;
-(void) startNextLevel;
-(void) retryCurrentLevel;
-(void) decrementTime;
-(void) generatePointsInRect;
-(void) incrementTapCount;

@end