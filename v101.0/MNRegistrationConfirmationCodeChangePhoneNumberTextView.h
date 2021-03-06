/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate;
@class FBRichTextView, LPPhoneNumber;

@interface MNRegistrationConfirmationCodeChangePhoneNumberTextView : UIView {

	FBRichTextView* _changePhoneNumberTextView;
	NSRange _changeButtonStringRange;
	LPPhoneNumber* _phoneNumber;
	id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)attributedLabelAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_setChangePhoneNumberText:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 shouldShowChangePhoneNumberButton:(BOOL)arg3 ;
-(void)setDelegate:(id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate>)delegate;
@end

