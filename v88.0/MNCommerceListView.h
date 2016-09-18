/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNBusinessView.h>

@class NSMutableArray, FBRichTextView, FBImageDownloader, MNCommerceListViewModel, NSString;

@interface MNCommerceListView : UIView <MNBusinessView> {

	NSMutableArray* _itemViews;
	FBRichTextView* _moreItemsLabel;
	FBImageDownloader* _imageDownloader;
	MNCommerceListViewModel* _viewModel;

}

@property (nonatomic,copy) MNCommerceListViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(MNCommerceListViewModel *)viewModel;
-(void)setViewModel:(MNCommerceListViewModel *)arg1 ;
@end

