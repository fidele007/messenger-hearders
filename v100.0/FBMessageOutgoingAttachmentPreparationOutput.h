/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface FBMessageOutgoingAttachmentPreparationOutput : FBValueObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progress;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id progress;                                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) id completion;                                   //@synthesize completion=_completion - In the implementation block
-(id)initWithQueue:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)completion;
-(id)progress;
-(NSObject*<OS_dispatch_queue>)queue;
@end

