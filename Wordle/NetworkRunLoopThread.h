//
//  NetworkManager.h
//  Wordle
//
//  Created by Xiaosha Quan on 4/28/14.
//  Copyright (c) 2014 Quan Xiaosha. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NetworkRunLoopThread : NSThread

+ (NSRunLoop*) networkRunLoop;

@end
