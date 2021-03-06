/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMediaTrayActionViewDelegate.h>

@protocol MNMediaTrayViewDelegate;
@class MNLoadingView, UIView, MNMediaTrayEmptyCameraRollView, UICollectionView, MNMediaTrayActionView, MNMediaTrayConfiguration, NSString;

@interface MNMediaTrayView : UIView <MNMediaTrayActionViewDelegate> {

	unsigned long long _viewState;
	MNLoadingView* _loadingView;
	UIView* _photoPermissionView;
	MNMediaTrayEmptyCameraRollView* _emptyCameraRollView;
	UICollectionView* _mediaCollectionView;
	MNMediaTrayActionView* _actionView;
	BOOL _shouldShowActionView;
	MNMediaTrayConfiguration* _config;
	id<MNMediaTrayViewDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (assign,nonatomic,__weak) id<MNMediaTrayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_viewForViewState:(unsigned long long)arg1 ;
-(void)updateSelectedAssets:(long long)arg1 ;
-(id)initWithMediaTrayConfiguration:(id)arg1 permisionsView:(id)arg2 ;
-(void)setShouldShowActionView:(BOOL)arg1 ;
-(void)mediaTrayActioNViewDidTapSendButton:(id)arg1 ;
-(void)mediaTrayActionViewDidTapPhotoPicker:(id)arg1 ;
-(void)_initializeMediaCollectionViewIfNeeded;
-(void)_initializeEmptyCameraRollViewIfNeeded;
-(id)_viewForCurrentViewState;
-(void)_layoutActionView;
-(void)_initializeActionViewIfNeeded;
-(void)setViewState:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNMediaTrayViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MNMediaTrayViewDelegate>)delegate;
-(UICollectionView *)collectionView;
@end

