/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBMMessageVideoDownloadListener.h>

@class NSString;

@interface FBMMessageVideoDownloadListenerAnnouncer : FBAnnouncerBase <FBMMessageVideoDownloadListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageVideoDownloaderWillStartDownloadForMessageKey:(id)arg1 ;
-(void)messageVideoDownloaderDidSucceedForMessageKey:(id)arg1 usingURL:(id)arg2 ;
-(void)messageVideoDownloaderDidFailForMessageKey:(id)arg1 error:(id)arg2 ;
-(void)messageVideoDownloaderDidDownloadWithProgress:(double)arg1 forMessageKey:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

