/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBMVideoPlaybackEventListener.h>

@class NSString;

@interface FBMVideoPlaybackEventListenerAnnouncer : FBAnnouncerBase <FBMVideoPlaybackEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)player:(id)arg1 startedPlayingVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 stallTime:(id)arg5 origin:(id)arg6 videoID:(id)arg7 extraLogging:(id)arg8 ;
-(void)player:(id)arg1 pausedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 lastStartTimePosition:(id)arg5 origin:(id)arg6 videoID:(id)arg7 ;
-(void)player:(id)arg1 finishedPlayingVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 lastStartTimePosition:(id)arg5 origin:(id)arg6 videoID:(id)arg7 ;
-(void)player:(id)arg1 failedPlayingVideoForMessage:(id)arg2 error:(id)arg3 origin:(id)arg4 videoID:(id)arg5 ;
-(void)player:(id)arg1 requestedPlayingVideoForMessage:(id)arg2 origin:(id)arg3 videoID:(id)arg4 ;
-(void)player:(id)arg1 stalledVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 lastStartTimePosition:(id)arg5 origin:(id)arg6 videoID:(id)arg7 extraLogging:(id)arg8 ;
-(void)player:(id)arg1 unstalledVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 stallTime:(id)arg5 origin:(id)arg6 videoID:(id)arg7 extraLogging:(id)arg8 ;
-(void)player:(id)arg1 interruptedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 ;
-(void)player:(id)arg1 dismissedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

