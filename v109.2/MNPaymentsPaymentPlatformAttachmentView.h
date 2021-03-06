/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsPaymentPlatformAttachmentCTAViewDelegate.h>
#import <Messenger/MNAttachmentView.h>

@class NSArray, MNPaymentsPaymentPlatformAttachmentCTAView, FBImageDownloader, MNPaymentsPaymentPlatformAttachmentActionHandler, MNPaymentsPaymentPlatformAttachmentActionModel, NSString;

@interface MNPaymentsPaymentPlatformAttachmentView : UIView <MNPaymentsPaymentPlatformAttachmentCTAViewDelegate, MNAttachmentView> {

	NSArray* _itemViews;
	NSArray* _componentViews;
	NSArray* _separators;
	MNPaymentsPaymentPlatformAttachmentCTAView* _CTAView;
	FBImageDownloader* _imageDownloader;
	MNPaymentsPaymentPlatformAttachmentActionHandler* _actionHandler;
	MNPaymentsPaymentPlatformAttachmentActionModel* _attachmentClickAction;
	id _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel;                            //@synthesize viewModel=_viewModel - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)didSelectActionWithActionType:(unsigned long long)arg1 actionDetail:(id)arg2 ;
-(void)_didClickAttachment;
-(void)_handleActionWithActionType:(unsigned long long)arg1 actionDetail:(id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 actionHandler:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

