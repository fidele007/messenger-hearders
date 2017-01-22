/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UICollectionView, NSArray, NSString;

@interface PMATagCollectionViewSizeCalculator : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _tagCollectionView;
	unsigned long long _labelStyle;
	unsigned long long _labelWeight;
	double _tagHeight;
	NSArray* _tagArray;

}

@property (nonatomic,copy) NSArray * tagArray;                      //@synthesize tagArray=_tagArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInterItemSpacing:(double)arg1 interLineSpacing:(double)arg2 labelStyle:(unsigned long long)arg3 labelWeight:(unsigned long long)arg4 tagHeight:(double)arg5 ;
-(void)setTagArray:(NSArray *)arg1 ;
-(double)tagCollectionViewHeightForWidth:(double)arg1 ;
-(NSArray *)tagArray;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end
