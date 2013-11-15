//
//  BKGDetailViewController.h
//  Backlogman
//
//  Created by Vincent Fournié on 11.11.13.
//  Copyright (c) 2013 VFE. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BKGDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
