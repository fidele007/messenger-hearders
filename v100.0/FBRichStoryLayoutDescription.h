/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface FBRichStoryLayoutDescription : NSObject <NSCopying> {

	NSMutableDictionary* _elementsByID;

}

@property (nonatomic,retain) NSMutableDictionary * elementsByID;              //@synthesize elementsByID=_elementsByID - In the implementation block
-(void)addElementDescriptor:(id)arg1 ;
-(void)setElementsByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elementsByID;
-(id)elementForID:(id)arg1 ;
-(void)_enumerateElementsWithBlock:(/*^block*/id)arg1 ;
-(id)unionWithLayoutDescription:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
