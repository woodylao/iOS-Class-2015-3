//
//  ViewController.h
//  Converter
//
//  Created by bryant tang on 3/11/15.
//  Copyright (c) 2015 CPTTM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *moneyInputBox;

@property (weak, nonatomic) IBOutlet UILabel *outputBox;

@end

