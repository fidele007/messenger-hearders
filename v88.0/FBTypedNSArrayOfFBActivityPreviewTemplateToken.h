/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray;

@interface FBTypedNSArrayOfFBActivityPreviewTemplateToken : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration> {

	NSArray* _backingArray;

}
+(id)array;
+(id)arrayWithArray:(id)arg1 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)arrayWithObjects:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
-(id)initWithBackingArray:(id)arg1 ;
-(id)toNSArray;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)sortedArrayHint;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB78*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)componentsJoinedByString:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithObjects:(id)arg1 ;
-(id)reverseObjectEnumerator;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)objectEnumerator;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
@end

