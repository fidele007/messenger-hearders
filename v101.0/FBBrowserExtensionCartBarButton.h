/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol FBBrowserExtensionCartBarButtonDelegate;
@class FBBadgeView;

@interface FBBrowserExtensionCartBarButton : UIButton {

	FBBadgeView* _badgeView;
	id<FBBrowserExtensionCartBarButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBBrowserExtensionCartBarButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateBadgeCount:(long long)arg1 ;
-(id)initWithItemCount:(long long)arg1 ;
-(void)_didTapButton;
-(void)_layoutBadgeView;
-(void)setDelegate:(id<FBBrowserExtensionCartBarButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBBrowserExtensionCartBarButtonDelegate>)delegate;
@end

