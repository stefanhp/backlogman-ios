//
//  BKGProject.h
//  Backlogman
//
//  Created by Vincent Fournié on 14.11.13.
//  Copyright (c) 2013 VFE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BKGObject.h"

@class BKGStat;

@interface BKGProject : BKGObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *description;
@property (nonatomic, copy, readonly) NSString *code;
@property (nonatomic, copy, readonly) NSString *organizationId;
@property (nonatomic, copy) NSArray *themes;
@property (nonatomic, strong, readonly) BKGStat *stats;
@property (nonatomic, copy) NSArray *backlogs;

@end
