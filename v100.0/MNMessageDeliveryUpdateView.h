/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@class MNCommerceMapView, UIView, MNBusinessLogoView, FBRichTextView, MNCommerceListView, MNBusinessNavigationHandler, MNMessageDeliveryUpdateViewModel, NSString;

@interface MNMessageDeliveryUpdateView : UIControl <MNAttachmentView> {

	MNCommerceMapView* _mapView;
	UIView* _mapBottomLine;
	MNBusinessLogoView* _carrierLogoView;
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
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 navigationHandler:(id)arg3 ;
-(void)_didSelectMessage;
-(void)markSenderImage;
-(void)layoutSubviews;
-(MNMessageDeliveryUpdateViewModel *)viewModel;
-(void)setViewModel:(MNMessageDeliveryUpdateViewModel *)arg1 ;
@end
