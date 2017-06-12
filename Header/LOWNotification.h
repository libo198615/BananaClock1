//
//  LOWNotification.h
//  BananaClock
//
//  Created by Megvii on 2017/6/8.
//  Copyright © 2017年 Lowoo. All rights reserved.
//

#ifndef LOWNotification_h
#define LOWNotification_h

#define LOW_ADD_Notification(selector) name(NAME) [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(selector) name:NAME object:nil];
#define LOW_POST_Notification(NAME) [[NSNotificationCenter defaultCenter] postNotificationName: NAME object: nil];

const NSString *t = @"";

#endif /* LOWNotification_h */
