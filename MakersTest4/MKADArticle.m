//
//  MKADArticle.m
//  MakersTest4
//
//  Created by JamesEJ on 16/08/2013.
//  Copyright (c) 2013 JamesEJ. All rights reserved.
//

#import "MKADArticle.h"

@implementation MKADArticle
-(void)dealloc
{
    self.numericID = nil;
    self.title = nil;
    self.body = nil;
    self.publishedDate = nil;
}
@end
