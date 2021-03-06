/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBAcceptOrRejectSuggestionProtocol.h>

@protocol FBPhotoLocationSuggestionViewDelegate;
@class FBItemView, FBItemViewConfigBuilder, FBNetworkImageView, UIView, FBAcceptOrRejectSuggestionView, FBUserSession, FBMemPhoto, NSMutableAttributedString, NSString;

@interface FBPhotoLocationSuggestionView : UIView <FBAcceptOrRejectSuggestionProtocol> {

	FBItemView* _contentView;
	FBItemViewConfigBuilder* _contentViewConfigBuilder;
	FBNetworkImageView* _leftImageView;
	UIView* _middleView;
	FBAcceptOrRejectSuggestionView* _rightView;
	FBUserSession* _session;
	FBMemPhoto* _photo;
	NSMutableAttributedString* _title;
	NSMutableAttributedString* _subtitle;
	id<FBPhotoLocationSuggestionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPhotoLocationSuggestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 photo:(id)arg2 ;
-(void)updateSuggestionForPhoto:(id)arg1 ;
-(void)setUpThumbnailAndContentView;
-(id)_setUpRightView;
-(id)_setUpMiddleView;
-(void)didTapAcceptButton:(id)arg1 ;
-(void)didTapRejectButton:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoLocationSuggestionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPhotoLocationSuggestionViewDelegate>)delegate;
@end

