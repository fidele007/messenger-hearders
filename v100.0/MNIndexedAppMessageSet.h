/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface MNIndexedAppMessageSet : NSObject <NSFastEnumeration, NSCopying> {

	NSDictionary* _messageKeyToMessageMap;
	NSArray* _messagesInNormalizedOrder;

}
+(id)emtpySet;
-(id)newestMessage;
-(id)reverseChronologicalEnumerator;
-(id)oldestMessage;
-(id)chronologicalEnumerator;
-(id)messageByKey:(id)arg1 ;
-(id)initWithMessageKeyMap:(id)arg1 messagesInNormalizedOrder:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB110*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

