/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBNetworkImageView, FBItemView_DEPRECATED, FBFourRoundedCornerView, UIImageView, POPSpringAnimation;

@interface FBChatHeadSideFeedView : UIView {

	FBNetworkImageView* _profileImageView;
	FBItemView_DEPRECATED* _detailView;
	FBFourRoundedCornerView* _roundedCornerView;
	UIImageView* _statusOnlineImageView;
	double _depressBounceValue;
	POPSpringAnimation* _depressBounceAnimation;
	BOOL _isHighlighted;
	BOOL _readyToAnimate;

}

@property (assign,nonatomic) BOOL readyToAnimate;              //@synthesize readyToAnimate=_readyToAnimate - In the implementation block
+(double)chatHeadSideFeedViewHeight;
+(id)attributedChatListTitleForString:(id)arg1 ;
+(id)attributedChatListSubtitleForString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)_scaledFade:(BOOL)arg1 ;
-(void)setReadyToAnimate:(BOOL)arg1 ;
-(void)_animateTouchDepression:(BOOL)arg1 ;
-(void)_setDepressBounceValue:(double)arg1 ;
-(void)prepareForReuseWillAnimateIn:(BOOL)arg1 ;
-(void)setContentWithImageURL:(id)arg1 name:(id)arg2 detail:(id)arg3 isOnline:(BOOL)arg4 ;
-(void)animateEntranceWithDelay:(double)arg1 ;
-(void)animateDismissalWithDelay:(double)arg1 ;
-(BOOL)readyToAnimate;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

