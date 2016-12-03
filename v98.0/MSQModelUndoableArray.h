/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MSQModelUndoableObject.h>
#import <Messenger/MSQModelUndoable.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray, NSString;

@interface MSQModelUndoableArray : MSQModelUndoableObject <MSQModelUndoable, NSFastEnumeration> {

	NSMutableArray* _mutableObjects;
	NSArray* _suspendedObjects;
	BOOL _hasSuspendedValue;
	BOOL _shouldSuspendValue;
	long long _undoableState;
	/*^block*/id _beforeInsertBlock;
	/*^block*/id _afterInsertBlock;
	/*^block*/id _beforeRemoveBlock;
	/*^block*/id _afterRemoveBlock;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,copy) id beforeInsertBlock;                       //@synthesize beforeInsertBlock=_beforeInsertBlock - In the implementation block
@property (nonatomic,copy) id afterInsertBlock;                        //@synthesize afterInsertBlock=_afterInsertBlock - In the implementation block
@property (nonatomic,copy) id beforeRemoveBlock;                       //@synthesize beforeRemoveBlock=_beforeRemoveBlock - In the implementation block
@property (nonatomic,copy) id afterRemoveBlock;                        //@synthesize afterRemoveBlock=_afterRemoveBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long undoableState; 
+(id)arrayWrappingUndoableWithKeypath:(id)arg1 objectContext:(id)arg2 documentContext:(id)arg3 ;
+(id)arrayWrappingCopyableWithKeypath:(id)arg1 objectContext:(id)arg2 documentContext:(id)arg3 ;
+(id)arrayWithKeypath:(id)arg1 objectContext:(id)arg2 documentContext:(id)arg3 ;
-(long long)undoableState;
-(void)setUndoableState:(long long)arg1 ;
-(void)setBeforeInsertBlock:(id)arg1 ;
-(void)setAfterInsertBlock:(id)arg1 ;
-(void)setBeforeRemoveBlock:(id)arg1 ;
-(void)setAfterRemoveBlock:(id)arg1 ;
-(id)initWithKeypath:(id)arg1 options:(unsigned long long)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(void)_suspendObjects;
-(void)_registerPreviousArray:(id)arg1 ;
-(id)beforeInsertBlock;
-(id)afterInsertBlock;
-(id)beforeRemoveBlock;
-(id)afterRemoveBlock;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB79*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSArray *)allObjects;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
@end
