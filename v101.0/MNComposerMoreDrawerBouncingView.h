/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNComposerDragHeaderView;

@interface MNComposerMoreDrawerBouncingView : UIView {

	UIView* _composerBarShadowView;
	UIView* _containerView;
	UIView* _dragHeaderBorderView;
	MNComposerDragHeaderView* _dragHeaderView;
	UIView* _maskView;
	BOOL _moreDrawerHidden;

}

@property (assign,getter=isMoreDrawerHidden,nonatomic) BOOL moreDrawerHidden;              //@synthesize moreDrawerHidden=_moreDrawerHidden - In the implementation block
-(void)setMoreDrawerHidden:(BOOL)arg1 ;
-(BOOL)isMoreDrawerHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end
