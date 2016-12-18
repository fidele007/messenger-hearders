/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVAudioMix;


@protocol FNFAVPlayerItem <NSObject>
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@required
-(void)requestTimeLoadedUpdate;
-(SCD_Struct_FB25*)duration;
-(id)asset;
-(long long)status;
-(AVAudioMix *)audioMix;
-(void)addOutput:(id)arg1;
-(NSArray *)loadedTimeRanges;
-(void)setAudioMix:(id)arg1;
-(id)accessLog;
-(SCD_Struct_FB25*)currentTime;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;

@end

