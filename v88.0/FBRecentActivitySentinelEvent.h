/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBRecentActivitySentinelEvent : NSObject {

	int _type;
	int _channel;
	NSString* _eventName;
	NSString* _module;
	NSDictionary* _extra;
	/*^block*/id _extraBlock;

}

@property (nonatomic,readonly) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                 //@synthesize module=_module - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;              //@synthesize extra=_extra - In the implementation block
@property (nonatomic,copy,readonly) id extraBlock;                     //@synthesize extraBlock=_extraBlock - In the implementation block
@property (nonatomic,readonly) int channel;                            //@synthesize channel=_channel - In the implementation block
-(NSString *)module;
-(NSDictionary *)extra;
-(id)extraBlock;
-(id)initWithType:(int)arg1 eventName:(id)arg2 module:(id)arg3 extra:(id)arg4 extraBlock:(/*^block*/id)arg5 channel:(int)arg6 ;
-(int)type;
-(NSString *)eventName;
-(int)channel;
@end

