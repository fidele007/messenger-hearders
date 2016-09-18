/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBIntentTarget.h>

@class NSString, NSArray;

@interface FBVideoChannelIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _caller;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;
	NSString* _pinnedVideoFBID;

}

@property (nonatomic,copy,readonly) NSArray * channelConfigs; 
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedNodeFieldsProtocol> channelPublisher; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (nonatomic,readonly) long long openAtIndex; 
@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProviderInitializer> loggingProviderInitializer; 
@property (nonatomic,copy,readonly) NSString * FBID;                                                                      //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * caller;                                                                    //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                              //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerSubOrigin;                                                           //@synthesize playerSubOrigin=_playerSubOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * pinnedVideoFBID;                                                           //@synthesize pinnedVideoFBID=_pinnedVideoFBID - In the implementation block
+(id)videoChannelTargetWithChannelConfigs:(id)arg1 intentConfig:(const FBVideoChannelIntentConfig*)arg2 ;
+(id)videoChannelTargetWithFBID:(id)arg1 caller:(id)arg2 playerOrigin:(id)arg3 playerSubOrigin:(id)arg4 pinnedVideoFBID:(id)arg5 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(id<FBVideoPlaybackLoggingDataProviderInitializer>)loggingProviderInitializer;
-(NSString *)playerOrigin;
-(NSString *)playerSubOrigin;
-(NSArray *)channelConfigs;
-(FBMemModelObject*<FBQueriedNodeFieldsProtocol>)channelPublisher;
-(long long)openAtIndex;
-(NSString *)pinnedVideoFBID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)headerStyle;
-(NSString *)caller;
@end

