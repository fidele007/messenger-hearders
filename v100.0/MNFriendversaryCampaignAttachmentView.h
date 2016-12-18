/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@class FBWebImageView, FBRichTextView, MNFriendversaryCampaignAttachmentViewModel, FBWebImageFocusPointLayout, NSString;

@interface MNFriendversaryCampaignAttachmentView : UIControl <MNAttachmentView> {

	FBWebImageView* _photoCollageView;
	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	FBWebImageView* _placeHolderImageView;
	MNFriendversaryCampaignAttachmentViewModel* _friendversaryCampaignViewModel;
	FBWebImageFocusPointLayout* _focusLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_updateSubtitle;
-(id)initWithImageDownloaderFactory:(id)arg1 ;
-(void)_updatePhotoCollage;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)viewModel;
-(void)_updatePlaceholderImage;
-(void)setViewModel:(id)arg1 ;
-(void)_updateTitle;
@end

