/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNMediaTrayViewDelegate;
@class MNLoadingView, UIView, MNMediaTrayEmptyCameraRollView, UICollectionView, UIButton, MNMediaTrayConfiguration;

@interface MNMediaTrayView : UIView {

	unsigned long long _viewState;
	MNLoadingView* _loadingView;
	UIView* _photoPermissionView;
	MNMediaTrayEmptyCameraRollView* _emptyCameraRollView;
	UICollectionView* _mediaCollectionView;
	UIButton* _photoPickerButton;
	BOOL _shouldShowPhotoPickerButton;
	MNMediaTrayConfiguration* _config;
	id<MNMediaTrayViewDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (assign,nonatomic,__weak) id<MNMediaTrayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_viewForViewState:(unsigned long long)arg1 ;
-(id)initWithMediaTrayConfiguration:(id)arg1 permisionsView:(id)arg2 ;
-(void)setShouldShowPhotoPickerButton:(BOOL)arg1 ;
-(void)_photoPickerButtonTapped:(id)arg1 ;
-(void)_initializeMediaCollectionViewIfNeeded;
-(void)_initializeEmptyCameraRollViewIfNeeded;
-(id)_viewForCurrentViewState;
-(void)_layoutPhotoPickerButton;
-(void)_initializePhotoPickerButtonIfNeeded;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMediaTrayViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMediaTrayViewDelegate>)delegate;
-(UICollectionView *)collectionView;
-(void)setViewState:(unsigned long long)arg1 ;
@end

