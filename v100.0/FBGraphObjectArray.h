/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface FBGraphObjectArray : NSMutableArray {

	NSMutableArray* _jsonArray;

}
-(void)graphObjectifyAll;
-(id)initWrappingArray:(id)arg1 ;
-(id)graphObjectifyAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)reverseObjectEnumerator;
-(id)objectEnumerator;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
@end

