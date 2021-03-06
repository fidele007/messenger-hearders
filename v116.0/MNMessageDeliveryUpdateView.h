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

@class MNCommerceMapView, UIView, FBRichTextView, MNCommerceListView, MNBusinessNavigationHandler, MNMessageDeliveryUpdateViewModel, NSString;

@interface MNMessageDeliveryUpdateView : UIControl <MNAttachmentView> {

	MNCommerceMapView* _mapView;
	UIView* _mapBottomLine;
	FBRichTextView* _information1TitleLabel;
	FBRichTextView* _information1TextLabel;
	FBRichTextView* _information2TitleLabel;
	FBRichTextView* _information2TextLabel;
	FBRichTextView* _itemListTitleLabel;
	MNCommerceListView* _itemListView;
	MNBusinessNavigationHandler* _navigationHandler;
	MNMessageDeliveryUpdateViewModel* _viewModel;

}

@property (nonatomic,copy) MNMessageDeliveryUpdateViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didSelectMessage;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 navigationHandler:(id)arg3 ;
-(void)layoutSubviews;
-(MNMessageDeliveryUpdateViewModel *)viewModel;
-(void)setViewModel:(MNMessageDeliveryUpdateViewModel *)arg1 ;
@end

