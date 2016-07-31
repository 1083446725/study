//
//  DetailViewController.h
//  hello
//
//  Created by guodongdong on 16/7/31.
//  Copyright © 2016年 guodongdong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

