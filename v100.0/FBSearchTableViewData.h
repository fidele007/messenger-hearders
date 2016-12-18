/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FBSearchTableViewData : NSObject {

	unique_ptr<std::__1::vector<Section, std::__1::allocator<Section> >, std::__1::default_delete<std::__1::vector<Section, std::__1::allocator<Section> > > >* _sectionsPtr;
	NSArray* _objects;
	unsigned long long _objectCount;

}

@property (nonatomic,readonly) unsigned long long objectCount;              //@synthesize objectCount=_objectCount - In the implementation block
+(id)dataFromObjectArray:(id)arg1 ;
+(id)dataFromTitleAndObjectArrayTuple:(id)arg1 ;
-(id)filterObjects:(/*^block*/id)arg1 ;
-(BOOL)rowIsSectionTitle:(id)arg1 ;
-(id)titleModelForSection:(unsigned long long)arg1 ;
-(unsigned long long)objectIndexForIndexPath:(id)arg1 ;
-(void)_shredTuple:(id)arg1 ;
-(id)initWithTuple:(id)arg1 objects:(id)arg2 ;
-(unsigned long long)objectCount;
-(id)objectAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfRowsInSection:(long long)arg1 ;
-(id)firstObject;
-(unsigned long long)numberOfSections;
-(id)allObjects;
-(BOOL)hasSectionHeader;
@end

