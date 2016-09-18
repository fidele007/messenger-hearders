/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBToastContainerViewDelegate.h>

@protocol MNGroupsRoomEntryPointViewDelegate;
@class FBListViewScrollManager, FBLazyCreator, MNLoadingView, UICollectionView, FBToastContainerView, NSString;

@interface MNGroupsView : UIView <FBToastContainerViewDelegate> {

	FBListViewScrollManager* _scrollManager;
	FBLazyCreator* _loadingViewCreator;
	MNLoadingView* _loadingView;
	FBLazyCreator* _roomEntryPointViewCreator;
	BOOL _showRoomEntryPoint;
	unsigned long long _viewState;
	UICollectionView* _groupsCollectionView;
	FBToastContainerView* _toastContainerView;
	id<MNGroupsRoomEntryPointViewDelegate> _roomEntryPointDelegate;

}

@property (assign,nonatomic) unsigned long long viewState;                                                      //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) UICollectionView * groupsCollectionView;                                         //@synthesize groupsCollectionView=_groupsCollectionView - In the implementation block
@property (nonatomic,readonly) FBToastContainerView * toastContainerView;                                       //@synthesize toastContainerView=_toastContainerView - In the implementation block
@property (assign,nonatomic) BOOL showRoomEntryPoint;                                                           //@synthesize showRoomEntryPoint=_showRoomEntryPoint - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupsRoomEntryPointViewDelegate> roomEntryPointDelegate;              //@synthesize roomEntryPointDelegate=_roomEntryPointDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MNGroupsRoomEntryPointViewDelegate>)roomEntryPointDelegate;
-(void)_layoutToastContainerView;
-(void)_updateCollectionViewContentInset;
-(CGRect)_topToastViewFrame;
-(FBToastContainerView *)toastContainerView;
-(UICollectionView *)groupsCollectionView;
-(void)setViewState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)_viewForViewState:(unsigned long long)arg1 ;
-(void)_toastContainerViewWillChangeWithDuration:(double)arg1 ;
-(void)_updateTableViewContentInsets;
-(void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)scrollToBottomAnimated:(BOOL)arg1 ;
-(CGRect)_toastViewFrame;
-(void)setShowRoomEntryPoint:(BOOL)arg1 ;
-(void)setRoomEntryPointDelegate:(id<MNGroupsRoomEntryPointViewDelegate>)arg1 ;
-(BOOL)showRoomEntryPoint;
-(void)setViewState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(unsigned long long)viewState;
@end

