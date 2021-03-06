/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAutoUpdaterHandlerDelegate <NSObject>
@optional
-(void)autoUpdaterHandler:(id)arg1 shouldInstallUpdate:(id)arg2 callback:(/*^block*/id)arg3;
-(void)autoUpdaterHandler:(id)arg1 willBeginProcessingUpdate:(id)arg2;
-(void)autoUpdaterHandler:(id)arg1 willBeginStage:(unsigned long long)arg2;
-(void)autoUpdaterHandler:(id)arg1 didUpdateProgress:(id)arg2 stage:(unsigned long long)arg3;
-(void)autoUpdaterHandler:(id)arg1 didFinishStage:(unsigned long long)arg2 error:(id)arg3;
-(void)autoUpdaterHandler:(id)arg1 didFinishProcessingUpdate:(id)arg2 error:(id)arg3;
-(void)autoUpdaterHandlerWillAutomaticallyRestart:(id)arg1;

@end

