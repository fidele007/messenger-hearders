/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBGrowingTextViewHeightCalculator, UILabel, UIView, FBTextView;

@interface MNLocalAssetsQuickShareComposeView : UIView {

	FBGrowingTextViewHeightCalculator* _heightCalculator;
	UILabel* _recipientsLabel;
	long long _layoutType;
	UIView* _previewView;
	FBTextView* _textView;

}

@property (nonatomic,retain) UIView * previewView;               //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) FBTextView * textView;              //@synthesize textView=_textView - In the implementation block
-(double)_textViewHeight;
-(long long)_layoutTypeWithSize:(CGSize)arg1 ;
-(id)initWithRecipientsName:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextView:(FBTextView *)arg1 ;
-(FBTextView *)textView;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
@end

