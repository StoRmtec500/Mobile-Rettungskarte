//
//  MasterViewController.h
//  Mobile Rettungskarte
//
//  Created by Martin Kuenz on 6/11/13.
//  Copyright (c) 2013 Martin Kuenz. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
