/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FBLinkedDictionaryEntry, NSArray;

@interface FBLinkedDictionary : NSObject {

	NSMutableDictionary* _objects;
	FBLinkedDictionaryEntry* _head;
	FBLinkedDictionaryEntry* _tail;

}

@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)objectAfterObjectWithKey:(id)arg1 ;
-(id)lastKey;
-(unsigned long long)count;
-(id)init;
-(id)firstObject;
-(id)lastObject;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(id)firstKey;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
@end
