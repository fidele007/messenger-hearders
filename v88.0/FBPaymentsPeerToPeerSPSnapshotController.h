/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>

@class FBPaymentsPeerToPeerFetchController, FBPaymentsPeerToPeerSPSnapshotControllerListenerAnnouncer, MNPaymentsPersistentStoreCoordinator, NSString;

@interface FBPaymentsPeerToPeerSPSnapshotController : NSObject <FBPaymentsPeerToPeerFetchControllerListener> {

	FBPaymentsPeerToPeerFetchController* _fetchController;
	id _fetchToken;
	FBPaymentsPeerToPeerSPSnapshotControllerListenerAnnouncer* _announcer;
	MNPaymentsPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,readonly) BOOL isFetching; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(id)initWithFetchController:(id)arg1 persistentStoreCoordinator:(id)arg2 ;
-(void)_handleUpdatedPersistentSequenceId:(long long)arg1 ;
-(void)_handleFailToUpdatePersistentSequenceIdWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isFetching;
-(void)fetch;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

