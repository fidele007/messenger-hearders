/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDataSource_Draggable <UICollectionViewDataSource>
@optional
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 canRemoveItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 removeItemAtIndexPath:(id)arg2 cell:(id)arg3;

@required
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@end

