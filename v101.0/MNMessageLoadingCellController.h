/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageCellTapToLoadMoreViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMessageLoadingCellProviding.h>

@protocol MNMessageLoadingCellControllerDelegate;
@class UICollectionView, NSString;

@interface MNMessageLoadingCellController : NSObject <MNMessageCellTapToLoadMoreViewDelegate, FBClassProvidable, MNMessageLoadingCellProviding> {

	UICollectionView* _collectionView;
	id<MNMessageLoadingCellControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageLoadingCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)awakeWithCollectionView:(id)arg1 ;
-(id)layoutElements;
-(void)userDidTapButtonToLoadMoreMessages:(id)arg1 ;
-(id)_viewToMountForType:(long long)arg1 ;
-(id)cellWithIndexPath:(id)arg1 inCollectionView:(id)arg2 forType:(long long)arg3 ;
-(void)setDelegate:(id<MNMessageLoadingCellControllerDelegate>)arg1 ;
-(id<MNMessageLoadingCellControllerDelegate>)delegate;
@end
