/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBNetworkImageView, FBRichTextView, UIImageView, MNCommerceThreadDetailsOrderViewModel;

@interface MNCommerceThreadDetailsOrderView : UIView {

	FBNetworkImageView* _previewImageView;
	FBRichTextView* _orderNameLabel;
	FBRichTextView* _orderDescriptionLabel;
	UIImageView* _overlayImageView;
	MNCommerceThreadDetailsOrderViewModel* _viewModel;

}

@property (nonatomic,retain) MNCommerceThreadDetailsOrderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)height;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(MNCommerceThreadDetailsOrderViewModel *)viewModel;
-(void)setViewModel:(MNCommerceThreadDetailsOrderViewModel *)arg1 ;
@end

