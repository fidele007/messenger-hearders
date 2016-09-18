/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNConversationContactCollectionViewCell.h>

@class UIButton, UIView, UIImageView, MNConversationContactCollectionViewActionCellState;

@interface MNConversationContactCollectionViewActionCell : MNConversationContactCollectionViewCell {

	UIButton* _actionButton;
	UIView* _blurView;
	UIImageView* _confirmImageView;
	MNConversationContactCollectionViewActionCellState* _state;

}

@property (nonatomic,copy) MNConversationContactCollectionViewActionCellState * state;              //@synthesize state=_state - In the implementation block
-(void)_initBlurViewIfNeeded;
-(void)_initActionButtonIfNeeded;
-(void)_initConfirmationViewIfNeeded;
-(void)_updateSubviewsState;
-(void)setConfirmImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNConversationContactCollectionViewActionCellState *)state;
-(void)setState:(MNConversationContactCollectionViewActionCellState *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setState:(id)arg1 animated:(BOOL)arg2 ;
@end

