/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBMediaUploadFlowCoordinatorListener.h>

@class NSString;

@interface FBMediaUploadFlowCoordinatorListenerAnnouncer : FBAnnouncerBase <FBMediaUploadFlowCoordinatorListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completedUploadAllMedia:(id)arg1 ;
-(void)uploadManager:(id)arg1 didStartMediaUploadItem:(id)arg2 ;
-(void)uploadManager:(id)arg1 didFinishMediaUploadItem:(id)arg2 mediaFBID:(id)arg3 ;
-(void)uploadManager:(id)arg1 didUpdateTotalProgress:(double)arg2 ;
-(void)uploadManager:(id)arg1 didUploadMediaItem:(id)arg2 failWithError:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

