/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBGraphQLConnectionCursor;

@interface FBFeedTrailingGap : FBValueObject <NSCopying> {

	unsigned long long _type;
	FBGraphQLConnectionCursor* _chunkAfterCursor;

}

@property (nonatomic,readonly) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionCursor * chunkAfterCursor;              //@synthesize chunkAfterCursor=_chunkAfterCursor - In the implementation block
-(id)initWithType:(unsigned long long)arg1 chunkAfterCursor:(id)arg2 ;
-(FBGraphQLConnectionCursor *)chunkAfterCursor;
-(unsigned long long)type;
@end

