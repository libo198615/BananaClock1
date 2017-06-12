//
//  LWTabBarItem.m
//  BananaClock
//
//  Created by Megvii on 2017/6/10.
//  Copyright © 2017年 Lowoo. All rights reserved.
//

#import "LWTabBarItem.h"

@implementation LWTabBarItem

//- (void)awakeFromNib{
//    [super awakeFromNib];
//    
//    
//}

- (instancetype)initWithFrame:(CGRect)frame{
    if (self = [super initWithFrame:frame]) {
        _imageView = [[UIImageView alloc] initWithFrame:self.bounds];
        [self addSubview:_imageView];
        _imageView_selected = [[UIImageView alloc] initWithFrame:self.bounds];
        [self addSubview:_imageView_selected];
        
        _title = [[UILabel alloc] initWithFrame:CGRectMake(0,
                                                           self.frame.size.height-20,
                                                           self.frame.size.width,
                                                           20)];
        _title.textColor = [UIColor blackColor];
        _title.textAlignment = NSTextAlignmentCenter;
        _title.font = [UIFont systemFontOfSize:10];
        [self addSubview:_title];
    }
    return self;
}

@end
