/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBBrowserChromeDelegate;
@class UIImageView, UILabel, UIButton, UIToolbar, NSString;

@interface FBBrowserShareQuoteView : UIView {

	UIImageView* _iconView;
	UILabel* _quoteTextLabel;
	UIButton* _shareButton;
	UIToolbar* _containerView;
	double _buttonWidth;
	NSString* _shareQuoteText;
	id<FBBrowserChromeDelegate> _delegate;

}

@property (nonatomic,copy) NSString * shareQuoteText;                                  //@synthesize shareQuoteText=_shareQuoteText - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserChromeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setShareQuoteText:(NSString *)arg1 ;
-(NSString *)shareQuoteText;
-(void)_shareQuoteAction;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBBrowserChromeDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBBrowserChromeDelegate>)delegate;
@end

