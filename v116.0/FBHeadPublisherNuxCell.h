/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBHeadPublisherNuxTableViewCellDelegate;
@class FBRichTextView, UIButton, NSAttributedString;

@interface FBHeadPublisherNuxCell : UIView {

	FBRichTextView* _richTextView;
	UIButton* _dismissButton;
	id<FBHeadPublisherNuxTableViewCellDelegate> _delegate;

}

@property (nonatomic,copy) NSAttributedString * nuxText; 
@property (assign,nonatomic) id<FBHeadPublisherNuxTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForText:(id)arg1 width:(double)arg2 ;
+(id)backgroundColor;
-(void)_didTapDismissButton:(id)arg1 ;
-(NSAttributedString *)nuxText;
-(void)setNuxText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBHeadPublisherNuxTableViewCellDelegate>)arg1 ;
-(id<FBHeadPublisherNuxTableViewCellDelegate>)delegate;
@end

