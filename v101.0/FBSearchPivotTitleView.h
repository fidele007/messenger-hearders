/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBSearchPivotTitleViewDelegate;
@class FBUserSession, FBRichTextView, NSAttributedString;

@interface FBSearchPivotTitleView : UIView {

	FBUserSession* _session;
	FBRichTextView* _titleView;
	id<FBSearchPivotTitleViewDelegate> _delegate;
	NSAttributedString* _pivotQueryAttributedString;

}

@property (assign,nonatomic,__weak) id<FBSearchPivotTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * pivotQueryAttributedString;                   //@synthesize pivotQueryAttributedString=_pivotQueryAttributedString - In the implementation block
+(double)heightForSession:(id)arg1 ;
+(CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(CGSize)arg2 session:(id)arg3 ;
-(void)_didTapBackground:(id)arg1 ;
-(void)_didTapTitle:(id)arg1 withEvent:(id)arg2 ;
-(void)_calculateTitlesSizesIfNeeded;
-(void)setPivotQueryAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)pivotQueryAttributedString;
-(void)setDelegate:(id<FBSearchPivotTitleViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<FBSearchPivotTitleViewDelegate>)delegate;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)_updateUI;
-(id)initWithSession:(id)arg1 ;
@end

