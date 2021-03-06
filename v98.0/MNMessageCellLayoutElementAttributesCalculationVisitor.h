/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessageCellLayoutElementVisitor.h>

@class NSMutableArray, NSIndexPath, NSArray, NSString;

@interface MNMessageCellLayoutElementAttributesCalculationVisitor : NSObject <MNMessageCellLayoutElementVisitor> {

	NSMutableArray* _allLayoutAttributes;
	CGRect _cellFrame;
	Class _layoutAttributesClass;
	NSIndexPath* _indexPath;
	CGSize _contentSize;

}

@property (nonatomic,copy) NSIndexPath * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allLayoutAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)visitRelativeViewLayoutElement:(id)arg1 ;
-(void)visitBlockViewLayoutElement:(id)arg1 ;
-(void)visitVerticalSpaceElement:(id)arg1 ;
-(id)initWithWithCollectionViewWidth:(double)arg1 layoutAttributesClass:(Class)arg2 ;
-(NSArray *)allLayoutAttributes;
-(void)visitLayoutElements:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)contentSize;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end

