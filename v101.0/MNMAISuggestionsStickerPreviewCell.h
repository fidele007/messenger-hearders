/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Messenger/FBMStickerViewDelegate.h>

@class FBMStickerView, UIView, MNMAISuggestionsStickerPreviewCellViewModel, NSString;

@interface MNMAISuggestionsStickerPreviewCell : UITableViewCell <FBMStickerViewDelegate> {

	FBMStickerView* _stickerPreviewView;
	UIView* _separatorView;
	MNMAISuggestionsStickerPreviewCellViewModel* _viewModel;

}

@property (nonatomic,copy) MNMAISuggestionsStickerPreviewCellViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightThatFits:(CGSize)arg1 forViewModel:(id)arg2 ;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(id)initWithStickerResourceManager:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(MNMAISuggestionsStickerPreviewCellViewModel *)viewModel;
-(void)setViewModel:(MNMAISuggestionsStickerPreviewCellViewModel *)arg1 ;
@end

