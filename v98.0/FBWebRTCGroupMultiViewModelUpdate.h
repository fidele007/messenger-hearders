/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBWebRTCGroupMultiViewModelUpdate : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSArray* _insertion_indexPaths;
	NSArray* _deletion_indexPaths;
	NSArray* _reload_indexPaths;

}
+(id)insertionWithIndexPaths:(id)arg1 ;
+(id)deletionWithIndexPaths:(id)arg1 ;
+(id)reloadWithIndexPaths:(id)arg1 ;
+(id)none;
-(void)matchNone:(/*^block*/id)arg1 insertion:(/*^block*/id)arg2 deletion:(/*^block*/id)arg3 reload:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

