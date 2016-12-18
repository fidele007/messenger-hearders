/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCameraSettingsInterface <NSObject>
@required
-(void)setSeenSaveToCameraRollOnCapturePrompt:(BOOL)arg1;
-(BOOL)hasSeenSaveToCameraRollOnCapturePrompt;
-(void)setSaveToCameraRollOnCaptureEnabled:(BOOL)arg1;
-(BOOL)isSaveToCameraRollOnCaptureEnabled;
-(void)setSeenMicrophonePermissionsWarning:(BOOL)arg1;
-(BOOL)hasSeenMicrophonePermissionsWarning;
-(void)setNumberOfSelfiePhotosTaken:(unsigned long long)arg1;
-(unsigned long long)numberOfSelfiePhotosTaken;
-(void)setNumberOfSelfieVideosTaken:(unsigned long long)arg1;
-(unsigned long long)numberOfSelfieVideosTaken;
-(void)setNumberOfMontageVideosTaken:(unsigned long long)arg1;
-(void)increaseNumberOfMontageVideosTaken;
-(unsigned long long)numberOfMontageVideosTaken;
-(void)setNumberOfMontagePhotosTaken:(unsigned long long)arg1;
-(void)increaseNumberOfMontagePhotosTaken;
-(unsigned long long)numberOfMontagePhotosTaken;

@end

