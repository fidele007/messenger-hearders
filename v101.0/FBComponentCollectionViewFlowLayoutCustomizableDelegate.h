/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol FBComponentsCollectionViewItemSizeProvider;
@class NSString;

@interface FBComponentCollectionViewFlowLayoutCustomizableDelegate : NSObject <UICollectionViewDelegateFlowLayout> {

	id<FBComponentsCollectionViewItemSizeProvider> _componentsCollectionViewItemSizeProvider;
	double _lineSpacing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItemSizeProvider:(id)arg1 ;
-(id)initWithItemSizeProvider:(id)arg1 lineSpacing:(double)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

