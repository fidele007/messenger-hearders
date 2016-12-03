/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MNLaunchImageView : UIView {

	UIView* _navigationBar;
	UIView* _navigationBarBottomBorder;
	UIView* _tabBar;
	UIView* _tabBarTopBorder;
	BOOL _showsTabBar;

}

@property (assign,nonatomic) BOOL showsTabBar;              //@synthesize showsTabBar=_showsTabBar - In the implementation block
-(id)initWithFrame:(CGRect)arg1 navigationBarColor:(id)arg2 ;
-(void)setShowsTabBar:(BOOL)arg1 ;
-(BOOL)showsTabBar;
-(void)layoutSubviews;
@end
