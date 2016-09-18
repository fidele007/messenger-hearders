/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(double)leftAccessoryViewInnerMargin;
-(void)setLeftAccessoryViewInnerMargin:(double)arg1 ;
-(double)rightAccessoryViewInnerMargin;
-(void)setRightAccessoryViewInnerMargin:(double)arg1 ;
-(void)setHasHighlight:(BOOL)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(BOOL)hasHighlight;
@end

