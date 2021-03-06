/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MNMessagesBottomBarView : UIView {

	UIView* _supplementaryView;
	UIView* _composerView;
	UIView* _groupChatUserView;
	BOOL _showsSupplementaryView;

}

@property (nonatomic,retain) UIView * supplementaryView;               //@synthesize supplementaryView=_supplementaryView - In the implementation block
@property (nonatomic,retain) UIView * composerView;                    //@synthesize composerView=_composerView - In the implementation block
@property (nonatomic,retain) UIView * groupChatUserView;               //@synthesize groupChatUserView=_groupChatUserView - In the implementation block
@property (assign,nonatomic) BOOL showsSupplementaryView;              //@synthesize showsSupplementaryView=_showsSupplementaryView - In the implementation block
-(UIView *)composerView;
-(UIView *)supplementaryView;
-(UIView *)groupChatUserView;
-(void)setSupplementaryView:(UIView *)arg1 ;
-(void)setGroupChatUserView:(UIView *)arg1 ;
-(BOOL)showsSupplementaryView;
-(void)setShowsSupplementaryView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setComposerView:(UIView *)arg1 ;
-(void)mn_invalidateLayoutForView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowsSupplementaryView:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

