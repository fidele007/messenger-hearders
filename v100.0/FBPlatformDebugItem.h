/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPlatformDebugItem : NSObject {

	SEL _action;
	id _target;
	NSString* _title;

}

@property (nonatomic,readonly) SEL action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,__weak,readonly) id target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)itemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(SEL)action;
-(NSString *)title;
-(id)target;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

