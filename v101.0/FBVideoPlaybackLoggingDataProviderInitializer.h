/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
@property (nonatomic,readonly) BOOL isCreatorChannelPlaylistItem; 
@required
-(id)videoHomeSessionID;
-(id)initWithLoggingProviderInitializer:(id)arg1;
-(void)updateVideoChannelID:(id)arg1;
-(NSString *)videoChannelID;
-(id)forCopyingOnlyVideoHomeSession;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(NSString *)initialChannelSessionID;
-(NSString *)reactionComponentTrackingData;
-(BOOL)isCreatorChannelPlaylistItem;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 initialChannelSessionID:(id)arg5 reactionComponentTrackingData:(id)arg6;
-(id)initWithVideoChannelID:(id)arg1 staticVideoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4;
-(id)initWithHostVideoID:(id)arg1 instreamVideoAdBreakIndex:(id)arg2;
-(void)updateInitialChannelSessionID:(id)arg1;
-(void)updateIsCreatorChannelPlaylistItem:(BOOL)arg1;
-(id)forCopyingOnlyStaticVideoHomeSessionID;
-(NSString *)hostVideoID;
-(NSNumber *)instreamVideoAdBreakIndex;

@end

