/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBRichTextView, UIView, NSString;

@interface FBPaymentsSettingHeaderView : UIView {

	FBRichTextView* _titleTextView;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	BOOL _shouldDisplayLoadingIndicator;
	UIView* _rightAccessoryView;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) UIView * rightAccessoryView;              //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayLoadingIndicator;              //@synthesize shouldDisplayLoadingIndicator=_shouldDisplayLoadingIndicator - In the implementation block
-(void)setShouldDisplayLoadingIndicator:(BOOL)arg1 ;
-(void)setRightAccessoryView:(UIView *)arg1 ;
-(UIView *)rightAccessoryView;
-(BOOL)shouldDisplayLoadingIndicator;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

