//
//  TKBaseModel.m
//  WeChatPlugin
//
//  Created by nato on 2017/9/17.
//  Copyright © 2017年 github:natototo. All rights reserved.
//

#import "TKBaseModel.h"

@implementation TKBaseModel

- (instancetype)initWithDict:(NSDictionary *)dict {
    NSAssert(NO, @"the mothed initWithDict: must be override by subclass");
    return nil;
}

- (NSDictionary *)dictionary {
    NSAssert(NO, @"the mothed dictionary must be override by subclass");
    return nil;
}
@end
