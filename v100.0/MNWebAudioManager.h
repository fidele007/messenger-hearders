/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAudioDownloaderDelegate.h>
#import <Messenger/MNAudioCacheDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNAudioCache, NSMutableArray, NSMutableDictionary, NSString;

@interface MNWebAudioManager : NSObject <MNAudioDownloaderDelegate, MNAudioCacheDelegate, FBViewerContextClassProvidable> {

	MNAudioCache* _audioCache;
	NSMutableArray* downloadDelegates;
	NSMutableArray* downloaders;
	NSMutableArray* cacheDelegates;
	NSMutableDictionary* downloaderForURL;
	NSMutableArray* failedURLs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)cancelForDelegate:(id)arg1 ;
-(void)downloadWithURL:(id)arg1 delegate:(id)arg2 ;
-(void)audioCache:(id)arg1 didFindAudio:(id)arg2 forKey:(id)arg3 userInfo:(id)arg4 ;
-(void)audioCache:(id)arg1 didNotFindAudioForKey:(id)arg2 userInfo:(id)arg3 ;
-(void)audioDownloader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)audioDownloader:(id)arg1 didFinishWithData:(id)arg2 ;
-(id)initWithAudioCache:(id)arg1 ;
-(void)downloadWithURL:(id)arg1 delegate:(id)arg2 retryFailed:(BOOL)arg3 ;
-(void)downloadWithURL:(id)arg1 delegate:(id)arg2 retryFailed:(BOOL)arg3 lowPriority:(BOOL)arg4 ;
-(id)audioWithURL:(id)arg1 ;
-(void)dealloc;
@end

