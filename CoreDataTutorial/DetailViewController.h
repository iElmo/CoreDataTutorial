//
//  DetailViewController.h
//  CoreDataTutorial
//
//  Created by Dan on 22/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
@interface DetailViewController : UIViewController{
    IBOutlet UITextField *nameText;
    IBOutlet UITextField *numberText;
}

@property (nonatomic, retain) AppDelegate *app;

@end
