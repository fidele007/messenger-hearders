/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

