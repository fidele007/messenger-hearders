/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNBubbleDisplayConfiguring;
@class FBNetworkImageView, UIView, MNCommerceItemView, MNBusinessSeparatorView, FBRichTextView, UIButton, UIImageView, MNBusinessNavigationHandler, MNAgentSuggestedItemViewModel, NSString;

@interface MNAgentSuggestedItemView : UIControl <MNAttachmentView> {

	FBNetworkImageView* _itemPreview;
	UIView* _itemPreviewBottomLine;
	MNCommerceItemView* _itemView;
	MNBusinessSeparatorView* _separatorView;
	UIView* _whiteView;
	FBRichTextView* _totalTextView;
	UIButton* _buyButton;
	UIImageView* _purchasedCheckmarkView;
	FBRichTextView* _purchasedTextView;
	id<MNBubbleDisplayConfiguring> _bubbleDisplayConfigurer;
	MNBusinessNavigationHandler* _navigationHandler;
	MNAgentSuggestedItemViewModel* _viewModel;

}

@property (nonatomic,retain) MNBusinessNavigationHandler * navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (nonatomic,copy) MNAgentSuggestedItemViewModel * viewModel;                      //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(MNBusinessNavigationHandler *)navigationHandler;
-(void)setNavigationHandler:(MNBusinessNavigationHandler *)arg1 ;
-(void)_didSelectMessage;
-(void)_didTapBuyButton;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 bubbleDisplayConfigurer:(id)arg3 ;
-(void)layoutSubviews;
-(MNAgentSuggestedItemViewModel *)viewModel;
-(void)_updateLayout;
-(void)setViewModel:(MNAgentSuggestedItemViewModel *)arg1 ;
@end

