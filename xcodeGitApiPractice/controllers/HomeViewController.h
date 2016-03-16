//
//  HomeViewController.h
//  xcodeGitApiPractice
//
//  Created by mkdev on 14/03/16.
//  Copyright © 2016 Monitron. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController
@property (strong, nonatomic) NSDictionary *userData;
@property (strong, nonatomic) UIImageView *profileImageView;
@property (strong, nonatomic) UILabel *nameLabelView;
@property (strong, nonatomic) UILabel *reposlabelView;
@property (strong, nonatomic) UILabel *typelabelView;
- (void)showRepositoriesController;
@end
