//
//  LWTabBar.m
//  BananaClock
//
//  Created by Megvii on 2017/6/10.
//  Copyright © 2017年 Lowoo. All rights reserved.
//

#import "LWTabBar.h"
#import "Header.h"

@implementation LWTabBar

- (void)awakeFromNib{
    [super awakeFromNib];
    
    [[UITabBar appearance] setShadowImage:[UIImage new]];
    [[UITabBar appearance] setBackgroundImage:[[UIImage alloc]init]];
    
    CGRect frame = self.bounds;
    frame.size.width = SCREEN_WIDTH;
    frame.origin.y = -10;
    frame.size.height += 10;
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:frame];
    imageView.image = [UIImage imageNamed:@"tabBar_background"];
    imageView.contentMode = UIViewContentModeScaleToFill;
//    imageView.backgroundColor = [UIColor redColor];
    [self addSubview:imageView];

    NSArray *titles = @[@"叫醒", @"好友", @"道具", @"设置"];
    
    for (int i=0; i<4; i++) {
        LWTabBarItem *item = [[LWTabBarItem alloc] initWithFrame:CGRectMake(i*SCREEN_WIDTH/4,
                                                                            0,
                                                                            SCREEN_WIDTH/4,
                                                                            self.frame.size.height)];
        [self addSubview:item];
        
        item.imageView.image = [UIImage imageNamed:[NSString stringWithFormat:@"tabBar%d",i+1]];
        item.imageView_selected.image = [UIImage imageNamed:[NSString stringWithFormat:@"tabBar%d_selected",i+1]];
        item.title.text = titles[i];
    }
}

- (instancetype)init{
    if (self = [super init]) {
        
    }
    return self;
}

@end
