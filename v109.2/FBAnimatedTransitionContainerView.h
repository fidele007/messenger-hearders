/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUIEmbeddedNavigationBarDelegate.h>

@class CALayer, UIViewController, FBUIEmbeddedNavigationBar, FBUIEmbeddedNavigationScrollHandler;

@interface FBAnimatedTransitionContainerView : UIView <FBUIEmbeddedNavigationBarDelegate> {

	CALayer* _dimmingLayer;
	UIViewController* _viewController;
	FBUIEmbeddedNavigationBar* _embeddedNavBar;
	FBUIEmbeddedNavigationScrollHandler* _embeddedNavBarScrollHandler;

}

@property (nonatomic,retain) FBUIEmbeddedNavigationScrollHandler * embeddedNavBarScrollHandler;              //@synthesize embeddedNavBarScrollHandler=_embeddedNavBarScrollHandler - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                                     //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) CALayer * dimmingLayer; 
@property (nonatomic,readonly) FBUIEmbeddedNavigationBar * embeddedNavBar;                                   //@synthesize embeddedNavBar=_embeddedNavBar - In the implementation block
-(void)embeddedNavigationBarSizeChanged:(id)arg1 ;
-(void)embeddedNavigationBarBackButtonPressed:(id)arg1 ;
-(CALayer *)dimmingLayer;
-(void)navBarTapped:(id)arg1 ;
-(void)_createDimmingLayerIfNeeded;
-(void)setEmbeddedNavBarScrollHandler:(FBUIEmbeddedNavigationScrollHandler *)arg1 ;
-(FBUIEmbeddedNavigationBar *)embeddedNavBar;
-(FBUIEmbeddedNavigationScrollHandler *)embeddedNavBarScrollHandler;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(void)_updateContentInsets;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
@end

