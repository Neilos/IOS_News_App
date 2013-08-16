//
//  MKADArticlesTableViewController.h
//  MakersTest4
//
//  Created by JamesEJ on 16/08/2013.
//  Copyright (c) 2013 JamesEJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MKADArticlesTableViewController : UITableViewController

@property (strong) NSString *articlesURLString;
@property (strong) NSMutableData *responseData;
@property (strong) NSArray *articles;

@end
