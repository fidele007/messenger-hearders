/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBGradientView, FBButtonBarButton, UIView, FBActionBar, FBActionBarItem;

@interface FBActionBarWithProminentButtonView : UIView {

	FBGradientView* _bottomShadow;
	BOOL _shouldUsePageEntityHeader;
	unsigned long long _style;
	FBButtonBarButton* _bigCTAButton;
	UIView* _buttonSeparatorView;
	UIView* _lineSeparatorView;
	FBActionBar* _actionBar;
	FBActionBarItem* _prominentActionBarItem;

}

@property (nonatomic,retain) FBActionBar * actionBar;                               //@synthesize actionBar=_actionBar - In the implementation block
@property (nonatomic,retain) FBActionBarItem * prominentActionBarItem;              //@synthesize prominentActionBarItem=_prominentActionBarItem - In the implementation block
-(FBActionBar *)actionBar;
-(id)initWithStyle:(unsigned long long)arg1 shouldUsePageEntityHeader:(BOOL)arg2 ;
-(void)setActionBar:(FBActionBar *)arg1 ;
-(void)setProminentActionBarItem:(FBActionBarItem *)arg1 ;
-(FBActionBarItem *)prominentActionBarItem;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
