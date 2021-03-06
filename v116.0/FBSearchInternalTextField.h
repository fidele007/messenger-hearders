/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@interface FBSearchInternalTextField : UITextField {

	BOOL _hasHighlight;
	double _leftAccessoryViewInnerMargin;
	double _rightAccessoryViewInnerMargin;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) double leftAccessoryViewInnerMargin;               //@synthesize leftAccessoryViewInnerMargin=_leftAccessoryViewInnerMargin - In the implementation block
@property (assign,nonatomic) double rightAccessoryViewInnerMargin;              //@synthesize rightAccessoryViewInnerMargin=_rightAccessoryViewInnerMargin - In the implementation block
@property (assign,nonatomic) BOOL hasHighlight;                                 //@synthesize hasHighlight=_hasHighlight - In the implementation block
-(void)setLeftAccessoryViewInnerMargin:(double)arg1 ;
-(void)setRightAccessoryViewInnerMargin:(double)arg1 ;
-(void)setHasHighlight:(BOOL)arg1 ;
-(double)leftAccessoryViewInnerMargin;
-(double)rightAccessoryViewInnerMargin;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(BOOL)hasHighlight;
@end

