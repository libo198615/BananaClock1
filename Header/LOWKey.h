//
//  LOWKey.h
//  BananaClock
//
//  Created by Megvii on 2017/6/9.
//  Copyright © 2017年 Lowoo. All rights reserved.
//

#ifndef LOWKey_h
#define LOWKey_h

const NSString *week = @"LOW_week";

#define MUSIC_ALLOW   @"music_allow"


#define MUSIC_ALLOW   @"music_allow"
#define OPENING_ANIMATION @"Opening Animation"
#define HELP_CENTER     @"help_center"
#define TIME_HIDDEN @"timeHidden"
#define MEDAL_HIDDEN @"medalHidden"
#define USER_STORE_ACCESS_TOKEN     @""
#define DeviceTokenRegisteredKEY   [[NSUserDefaults standardUserDefaults] objectForKey:@"token"]
#define LOWOO_TOKEN                 [[NSUserDefaults standardUserDefaults] objectForKey:@"lowooToken"]
#define LOCAL_NOTIFICATION     @"localNotification"





#define USER_BEGINTIME           @"beginTime"
#define USER_ENDTIME             @"endTime"
#define USER_PHONENUMBER         @"userphonenumber"
#define USER_CITY                @"location"
#define USER_COIN                @"coin"
#define USER_UID                 @"uid"
#define USER_NAME                @"name"
#define USER_ID                  @"id"
#define USER_SINA_ID             @"userSinaId"
#define USER_EMAIL               @"email"
#define USER_SEX                 @"sex"
#define USER_SHARELIST           @"sharelist"
#define USERID                   [[NSUserDefaults standardUserDefaults] objectForKey:USER_ID]
#define LOWOO_USER_ID            [[NSUserDefaults standardUserDefaults] objectForKey:USER_ID]
#define USER_PASSWORD            @"password"
#define APP_URL                  @""
#define BASEURL                  @"http://bc.lowoo.cc"
#define MEMORY_ADDRESS           @"memeoryAddress"

#define MEDAL_CHINESE               @"medal_chinese"
#define MEDAL_ENGLISH               @"medal_english"
#define MEDAL_CONTENT               @"medal_content"
#define MEDAL_CONTENT_B             @"medal_content_b"

#define COLOR_CHINESE               [UIColor colorWithRed:86/255.0 green:86/255.0 blue:86/255.0 alpha:1]
#define COLOR_ENGLISH               [UIColor colorWithRed:125/255.0 green:125/255.0 blue:125/255.0 alpha:0.7]
#define COLOR_CONTENT_NO            [UIColor colorWithRed:125/255.0 green:125/255.0 blue:125/255.0 alpha:0.7]
#define COLOR_CONTENT_YES           [UIColor colorWithRed:200/255.0 green:169/255.0 blue:0/255.0 alpha:0.9]
#define COLOR_DAY                   [UIColor colorWithRed:200/255.0 green:169/255.0 blue:0/255.0 alpha:0.9]
#define COLOR_EXPANDED_NO           [UIColor colorWithRed:100/255.0 green:100/255.0 blue:100/255.0 alpha:0.7]
#define COLOR_EXPANDED_YES          [UIColor colorWithRed:232/255.0 green:180/255.0 blue:0/255.0 alpha:0.9]

#define CELLSTATE     @"cellState"


#endif /* LOWKey_h */
