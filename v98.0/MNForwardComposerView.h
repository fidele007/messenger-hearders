/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBGrowingTextViewHeightCalculator, UIView, FBTextView;

@interface MNForwardComposerView : UIView {

	FBGrowingTextViewHeightCalculator* _heightCalculator;
	unsigned long long _layoutMode;
	UIView* _previewView;
	FBTextView* _textView;

}

@property (nonatomic,retain) UIView * previewView;                 //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) FBTextView * textView;              //@synthesize textView=_textView - In the implementation block
-(double)_textViewHeight;
-(id)initWithFrame:(CGRect)arg1 layoutMode:(unsigned long long)arg2 shouldShowCustomMessageTextView:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBTextView *)textView;
-(void)_layoutHorizontal;
-(void)_layoutVertical;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
@end
