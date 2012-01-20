//
//  TableViewController.h
//  CoreDataTutorial
//
//  Created by Dan on 22/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController

@property (nonatomic,retain) NSManagedObjectContext *context;
@property (nonatomic, retain) NSMutableArray *arr;
-(void) getData;


@end
