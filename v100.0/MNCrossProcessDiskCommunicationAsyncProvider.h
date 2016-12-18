/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCrossProcessDiskCommunicationAsyncProviding.h>

@protocol OS_dispatch_queue;
@class NSFileManager, MNFoundationFileSystemWrapper, NSString, NSObject, FBDelayer, MNCrossProcessDiskCommunicationProvider;

@interface MNCrossProcessDiskCommunicationAsyncProvider : NSObject <MNCrossProcessDiskCommunicationAsyncProviding> {

	NSFileManager* _fileManager;
	MNFoundationFileSystemWrapper* _fileSystemWrapper;
	NSString* _appGroup;
	NSObject*<OS_dispatch_queue> _queue;
	FBDelayer* _delayer;
	FBDelayer* _idleDelayer;
	MNCrossProcessDiskCommunicationProvider* _provider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFileManager:(id)arg1 fileSystemWrapper:(id)arg2 appGroup:(id)arg3 queue:(id)arg4 ;
-(void)signalIdle;
-(void)scheduleCrossProcessDiskCommunicationWork:(/*^block*/id)arg1 ;
-(void)startWithCryptoEngine:(id)arg1 ;
-(void)scheduleCrossProcessDiskCommunicationIdleWork:(/*^block*/id)arg1 ;
-(void)_setupProviderWithCryptoEngineAndSignalWork:(id)arg1 ;
-(void)_shutdownDelayerAndProvider;
-(void)_executeWork:(/*^block*/id)arg1 ;
-(void)stop;
@end

