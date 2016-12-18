/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNNetworkFullPowerInterval : FBValueObject <NSCopying> {

	BOOL _didWakeUpRadio;
	double _startTime;
	double _endTime;
	unsigned long long _requestType;
	NSString* _requestName;

}

@property (nonatomic,readonly) double startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) BOOL didWakeUpRadio;                         //@synthesize didWakeUpRadio=_didWakeUpRadio - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestName;                 //@synthesize requestName=_requestName - In the implementation block
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 didWakeUpRadio:(BOOL)arg3 requestType:(unsigned long long)arg4 requestName:(id)arg5 ;
-(BOOL)didWakeUpRadio;
-(double)startTime;
-(double)endTime;
-(NSString *)requestName;
-(unsigned long long)requestType;
@end

