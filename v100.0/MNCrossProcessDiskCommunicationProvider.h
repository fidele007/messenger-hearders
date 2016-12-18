/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCrossProcessDiskCommunicationProviding.h>

@protocol OS_dispatch_queue;
@class NSFileManager, MNFoundationFileSystemWrapper, FBLoggedInUserCryptoEngine, NSURL, NSObject, NSString;

@interface MNCrossProcessDiskCommunicationProvider : NSObject <MNCrossProcessDiskCommunicationProviding> {

	NSFileManager* _fileManager;
	MNFoundationFileSystemWrapper* _fileSystemWrapper;
	FBLoggedInUserCryptoEngine* _cryptoEngine;
	NSURL* _baseURLToSharedContainer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diskWriterForOverwritingContentType:(long long)arg1 ;
-(id)diskReaderForAppendingContentType:(long long)arg1 ;
-(id)diskPurgerForAppendingContentType:(long long)arg1 ;
-(id)initWithFileManager:(id)arg1 fileSystemWrapper:(id)arg2 cryptoEngine:(id)arg3 appGroup:(id)arg4 queue:(id)arg5 ;
-(id)diskWriterForAppendingContentType:(long long)arg1 ;
-(id)diskReaderForOverwritingContentType:(long long)arg1 ;
@end

