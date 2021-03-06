/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBFunnelPayload;

@interface FBFunnelAction : NSObject {

	NSString* _actionName;
	NSString* _tag;
	double _relativeTime;
	FBFunnelPayload* _actionPayload;

}

@property (nonatomic,copy,readonly) NSString * actionName;                        //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tag;                               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) double relativeTime;                               //@synthesize relativeTime=_relativeTime - In the implementation block
@property (nonatomic,copy,readonly) FBFunnelPayload * actionPayload;              //@synthesize actionPayload=_actionPayload - In the implementation block
-(id)initWithActionName:(id)arg1 tag:(id)arg2 relativeTime:(double)arg3 actionPayload:(id)arg4 ;
-(double)relativeTime;
-(FBFunnelPayload *)actionPayload;
-(NSString *)tag;
-(NSString *)actionName;
@end

