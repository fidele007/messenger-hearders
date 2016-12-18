/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsUploader.h>
#import <Messenger/FBLocalContactsUploaderDelegate.h>

@protocol FBLocalContactsUploader, FBLocalContactsBatchUploaderDelegate;
@class FBDeviceImportIdStore, NSArray, NSString;

@interface FBLocalContactsBatchUploader : NSObject <FBLocalContactsUploader, FBLocalContactsUploaderDelegate> {

	id<FBLocalContactsUploader> _contactsUploader;
	FBDeviceImportIdStore* _deviceImportIdStore;
	BOOL _isCurrentlyBatching;
	unsigned long long _numberOfContactsBeingUploadedInNextBatch;
	unsigned long long _numberOfContactsToUploadInABatch;
	id<FBLocalContactsBatchUploaderDelegate> _delegate;
	NSArray* _contactsToUpload;
	NSArray* _remainingContactsToUpload;

}

@property (nonatomic,copy) NSArray * contactsToUpload;                                              //@synthesize contactsToUpload=_contactsToUpload - In the implementation block
@property (nonatomic,copy) NSArray * remainingContactsToUpload;                                     //@synthesize remainingContactsToUpload=_remainingContactsToUpload - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfContactsToUploadInABatch;                   //@synthesize numberOfContactsToUploadInABatch=_numberOfContactsToUploadInABatch - In the implementation block
@property (assign,nonatomic,__weak) id<FBLocalContactsBatchUploaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)uploadContacts:(id)arg1 importId:(id)arg2 ;
-(void)cancelContactsUpload;
-(id)initWithContactsUploader:(id)arg1 deviceImportIdStore:(id)arg2 ;
-(void)setNumberOfContactsToUploadInABatch:(unsigned long long)arg1 ;
-(void)contactUploadSkipped;
-(void)successfullyUploadedContactsWithMatchedContactIds:(id)arg1 importId:(id)arg2 ;
-(void)contactUploadFailedDueToContactImportingBeingLocked;
-(void)contactUploadFailed;
-(void)setContactsToUpload:(NSArray *)arg1 ;
-(void)setRemainingContactsToUpload:(NSArray *)arg1 ;
-(NSArray *)contactsToUpload;
-(unsigned long long)numberOfContactsToUploadInABatch;
-(NSArray *)remainingContactsToUpload;
-(void)setDelegate:(id<FBLocalContactsBatchUploaderDelegate>)arg1 ;
-(id<FBLocalContactsBatchUploaderDelegate>)delegate;
@end
