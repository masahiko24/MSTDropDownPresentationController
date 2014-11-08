//
//  UIViewController+MSTDropDownPresentationControllerSupport.h
//  MSTDropDownPresentationController
//
//  Created by Masahiko Tsujita on 2014/11/04.
//  Copyright (c) 2014年 Masahiko Tsujita. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (MSTDropDownPresentationControllerSupport)

- (id <UIViewControllerTransitioningDelegate>)mst_dropDownTransitioningDelegate;

@end
