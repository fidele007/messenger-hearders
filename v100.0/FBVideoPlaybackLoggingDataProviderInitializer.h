/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol FBVideoPlaybackLoggingDataProviderInitializer <NSObject>
@property (nonatomic,copy,readonly) NSString * videoChannelID; 
@property (nonatomic,copy,readonly) NSString * externalLogID; 
@property (nonatomic,copy,readonly) NSString * externalLogType; 
@property (nonatomic,copy,readonly) NSString * reactionComponentTrackingData; 
@property (nonatomic,copy,readonly) NSString * hostVideoID; 
@property (nonatomic,copy,readonly) NSString * initialChannelSessionID; 
@property (nonatomic,readonly) NSNumber * instreamVideoAdBreakIndex; 
@required
-(id)initWithLoggingProviderInitializer:(id)arg1 videoChannelID:(id)arg2 initialChannelSessionID:(id)arg3;
-(NSString *)videoChannelID;
-(id)forCopyingOnlyVideoHomeSession;
-(id)forCopyingOnlyStaticVideoHomeSessionID;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(NSString *)initialChannelSessionID;
-(NSString *)reactionComponentTrackingData;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 initialChannelSessionID:(id)arg5 reactionComponentTrackingData:(id)arg6;
-(id)initWithVideoChannelID:(id)arg1 staticVideoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4;
-(id)initWithHostVideoID:(id)arg1 instreamVideoAdBreakIndex:(id)arg2;
-(id)videoHomeSessionID;
-(NSString *)hostVideoID;
-(NSNumber *)instreamVideoAdBreakIndex;

@end

