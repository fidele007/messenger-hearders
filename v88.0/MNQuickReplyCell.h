/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNQuickReplyCellDelegate;
@class FBMQuickReply, FBUserSession, FBImageDownloader, UIImage, UIView;

@interface MNQuickReplyCell : UIView {

	FBMQuickReply* _quickReply;
	FBUserSession* _session;
	FBImageDownloader* _imageDownloader;
	UIImage* _placeHolderImage;
	UIView* _previewView;
	id<MNQuickReplyCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNQuickReplyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_genericBubbleViewFromQuickReply:(id)arg1 ofType:(long long)arg2 defaultImageUrl:(id)arg3 ;
-(BOOL)_canShowLocationIcon;
-(void)_setImageUrlIfApplicable:(id)arg1 forBubbleView:(id)arg2 defaultImageUrl:(id)arg3 ;
-(BOOL)_canShowImage;
-(void)setUpWithQuickReply:(id)arg1 session:(id)arg2 ;
-(void)setDelegate:(id<MNQuickReplyCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNQuickReplyCellDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

