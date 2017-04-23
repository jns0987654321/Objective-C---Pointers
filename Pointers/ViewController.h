//
//  ViewController.h
//  Pointers
//
//  Created by Junior Samaroo on 2017-04-23.
//  Copyright © 2017 Junior Samaroo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// objects/classes use pointers
@property(nonatomic, strong) NSString *name;
@property(nonatomic) NSNumber *bankBalance;

// native types use no pointers
@property(nonatomic) int age;
@property(nonatomic) NSInteger debt;

@end

