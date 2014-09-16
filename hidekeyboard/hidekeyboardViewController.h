//
//  hidekeyboardViewController.h
//  hidekeyboard
//
//  Created by Charles Konkol on 9/15/14.
//  Copyright (c) 2014 Rock Valley College. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface hidekeyboardViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtFN;
@property (weak, nonatomic) IBOutlet UITextField *txtLN;
//hide keyboard
-(IBAction) doneEditing:(id) sender;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollview;

@end
