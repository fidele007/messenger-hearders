/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBNetworkerRequestDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNGroupThreadCreatorDelegate;
@class FBUserSession, MNSimpleSingleThreadFetcher, UIImage, FBGraphBatchParticipatingRequest, FBSimpleNetworkerRequest, FBMUserFetchedListeningAnnouncer, NSString;

@interface MNGroupThreadCreator : NSObject <FBNetworkerRequestDelegate, FBClassProvidable> {

	FBUserSession* _session;
	MNSimpleSingleThreadFetcher* _simpleThreadFetcher;
	UIImage* _profileImage;
	FBGraphBatchParticipatingRequest* _createGroupRequest;
	FBGraphBatchParticipatingRequest* _setProfileImageRequest;
	FBGraphBatchParticipatingRequest* _pinGroupRequest;
	FBSimpleNetworkerRequest* _request;
	FBMUserFetchedListeningAnnouncer* _userFetchedAnnouncer;
	id<MNGroupThreadCreatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNGroupThreadCreatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 simpleThreadFetcher:(id)arg2 userFetchedListeningAnnouncer:(id)arg3 ;
-(void)_createGroupThreadWithName:(id)arg1 request:(id)arg2 profileImage:(id)arg3 shouldPinGroup:(BOOL)arg4 ;
-(void)_clearRequest;
-(double)_uploadTimeRatio;
-(BOOL)_handleCreateThreadResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleSetProfileImageResponse:(id)arg1 ;
-(void)_handlePinGroupResponse:(id)arg1 ;
-(void)_setOffThreadStoreRequestAfterSuccessfulThreadCreation:(id)arg1 ;
-(void)_didSucceedAndFetchedThread:(id)arg1 ;
-(void)createGroupThreadWithName:(id)arg1 recipients:(id)arg2 profileImage:(id)arg3 shouldPinGroup:(BOOL)arg4 isRoom:(BOOL)arg5 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequestDidStart:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)cancel;
-(void)setDelegate:(id<MNGroupThreadCreatorDelegate>)arg1 ;
-(id<MNGroupThreadCreatorDelegate>)delegate;
-(void)_didFailWithError:(id)arg1 ;
@end

