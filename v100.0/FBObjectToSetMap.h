/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBObjectToSetMapDelegate;
@class NSMutableDictionary, NSSet;

@interface FBObjectToSetMap : NSObject <NSCopying> {

	unsigned long long _keyOptions;
	NSMutableDictionary* _map;
	unsigned long long _valueOptions;
	id<FBObjectToSetMapDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSSet * allKeys; 
@property (nonatomic,copy,readonly) NSSet * allValues; 
@property (assign,nonatomic) id<FBObjectToSetMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long keyCount; 
@property (nonatomic,readonly) unsigned long long objectCount; 
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 ;
-(BOOL)containsObjectsForKey:(id)arg1 ;
-(unsigned long long)objectCount;
-(void)_removeAllObjectsForAllKeys:(BOOL)arg1 ;
-(void)_enumerateDictionary:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_notifyDelegateDidRemoveAllObjectsFromMap:(id)arg1 ;
-(void)removeAllObjectsForAllKeys;
-(id)_setForKey:(id)arg1 ;
-(void)_notifyDelegateDidRemoveObjects:(id)arg1 forKey:(id)arg2 ;
-(BOOL)removeAllObjectsForKey:(id)arg1 ;
-(void)_enumerateSet:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)keyCount;
-(BOOL)addObjects:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateObjectsForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<FBObjectToSetMapDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<FBObjectToSetMapDelegate>)delegate;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allValues;
-(BOOL)removeObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
@end

