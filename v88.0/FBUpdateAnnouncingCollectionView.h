/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionView.h>

@class FBCollectionViewUpdateListenerAnnouncer;

@interface FBUpdateAnnouncingCollectionView : UICollectionView {

	BOOL _performingBatchUpdates;
	FBCollectionViewUpdateListenerAnnouncer* _listenerAnnouncer;

}

@property (nonatomic,readonly) FBCollectionViewUpdateListenerAnnouncer * listenerAnnouncer;              //@synthesize listenerAnnouncer=_listenerAnnouncer - In the implementation block
-(FBCollectionViewUpdateListenerAnnouncer *)listenerAnnouncer;
-(void)willBeginSingleUpdate;
-(void)didBeginSingleUpdate;
-(void)willEndSingleUpdate;
-(void)didEndSingleUpdate;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
@end
