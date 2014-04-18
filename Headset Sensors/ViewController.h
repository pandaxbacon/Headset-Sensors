//
//  ViewController.h
//  Headset Sensors
//
//  Created by Mick on 1/24/14.
//  Copyright (c) 2014 Mick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UISwitch *monitorSensorSwitch;

@property NSTimer* oneSecondTimer;

- (void) oneSecondCallback;
- (IBAction)collectDataButton:(id)sender;

@end
