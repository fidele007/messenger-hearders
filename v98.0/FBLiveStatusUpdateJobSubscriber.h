/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLiveStatusUpdateJobSubscriber : NSObject {

	/*^block*/id _callback;
	NSString* _debugContext;

}

@property (nonatomic,copy,readonly) id callback;                          //@synthesize callback=_callback - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugContext;              //@synthesize debugContext=_debugContext - In the implementation block
-(id)initWithCallback:(/*^block*/id)arg1 debugContext:(id)arg2 ;
-(id)callback;
-(NSString *)debugContext;
@end
