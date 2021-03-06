/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBCollectionViewUpdateListener.h>

@class NSString;

@interface FBCollectionViewUpdateListenerAnnouncer : FBAnnouncerBase <FBCollectionViewUpdateListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionViewWillBeginSingleUpdate:(id)arg1 ;
-(void)collectionViewDidBeginSingleUpdate:(id)arg1 ;
-(void)collectionViewWillEndSingleUpdate:(id)arg1 ;
-(void)collectionViewDidEndSingleUpdate:(id)arg1 ;
-(void)collectionView:(id)arg1 willInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willReloadItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didReloadItemsAtIndexPaths:(id)arg2 ;
-(void)collectionViewWillBeginUpdates:(id)arg1 ;
-(void)collectionViewDidBeginUpdates:(id)arg1 ;
-(void)collectionViewWillEndUpdates:(id)arg1 ;
-(void)collectionViewDidEndUpdates:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

