/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNProfilePictureSelectionViewDelegate;
@class UIImageView, UILabel, UIButton, UIView;

@interface MNProfilePictureSelectionView : UIView {

	UIImageView* _selfieStickerImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _galleryButton;
	UIButton* _imageCaptureButton;
	UIButton* _notNowButton;
	UIView* _flexibleMarginsView;
	id<MNProfilePictureSelectionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNProfilePictureSelectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_galleryButtonPressed;
-(void)_takePhotoPressed;
-(void)_notNowPressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNProfilePictureSelectionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNProfilePictureSelectionViewDelegate>)delegate;
@end

