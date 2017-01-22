/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsViewModelConfigurable.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@class FBRichTextView, FBNetworkImageView, FBFourRoundedCornerView, NSString;

@interface FBPaymentsParticipantView : UIView <FBPaymentsViewModelConfigurable, FBPaymentsEdgeInsetsConfigurable> {

	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	FBNetworkImageView* _imageView;
	FBFourRoundedCornerView* _cornerView;
	long long _imageStyle;
	id _viewModel;
	UIEdgeInsets _edgeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel;                            //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end
