/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNThreadBottomBannerViewDelegate;
@class FBRichTextView, UIToolbar, NSAttributedString;

@interface MNThreadBottomBannerView : UIView {

	FBRichTextView* _textView;
	UIToolbar* _toolbar;
	NSAttributedString* _attributedText;
	id<MNThreadBottomBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadBottomBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                 //@synthesize attributedText=_attributedText - In the implementation block
-(void)_initToolbar;
-(id)initWithFrame:(CGRect)arg1 attributedText:(id)arg2 ;
-(void)_initTextView;
-(void)_attributedAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<MNThreadBottomBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNThreadBottomBannerViewDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
@end

