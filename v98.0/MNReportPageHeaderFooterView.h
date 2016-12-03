/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNReportPageHeaderFooterViewDelegate;
@class FBRichTextView, NSAttributedString;

@interface MNReportPageHeaderFooterView : UIView {

	FBRichTextView* _textView;
	id<MNReportPageHeaderFooterViewDelegate> _delegate;

}

@property (nonatomic,copy) NSAttributedString * attributedString; 
@property (assign,nonatomic,__weak) id<MNReportPageHeaderFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeThatFitsSize:(CGSize)arg1 withAttributedString:(id)arg2 ;
-(void)_didTapSelf;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNReportPageHeaderFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNReportPageHeaderFooterViewDelegate>)delegate;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
@end
