/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UICollectionView, NSDictionary;

@interface CKComponentBoundsAnimationCollectionViewContext : NSObject {

	UICollectionView* _collectionView;
	long long _numberOfSections;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _numberOfItemsInSection;
	NSDictionary* _indexPathsToSnapshotViews;
	NSDictionary* _supplementaryElementIndexPathsToSnapshotViews;
	NSDictionary* _indexPathsToOriginalLayoutAttributes;
	NSDictionary* _supplementaryElementIndexPathsToOriginalLayoutAttributes;

}
-(void)applyBoundsAnimationToCollectionView:(const CKComponentBoundsAnimation*)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
@end

