/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MNPSBookingMessageInputTextViewDelegate;
@class MNPSDividerView, MNPSBookingMessageInputModel, UILabel, FBTextView, NSString;

@interface MNPSBookingMessageInputTextView : UIView <UITextViewDelegate> {

	id<MNPSBookingMessageInputTextViewDelegate> _delegate;
	MNPSDividerView* _dividerView;
	MNPSBookingMessageInputModel* _model;
	UILabel* _subtitleLabel;
	FBTextView* _textView;
	UILabel* _titleLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 model:(id)arg3 ;
-(void)_addSubtitleLabel;
-(void)_addTextView;
-(void)_addDividerView;
-(void)_inputAccessoryViewDone;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_addTitleLabel;
@end

