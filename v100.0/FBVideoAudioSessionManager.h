/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAudioSessionManagerClient.h>
#import <Messenger/FBSystemAudioSessionManagerListener.h>
#import <Messenger/FBVideoPlayerAudioSessionClientProtocol.h>

@protocol FBVideoAudioSessionManagerDelegate;
@class NSString;

@interface FBVideoAudioSessionManager : NSObject <FBAudioSessionManagerClient, FBSystemAudioSessionManagerListener, FBVideoPlayerAudioSessionClientProtocol> {

	id<FBVideoAudioSessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBVideoAudioSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)deactivateAudioSession;
-(void)refreshAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)listenForRouteChangesOnly;
-(void)activateAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<FBVideoAudioSessionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBVideoAudioSessionManagerDelegate>)delegate;
-(void)beginInterruption;
@end

