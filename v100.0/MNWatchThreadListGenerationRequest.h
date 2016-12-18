/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNWatchThreadListGenerationRequest : NSObject <NSCopying> {

	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,copy,readonly) id successBlock;              //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy,readonly) id failureBlock;              //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)initWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)successBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)failureBlock;
@end

